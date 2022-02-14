
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int ps; } ;
typedef TYPE_1__ ps_struct_t ;
typedef scalar_t__ UINT ;
typedef int HWND ;
typedef int DWORD ;


 int FUNC_0 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(HWND VAR_7, ps_struct_t *VAR_8)
{
    DWORD VAR_9 = FUNC_4(VAR_7, VAR_8->ps);
    DWORD VAR_10 = FUNC_3(VAR_7, VAR_8->ps);
    UINT VAR_11, VAR_12;

    if((VAR_8->flags & (VAR_5 | VAR_6)) == 0)
        VAR_8->flags |= VAR_5;

    if(!VAR_9 && !VAR_10)
        VAR_8->flags &= ~(VAR_5 | VAR_6);
    else if(!VAR_9 && (VAR_8->flags & VAR_5))
    {
        VAR_8->flags &= ~VAR_5;
        VAR_8->flags |= VAR_6;
    }
    else if(!VAR_10 && (VAR_8->flags & VAR_6))
    {
        VAR_8->flags &= ~VAR_6;
        VAR_8->flags |= VAR_5;
    }

    VAR_11 = 0;
    VAR_12 = 0;
    if(VAR_8->flags & VAR_5)
    {
        VAR_11 = VAR_0;
        VAR_12 = VAR_3;
    }
    else if(VAR_8->flags & VAR_6)
    {
        VAR_11 = VAR_1;
        VAR_12 = VAR_2;
    }

    FUNC_0(VAR_7, VAR_0, VAR_1, VAR_11);

    if(VAR_12)
        FUNC_5(VAR_7, VAR_12);
    else
        FUNC_1(FUNC_2(VAR_7, VAR_4), 0);
}
