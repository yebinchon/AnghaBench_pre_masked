
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SV ;
typedef scalar_t__ SSize_t ;
typedef int JsonbValue ;
typedef int JsonbParseState ;
typedef int AV ;


 int VAR_0 ;
 int FUNC_0 (int *,int **,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int ** FUNC_1 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_3 ;
 int * FUNC_3 (int **,int ,int *) ;

__attribute__((used)) static JsonbValue *
FUNC_4(AV *VAR_4, JsonbParseState **VAR_5)
{
 VAR_3;
 SSize_t VAR_6 = FUNC_2(VAR_4) + 1;
 SSize_t VAR_7;

 FUNC_3(VAR_5, VAR_1, ((void*)0));

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
  SV **VAR_8 = FUNC_1(VAR_4, VAR_7, VAR_0);

  if (VAR_8)
   (void) FUNC_0(*VAR_8, VAR_5, 1);
 }

 return FUNC_3(VAR_5, VAR_2, ((void*)0));
}
