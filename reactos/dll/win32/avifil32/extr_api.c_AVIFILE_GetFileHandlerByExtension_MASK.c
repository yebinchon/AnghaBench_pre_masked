
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPWSTR ;
typedef int LPCWSTR ;
typedef int LPCLSID ;
typedef int LONG ;
typedef int CHAR ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int *,int *,int *) ;
 scalar_t__ VAR_3 ;
 int * FUNC_3 (int ,char) ;
 int FUNC_4 (int *,char*,int *) ;

__attribute__((used)) static BOOL FUNC_5(LPCWSTR VAR_4, LPCLSID VAR_5)
{
  CHAR VAR_6[25];
  CHAR VAR_7[100];
  LPWSTR VAR_8 = FUNC_3(VAR_4, '.');
  LONG VAR_9 = FUNC_0(VAR_7);

  if (VAR_8 == ((void*)0))
    return VAR_1;

  VAR_8++;

  FUNC_4(VAR_6, "AVIFile\\Extensions\\%.3ls", VAR_8);
  if (FUNC_2(VAR_2, VAR_6, VAR_7, &VAR_9) != VAR_0)
    return VAR_1;

  return (FUNC_1(VAR_7, VAR_5) == VAR_3);
}
