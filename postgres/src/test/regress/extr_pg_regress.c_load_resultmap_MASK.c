
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf ;
struct TYPE_4__ {struct TYPE_4__* next; void* resultfile; void* type; void* test; } ;
typedef TYPE_1__ _resultmap ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,char*,...) ;
 int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ FUNC_6 (unsigned char) ;
 TYPE_1__* FUNC_7 (int) ;
 void* FUNC_8 (char*) ;
 char* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_9 (char*,int,char*,char*) ;
 int VAR_7 ;
 char* FUNC_10 (char*,char) ;
 char* FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int ,char*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void
FUNC_14(void)
{
 char VAR_8[VAR_1];
 FILE *VAR_9;


 FUNC_9(VAR_8, sizeof(VAR_8), "%s/resultmap", VAR_4);
 VAR_9 = FUNC_4(VAR_8, "r");
 if (!VAR_9)
 {

  if (VAR_2 == VAR_0)
   return;
  FUNC_5(VAR_7, FUNC_0("%s: could not open file \"%s\" for reading: %s\n"),
    VAR_5, VAR_8, FUNC_11(VAR_2));
  FUNC_1(2);
 }

 while (FUNC_3(VAR_8, sizeof(VAR_8), VAR_9))
 {
  char *VAR_10;
  char *VAR_11;
  char *VAR_12;
  int VAR_13;


  VAR_13 = FUNC_13(VAR_8);
  while (VAR_13 > 0 && FUNC_6((unsigned char) VAR_8[VAR_13 - 1]))
   VAR_8[--VAR_13] = '\0';


  VAR_11 = FUNC_10(VAR_8, ':');
  if (!VAR_11)
  {
   FUNC_5(VAR_7, FUNC_0("incorrectly formatted resultmap entry: %s\n"),
     VAR_8);
   FUNC_1(2);
  }
  *VAR_11++ = '\0';

  VAR_10 = FUNC_10(VAR_11, ':');
  if (!VAR_10)
  {
   FUNC_5(VAR_7, FUNC_0("incorrectly formatted resultmap entry: %s\n"),
     VAR_8);
   FUNC_1(2);
  }
  *VAR_10++ = '\0';
  VAR_12 = FUNC_10(VAR_10, '=');
  if (!VAR_12)
  {
   FUNC_5(VAR_7, FUNC_0("incorrectly formatted resultmap entry: %s\n"),
     VAR_8);
   FUNC_1(2);
  }
  *VAR_12++ = '\0';







  if (FUNC_12(VAR_3, VAR_10))
  {
   _resultmap *VAR_14 = FUNC_7(sizeof(_resultmap));

   VAR_14->test = FUNC_8(VAR_8);
   VAR_14->type = FUNC_8(VAR_11);
   VAR_14->resultfile = FUNC_8(VAR_12);
   VAR_14->next = VAR_6;
   VAR_6 = VAR_14;
  }
 }
 FUNC_2(VAR_9);
}
