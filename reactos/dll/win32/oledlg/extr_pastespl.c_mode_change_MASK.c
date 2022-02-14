
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ ps_struct_t ;
typedef scalar_t__ UINT ;
typedef int HWND ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(HWND VAR_5, ps_struct_t *VAR_6, UINT VAR_7)
{
    if(VAR_7 == VAR_0)
    {
        VAR_6->flags &= ~VAR_4;
        VAR_6->flags |= VAR_3;
    }
    else
    {
        VAR_6->flags &= ~VAR_3;
        VAR_6->flags |= VAR_4;
    }

    FUNC_2(VAR_5, VAR_6);
    FUNC_1(VAR_5, VAR_7 == VAR_0 ? VAR_2 : VAR_1);
    FUNC_0(VAR_5, VAR_6);
}
