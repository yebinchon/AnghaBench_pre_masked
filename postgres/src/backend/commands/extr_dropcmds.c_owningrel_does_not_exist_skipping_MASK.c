
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RangeVar ;
typedef int List ;


 char* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int ,scalar_t__) ;
 int * FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,char const**,char**) ;

__attribute__((used)) static bool
FUNC_9(List *VAR_1, const char **VAR_2, char **VAR_3)
{
 List *VAR_4;
 RangeVar *VAR_5;

 VAR_4 = FUNC_6(FUNC_4(VAR_1),
          FUNC_5(VAR_1) - 1);

 if (FUNC_8(VAR_4, VAR_2, VAR_3))
  return 1;

 VAR_5 = FUNC_7(VAR_4);

 if (!FUNC_1(FUNC_2(VAR_5, VAR_0, 1)))
 {
  *VAR_2 = FUNC_3("relation \"%s\" does not exist, skipping");
  *VAR_3 = FUNC_0(VAR_4);

  return 1;
 }

 return 0;
}
