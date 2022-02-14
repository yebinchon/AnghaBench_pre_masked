
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef scalar_t__ HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static BOOL FUNC_2(LPCWSTR VAR_7)
{
  HANDLE VAR_8;

  VAR_8 = FUNC_1(VAR_7, VAR_3|VAR_4, 0, ((void*)0),
       VAR_0, VAR_2, ((void*)0));

  if(VAR_8 == VAR_5)
    return VAR_1;
  FUNC_0(VAR_8);
  return VAR_6;
}
