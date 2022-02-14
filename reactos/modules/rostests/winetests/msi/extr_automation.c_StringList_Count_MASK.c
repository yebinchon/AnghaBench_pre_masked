
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ,TYPE_1__*,int *,int ) ;

__attribute__((used)) static HRESULT FUNC_3(IDispatch *VAR_2, int *VAR_3)
{
    VARIANT VAR_4;
    DISPPARAMS VAR_5 = {((void*)0), ((void*)0), 0, 0};
    HRESULT VAR_6 = FUNC_2(VAR_2, "Count", VAR_0, &VAR_5, &VAR_4, VAR_1);
    *VAR_3 = FUNC_0(&VAR_4);
    FUNC_1(&VAR_4);
    return VAR_6;
}
