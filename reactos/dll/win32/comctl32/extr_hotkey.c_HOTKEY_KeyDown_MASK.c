
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_4__ {scalar_t__ HotKey; scalar_t__ CurrMod; scalar_t__ InvMod; int ScanCode; scalar_t__ hwndSelf; int hwndNotify; } ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef TYPE_1__ HOTKEY_INFO ;
typedef int DWORD ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (scalar_t__,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__,int *,int ) ;
 void* FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static LRESULT
FUNC_9 (HOTKEY_INFO *VAR_9, DWORD VAR_10, DWORD VAR_11)
{
    WORD VAR_12;
    BYTE VAR_13;

    if (FUNC_2(VAR_9->hwndSelf, VAR_1) & VAR_8)
        return 0;

    FUNC_8("() Key: %d\n", VAR_10);

    VAR_12 = VAR_9->HotKey;
    VAR_13 = VAR_9->CurrMod;


    VAR_9->HotKey = 0;

    switch (VAR_10)
    {
 case 131:
 case 128:
 case 129:
 case 134:
 case 133:
 case 136:
     FUNC_4(VAR_9->hwndSelf, ((void*)0), VAR_5);
     return FUNC_0 (VAR_9->hwndSelf, VAR_7, VAR_10, VAR_11);

 case 130:
     VAR_9->CurrMod |= VAR_4;
     break;
 case 135:
     VAR_9->CurrMod |= VAR_3;
     break;
 case 132:
     VAR_9->CurrMod |= VAR_2;
     break;

 default:
     if(FUNC_3(VAR_9))
         VAR_9->HotKey = FUNC_5(VAR_10, VAR_9->InvMod);
     else
         VAR_9->HotKey = FUNC_5(VAR_10, VAR_9->CurrMod);
     VAR_9->ScanCode = VAR_11;
     break;
    }

    if ((VAR_12 != VAR_9->HotKey) || (VAR_13 != VAR_9->CurrMod))
    {
        FUNC_4(VAR_9->hwndSelf, ((void*)0), VAR_5);


        FUNC_7(VAR_9->hwndNotify, VAR_6,
            FUNC_6(FUNC_1(VAR_9->hwndSelf), VAR_0),
            (LPARAM)VAR_9->hwndSelf);
    }

    return 0;
}
