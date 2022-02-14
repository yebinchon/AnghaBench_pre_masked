
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* mac_start; char* mac_end; int mac_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 char FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 () ;
 int VAR_7 ;
 char** VAR_8 ;
 int FUNC_4 (char*,...) ;
 int VAR_9 ;
 int FUNC_5 (int *,char*) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (int ,char const*,int) ;

void FUNC_8(int VAR_10, const char *VAR_11[])
{
 char *VAR_12;
 int VAR_13;

 if (VAR_5 == 16) {
  FUNC_4("Limit of 16 macros have already been defined\n");
  (void) FUNC_0(VAR_9);
  VAR_1 = -1;
  return;
 }
 if (VAR_10 < 2) {
  (void) FUNC_5(VAR_3, " ");
  FUNC_4("(macro name) ");
  (void) FUNC_0(VAR_9);
  (void) FUNC_2(&VAR_3[FUNC_6(VAR_3)]);
  FUNC_3();
  VAR_10 = VAR_7;
  VAR_11 = VAR_8;
 }
 if (VAR_10 != 2) {
  FUNC_4("Usage: %s macro_name\n",VAR_11[0]);
  (void) FUNC_0(VAR_9);
  VAR_1 = -1;
  return;
 }
 if (VAR_2) {
  FUNC_4("Enter macro line by line, terminating it with a null line\n");
  (void) FUNC_0(VAR_9);
 }
 (void) FUNC_7(VAR_6[VAR_5].mac_name, VAR_11[1], 8);
 if (VAR_5 == 0) {
  VAR_6[VAR_5].mac_start = VAR_4;
 }
 else {
  VAR_6[VAR_5].mac_start = VAR_6[VAR_5 - 1].mac_end + 1;
 }
 VAR_12 = VAR_6[VAR_5].mac_start;
 while (VAR_12 != VAR_4+4096) {
  if ((VAR_13 = FUNC_1()) == VAR_0) {
   FUNC_4("macdef:end of file encountered\n");
   (void) FUNC_0(VAR_9);
   VAR_1 = -1;
   return;
  }
  if ((*VAR_12 = VAR_13) == '\n') {
   if (VAR_12 == VAR_6[VAR_5].mac_start) {
    VAR_6[VAR_5++].mac_end = VAR_12;
    VAR_1 = 0;
    return;
   }
   if (*(VAR_12-1) == '\0') {
    VAR_6[VAR_5++].mac_end = VAR_12 - 1;
    VAR_1 = 0;
    return;
   }
   *VAR_12 = '\0';
  }
  VAR_12++;
 }
 while (1) {
  while ((VAR_13 = FUNC_1()) != '\n' && VAR_13 != VAR_0)
             ;
  if (VAR_13 == VAR_0 || FUNC_1() == '\n') {
   FUNC_4("Macro not defined - 4k buffer exceeded\n");
   (void) FUNC_0(VAR_9);
   VAR_1 = -1;
   return;
  }
 }
}
