
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VARIANT ;
struct TYPE_3__ {int member_3; int member_2; int * member_1; int * member_0; } ;
typedef int LPWSTR ;
typedef int HRESULT ;
typedef TYPE_1__ DISPPARAMS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,TYPE_1__*,int *,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_4(LPWSTR VAR_3)
{
    VARIANT VAR_4;
    DISPPARAMS VAR_5 = {((void*)0), ((void*)0), 0, 0};
    HRESULT VAR_6;

    VAR_6 = FUNC_2(VAR_2, "Version", VAR_0, &VAR_5, &VAR_4, VAR_1);
    if (FUNC_0(&VAR_4)) FUNC_3(VAR_3, FUNC_0(&VAR_4));
    FUNC_1(&VAR_4);
    return VAR_6;
}
