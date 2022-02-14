
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hwndSelf; int strNone; int CaretPos; scalar_t__ CurrMod; scalar_t__ InvMod; scalar_t__ InvComb; scalar_t__ HotKey; } ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_1__ HOTKEY_INFO ;
typedef int DWORD_PTR ;
typedef int DWORD ;
typedef int CREATESTRUCTW ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ,int) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_6 (int) ;

__attribute__((used)) static inline LRESULT
FUNC_7 (HWND VAR_6, const CREATESTRUCTW *VAR_7)
{
    HOTKEY_INFO *VAR_8;
    DWORD VAR_9 = FUNC_2 (VAR_6, VAR_1);
    FUNC_5 (VAR_6, VAR_1,
                    VAR_9 | VAR_5);


    VAR_8 = FUNC_6 (sizeof(*VAR_8));
    FUNC_4(VAR_6, 0, (DWORD_PTR)VAR_8);


    VAR_8->HotKey = VAR_8->InvComb = VAR_8->InvMod = VAR_8->CurrMod = 0;
    VAR_8->CaretPos = FUNC_1(VAR_3);
    VAR_8->hwndSelf = VAR_6;
    FUNC_3(VAR_0, VAR_2, VAR_8->strNone, 15);

    return FUNC_0 (VAR_8->hwndSelf, VAR_4, 0, (LPARAM)VAR_7);
}
