
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int iIcon; } ;
typedef TYPE_1__ SHFILEINFOW ;
typedef int LPCWSTR ;
typedef scalar_t__ LPCITEMIDLIST ;


 int FUNC_0 (int ,int ,TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_1(LPCITEMIDLIST VAR_0, UINT VAR_1)
{
    SHFILEINFOW VAR_2;
    FUNC_0((LPCWSTR)VAR_0, 0 ,&VAR_2, sizeof(SHFILEINFOW), VAR_1);
    return VAR_2.iIcon;
}
