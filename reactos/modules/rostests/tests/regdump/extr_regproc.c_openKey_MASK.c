
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPTSTR ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,int ,int *,int ,int ,int *,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

HRESULT FUNC_3(LPTSTR VAR_9)
{
  DWORD VAR_10;
  HRESULT VAR_11;


  if (VAR_9 == ((void*)0))
    return VAR_0;


  VAR_6 = FUNC_1(VAR_9);
  if (VAR_6 == (HKEY)VAR_0)
    return (HRESULT)VAR_0;


  VAR_8 = FUNC_2(VAR_9);
  if (VAR_8 == ((void*)0))
    return VAR_0;

  VAR_11 = FUNC_0(
          VAR_6,
          VAR_8,
          0,
          ((void*)0),
          VAR_3,
          VAR_2,
          ((void*)0),
          &VAR_7,
          &VAR_10);


  if (VAR_11 == VAR_1)
    VAR_5 = VAR_4;

  return VAR_11;

}
