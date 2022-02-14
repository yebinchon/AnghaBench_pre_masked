
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int enabled; char* friendly_name; } ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int,int ,char*,...) ;
 char FUNC_3 (int,char**,char*,int ,int*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (TYPE_1__,TYPE_1__) ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;

int FUNC_7(int VAR_5, char **VAR_6)
{
 bool VAR_7 = 1;
 bool VAR_8 = 1;
 int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11, VAR_12;
 char VAR_13;

 while ((VAR_13 = FUNC_3(VAR_5, VAR_6, "", VAR_0,
      &VAR_9)) != -1) {
  switch (VAR_13) {
  case 'l':
   for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_4); VAR_12++) {
    FUNC_5("%d\t", VAR_12);
    FUNC_4(&VAR_4[VAR_12]);
   }
   return 0;
  case 'n':
   VAR_12 = FUNC_1(VAR_2);
   if (VAR_12 >= FUNC_0(VAR_4))
    FUNC_2(1, 0, "Invalid test case: %d", VAR_12);
   VAR_8 = 0;
   VAR_4[VAR_12].enabled = 1;
   break;
  case 's':
   VAR_1 = FUNC_1(VAR_2);
   break;
  case 't':
   VAR_7 = 0;
   VAR_3[2].enabled = 1;
   break;
  case 'u':
   VAR_7 = 0;
   VAR_3[1].enabled = 1;
   break;
  case 'i':
   VAR_7 = 0;
   VAR_3[0].enabled = 1;
   break;
  default:
   FUNC_2(1, 0, "Failed to parse parameters.");
  }
 }

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3); VAR_11++) {
  if (!VAR_7 && !VAR_3[VAR_11].enabled)
   continue;

  FUNC_5("Testing %s...\n", VAR_3[VAR_11].friendly_name);
  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_4); VAR_12++) {
   if (!VAR_8 && !VAR_4[VAR_12].enabled)
    continue;

   FUNC_5("Starting testcase %d...\n", VAR_12);
   if (FUNC_6(VAR_3[VAR_11], VAR_4[VAR_12])) {
    VAR_10++;
    FUNC_5("FAILURE in test case ");
    FUNC_4(&VAR_4[VAR_12]);
   }
  }
 }
 if (!VAR_10)
  FUNC_5("PASSED.\n");
 return VAR_10;
}
