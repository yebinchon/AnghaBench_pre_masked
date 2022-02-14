
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_3; int member_2; int * member_1; int * member_0; } ;
typedef int LPVARIANT ;
typedef int HRESULT ;
typedef TYPE_1__ DISPPARAMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int *,int ,int ,TYPE_1__*,int ,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static HRESULT FUNC_3(LPVARIANT VAR_7, LPVARIANT VAR_8)
{
    HRESULT VAR_9;
    static DISPPARAMS VAR_10 = { ((void*)0), ((void*)0), 0, 0 };

    if ((FUNC_2(VAR_7) & VAR_6) == VAR_5) {
        if (((void*)0) == FUNC_1(VAR_7)) return VAR_2;
        VAR_9 = FUNC_0(FUNC_1(VAR_7), VAR_1, &VAR_3,
            VAR_4, VAR_0, &VAR_10, VAR_8,
            ((void*)0), ((void*)0));
    } else {
        VAR_9 = VAR_2;
    }
    return VAR_9;
}
