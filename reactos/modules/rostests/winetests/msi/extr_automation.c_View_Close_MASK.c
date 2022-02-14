
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VARIANT ;
struct TYPE_3__ {int member_3; int member_2; int * member_1; int * member_0; } ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef TYPE_1__ DISPPARAMS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,TYPE_1__*,int *,int ) ;

__attribute__((used)) static HRESULT FUNC_1(IDispatch *VAR_2)
{
    VARIANT VAR_3;
    DISPPARAMS VAR_4 = {((void*)0), ((void*)0), 0, 0};
    return FUNC_0(VAR_2, "Close", VAR_0, &VAR_4, &VAR_3, VAR_1);
}
