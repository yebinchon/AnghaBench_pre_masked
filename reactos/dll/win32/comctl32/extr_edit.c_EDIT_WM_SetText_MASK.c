
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {int flags; int style; scalar_t__ hwndListBox; scalar_t__ x_offset; } ;
typedef int * LPCWSTR ;
typedef TYPE_1__ EDITSTATE ;


 int FUNC_0 (TYPE_1__*,int ,int *,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(EDITSTATE *VAR_6, LPCWSTR VAR_7)
{
    if (VAR_6->flags & VAR_1)

        FUNC_6("SetSel may generate UPDATE message whose handler may reset "
            "selection.\n");

    FUNC_2(VAR_6, 0, (UINT)-1, VAR_5);
    if (VAR_7)
    {
 FUNC_7("%s\n", FUNC_8(VAR_7));
 FUNC_0(VAR_6, VAR_5, VAR_7, FUNC_9(VAR_7), VAR_5, VAR_5);
    }
    else
    {
 FUNC_7("<NULL>\n");
 FUNC_0(VAR_6, VAR_5, ((void*)0), 0, VAR_5, VAR_5);
    }
    VAR_6->x_offset = 0;
    VAR_6->flags &= ~VAR_0;
    FUNC_2(VAR_6, 0, 0, VAR_5);





    if( !((VAR_6->style & VAR_4) || VAR_6->hwndListBox))
    {
        FUNC_4(VAR_6, VAR_3);
        FUNC_4(VAR_6, VAR_2);
    }
    FUNC_1(VAR_6);
    FUNC_5(VAR_6);
    FUNC_3(VAR_6);
}
