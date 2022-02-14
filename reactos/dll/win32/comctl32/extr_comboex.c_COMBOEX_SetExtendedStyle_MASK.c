
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwExtStyle; scalar_t__ hwndEdit; scalar_t__ hwndSelf; } ;
typedef int DWORD ;
typedef TYPE_1__ COMBOEX_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int *,int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (char*,int,...) ;
 int VAR_3 ;

__attribute__((used)) static DWORD
FUNC_4 (COMBOEX_INFO *VAR_4, DWORD VAR_5, DWORD VAR_6)
{
    DWORD VAR_7;

    FUNC_3("(mask=x%08x, style=0x%08x)\n", VAR_5, VAR_6);

    VAR_7 = VAR_4->dwExtStyle;

    if (VAR_5)
 VAR_4->dwExtStyle = (VAR_4->dwExtStyle & ~VAR_5) | VAR_6;
    else
 VAR_4->dwExtStyle = VAR_6;


    if ((VAR_4->dwExtStyle ^ VAR_7) & VAR_2)
        FUNC_2(VAR_4->hwndEdit,
            (VAR_4->dwExtStyle & VAR_2) != 0);


    VAR_5 = VAR_0 | VAR_1;
    if ((VAR_4->dwExtStyle & VAR_5) != (VAR_7 & VAR_5)) {

 FUNC_3("EX_NOEDITIMAGE state changed to %d\n",
       VAR_4->dwExtStyle & VAR_0);
 FUNC_1 (VAR_4->hwndSelf, ((void*)0), VAR_3);
 FUNC_0 (VAR_4);
 if (VAR_4->hwndEdit)
     FUNC_1 (VAR_4->hwndEdit, ((void*)0), VAR_3);
    }

    return VAR_7;
}
