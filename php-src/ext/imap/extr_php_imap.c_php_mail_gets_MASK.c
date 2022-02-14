
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* readfn_t ) (void*,unsigned long,char*) ;
typedef int GETS_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 char* FUNC_2 (unsigned long,int) ;
 int FUNC_3 (int *,int ,char*) ;
 unsigned long FUNC_4 (scalar_t__,char*,unsigned long) ;

__attribute__((used)) static char *FUNC_5(readfn_t VAR_3, void *VAR_4, unsigned long VAR_5, GETS_DATA *VAR_6)
{



 if (FUNC_0(VAR_2)) {
  char VAR_7[VAR_1];

  while (VAR_5) {
   unsigned long VAR_8;

   if (VAR_5 > VAR_1) {
    VAR_8 = VAR_1;
    VAR_5 -=VAR_1;
   } else {
    VAR_8 = VAR_5;
    VAR_5 = 0;
   }

   if (!VAR_3(VAR_4, VAR_8, VAR_7)) {
    FUNC_3(((void*)0), VAR_0, "Failed to read from socket");
    break;
   } else if (VAR_8 != FUNC_4(FUNC_0(VAR_2), VAR_7, VAR_8)) {
    FUNC_3(((void*)0), VAR_0, "Failed to write to stream");
    break;
   }
  }
  return ((void*)0);
 } else {
  char *VAR_9 = FUNC_2(VAR_5 + 1, 1);

  if (VAR_3(VAR_4, VAR_5, VAR_9)) {
   VAR_9[VAR_5] = '\0';
  } else {
   FUNC_3(((void*)0), VAR_0, "Failed to read from socket");
   FUNC_1(VAR_9);
   VAR_9 = ((void*)0);
  }
  return VAR_9;
 }
}
