
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int hwndSelf; int hwndListBox; } ;
typedef scalar_t__ INT ;
typedef int HWND ;
typedef TYPE_1__ EDITSTATE ;
typedef int BOOL ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int const,int,int ) ;
 int FUNC_2 (char*,int ,int,scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;



__attribute__((used)) static BOOL FUNC_3(EDITSTATE *VAR_9, UINT VAR_10, INT VAR_11)
{
    HWND VAR_12 = VAR_9->hwndListBox;
    HWND VAR_13;
    BOOL VAR_14;
    int VAR_15;

    if (!VAR_12)
        return VAR_4;

    VAR_13 = FUNC_0(VAR_9->hwndSelf);
    VAR_14 = VAR_5;
    VAR_15 = 0;

    FUNC_2("[%p]: handling msg %x (%x)\n", VAR_9->hwndSelf, VAR_10, VAR_11);

    if (VAR_11 == VAR_8 || VAR_11 == VAR_6)
    {
        if (FUNC_1(VAR_13, VAR_1, 0, 0))
            VAR_15 = 1;

        if (VAR_10 == 129 || VAR_15)
            VAR_14 = (BOOL)FUNC_1(VAR_13, VAR_0, 0, 0);
    }

    switch (VAR_10)
    {
    case 129:
        if (!VAR_14 && VAR_15 && (VAR_11 == VAR_8 || VAR_11 == VAR_6))
        {

            FUNC_1(VAR_13, VAR_2, VAR_4, 0);
            VAR_11 = VAR_7;
            VAR_15 = 2;
        }

        FUNC_1(VAR_12, 129, VAR_11, 0);
        break;

    case 128:
        if (VAR_15)
           FUNC_1(VAR_13, VAR_3, !VAR_14, 0);
        else
           FUNC_1(VAR_12, 129, VAR_7, 0);
        break;
    }

    if (VAR_15 == 2)
        FUNC_1(VAR_13, VAR_2, VAR_5, 0);

    return VAR_5;
}
