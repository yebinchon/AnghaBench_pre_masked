
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_9__ {int flags; int style; scalar_t__ hwndListBox; scalar_t__ x_offset; } ;
typedef int * LPWSTR ;
typedef int * LPCWSTR ;
typedef int LPCSTR ;
typedef int INT ;
typedef TYPE_1__ EDITSTATE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int *,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 () ;
 int * FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int ,int ,int ,int,int *,int) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int *) ;
 int * VAR_7 ;

__attribute__((used)) static void FUNC_13(EDITSTATE *VAR_8, LPCWSTR VAR_9, BOOL VAR_10)
{
    LPWSTR VAR_11 = ((void*)0);
    if (!VAR_10 && VAR_9)
    {
 LPCSTR VAR_12 = (LPCSTR)VAR_9;
 INT VAR_13 = FUNC_10(VAR_0, 0, VAR_12, -1, ((void*)0), 0);
        VAR_11 = FUNC_8(FUNC_7(), 0, VAR_13 * sizeof(WCHAR));
 if (VAR_11)
     FUNC_10(VAR_0, 0, VAR_12, -1, VAR_11, VAR_13);
 VAR_9 = VAR_11;
    }

    if (VAR_8->flags & VAR_2)

 FUNC_6("SetSel may generate UPDATE message whose handler may reset "
     "selection.\n");

    FUNC_2(VAR_8, 0, (UINT)-1, VAR_6);
    if (VAR_9)
    {
 FUNC_11("%s\n", FUNC_12(VAR_9));
 FUNC_0(VAR_8, VAR_6, VAR_9, VAR_6, VAR_6);
 if(!VAR_10)
     FUNC_9(FUNC_7(), 0, VAR_11);
    }
    else
    {
 FUNC_11("<NULL>\n");
 FUNC_0(VAR_8, VAR_6, VAR_7, VAR_6, VAR_6);
    }
    VAR_8->x_offset = 0;
    VAR_8->flags &= ~VAR_1;
    FUNC_2(VAR_8, 0, 0, VAR_6);





    if( !((VAR_8->style & VAR_5) || VAR_8->hwndListBox))
    {
        FUNC_4(VAR_8, VAR_4);
        FUNC_4(VAR_8, VAR_3);
    }
    FUNC_1(VAR_8);
    FUNC_5(VAR_8);
    FUNC_3(VAR_8);
}
