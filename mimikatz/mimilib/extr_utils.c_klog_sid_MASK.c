
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PSID ;
typedef int LPWSTR ;
typedef int FILE ;


 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ) ;

void FUNC_3(FILE * VAR_0, PSID VAR_1)
{
 LPWSTR VAR_2;
 if(VAR_1 && FUNC_0(VAR_1, &VAR_2))
 {
  FUNC_2(VAR_0, L"%s", VAR_2);
  FUNC_1(VAR_2);
 }
}
