
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ CurrMod; scalar_t__ hwndSelf; int hwndNotify; } ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef TYPE_1__ HOTKEY_INFO ;
typedef int DWORD ;
typedef scalar_t__ BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__,int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (char*,int) ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static LRESULT
FUNC_6 (HOTKEY_INFO *VAR_8, DWORD VAR_9)
{
    BYTE VAR_10;

    if (FUNC_1(VAR_8->hwndSelf, VAR_1) & VAR_7)
        return 0;

    FUNC_5("() Key: %d\n", VAR_9);

    VAR_10 = VAR_8->CurrMod;

    switch (VAR_9)
    {
 case 128:
     VAR_8->CurrMod &= ~VAR_4;
     break;
 case 130:
     VAR_8->CurrMod &= ~VAR_3;
     break;
 case 129:
     VAR_8->CurrMod &= ~VAR_2;
     break;
 default:
     return 1;
    }

    if (VAR_10 != VAR_8->CurrMod)
    {
        FUNC_2(VAR_8->hwndSelf, ((void*)0), VAR_5);


        FUNC_4(VAR_8->hwndNotify, VAR_6,
            FUNC_3(FUNC_0(VAR_8->hwndSelf), VAR_0),
            (LPARAM)VAR_8->hwndSelf);
    }

    return 0;
}
