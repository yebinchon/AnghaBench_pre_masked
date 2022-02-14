
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ TLbtnState; scalar_t__ BRbtnState; int dwStyle; int hwndSelf; } ;
struct TYPE_7__ {int x; int y; } ;
typedef TYPE_1__ POINT ;
typedef TYPE_2__ PAGER_INFO ;
typedef int LRESULT ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;


 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_4 (char*,int ,...) ;
 int VAR_9 ;

__attribute__((used)) static LRESULT
FUNC_5 (PAGER_INFO* VAR_10, INT VAR_11, INT VAR_12, INT VAR_13)
{
    BOOL VAR_14 = VAR_0;
    POINT VAR_15;
    INT VAR_16;

    VAR_15.x = VAR_12;
    VAR_15.y = VAR_13;

    FUNC_4("[%p] at (%d,%d)\n", VAR_10->hwndSelf, VAR_12, VAR_13);

    VAR_16 = FUNC_0(VAR_10, &VAR_15);


    if (VAR_16 == 128)
    {
        VAR_14 = VAR_10->TLbtnState != VAR_2;
        VAR_10->TLbtnState = VAR_2;
        FUNC_3(VAR_10->hwndSelf, VAR_8, VAR_1, 0);
    }
    else if (VAR_16 == 129)
    {
        VAR_14 = VAR_10->BRbtnState != VAR_2;
        VAR_10->BRbtnState = VAR_2;
        FUNC_3(VAR_10->hwndSelf, VAR_8, VAR_1, 0);
    }

    if (VAR_14)
        FUNC_2(VAR_10->hwndSelf, VAR_9, 0, 0);

    switch(VAR_16)
    {
    case 128:
        if (VAR_10->dwStyle & VAR_7)
        {
            FUNC_4("[%p] PGF_SCROLLLEFT\n", VAR_10->hwndSelf);
            FUNC_1(VAR_10, VAR_4);
        }
        else
        {
            FUNC_4("[%p] PGF_SCROLLUP\n", VAR_10->hwndSelf);
            FUNC_1(VAR_10, VAR_6);
        }
        break;
    case 129:
        if (VAR_10->dwStyle & VAR_7)
        {
            FUNC_4("[%p] PGF_SCROLLRIGHT\n", VAR_10->hwndSelf);
            FUNC_1(VAR_10, VAR_5);
        }
        else
        {
            FUNC_4("[%p] PGF_SCROLLDOWN\n", VAR_10->hwndSelf);
            FUNC_1(VAR_10, VAR_3);
        }
        break;
    default:
        break;
    }

    return 0;
}
