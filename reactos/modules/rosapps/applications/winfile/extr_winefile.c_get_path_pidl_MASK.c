
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_2__ {int iDesktop; } ;
typedef int LPWSTR ;
typedef int * LPITEMIDLIST ;
typedef int HWND ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ,int ,int *,int ,int *,int **,int *) ;

__attribute__((used)) static LPITEMIDLIST FUNC_2(LPWSTR VAR_1, HWND VAR_2)
{
 LPITEMIDLIST VAR_3;
 HRESULT VAR_4;
 ULONG VAR_5;
 LPWSTR VAR_6 = VAR_1;

 VAR_4 = FUNC_1(VAR_0.iDesktop, VAR_2, ((void*)0), VAR_6, &VAR_5, &VAR_3, ((void*)0));
 if (FUNC_0(VAR_4))
  return ((void*)0);

 return VAR_3;
}
