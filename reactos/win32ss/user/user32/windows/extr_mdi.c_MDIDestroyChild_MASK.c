
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_6__ {scalar_t__ nActiveChildren; scalar_t__ hwndActiveChild; scalar_t__ hwndChildMaximized; scalar_t__* child; int hBmpClose; } ;
typedef TYPE_1__ MDICLIENTINFO ;
typedef int LRESULT ;
typedef scalar_t__ HWND ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,scalar_t__*) ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,scalar_t__,int ,int ) ;
 int FUNC_7 (scalar_t__,TYPE_1__*,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__,int ) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_10 (scalar_t__,scalar_t__,int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_11 (scalar_t__,int ,int ,int ) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (char*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_14 (scalar_t__*,scalar_t__*,size_t) ;

__attribute__((used)) static LRESULT FUNC_15( HWND VAR_4, MDICLIENTINFO *VAR_5,
                                HWND VAR_6, BOOL VAR_7 )
{
    UINT VAR_8;

    FUNC_13("# of managed children %u\n", VAR_5->nActiveChildren);

    if( VAR_6 == VAR_5->hwndActiveChild )
    {
        HWND VAR_9 = FUNC_6(VAR_5, VAR_6, VAR_2, 0);
        if (VAR_9)
            FUNC_9(VAR_5, VAR_9, VAR_2);
        else
        {
            FUNC_12(VAR_6, VAR_1);
            if (VAR_6 == VAR_5->hwndChildMaximized)
            {
                HWND VAR_10 = FUNC_1(VAR_4);
                FUNC_8(VAR_10, VAR_6, VAR_5->hBmpClose);
                VAR_5->hwndChildMaximized = 0;
                FUNC_10(VAR_10, VAR_4, VAR_2, ((void*)0));
            }
            if (VAR_7)
                FUNC_5(VAR_4, 0);
        }
    }

    for (VAR_8 = 0; VAR_8 < VAR_5->nActiveChildren; VAR_8++)
    {
        if (VAR_5->child[VAR_8] == VAR_6)
        {
            HWND *VAR_11 = FUNC_3(FUNC_2(), 0, (VAR_5->nActiveChildren - 1) * sizeof(HWND));
            if (VAR_11 != ((void*)0))
            {
                FUNC_14(VAR_11, VAR_5->child, VAR_8 * sizeof(HWND));
                if (VAR_8 + 1 < VAR_5->nActiveChildren)
                    FUNC_14(VAR_11 + VAR_8, VAR_5->child + VAR_8 + 1, (VAR_5->nActiveChildren - VAR_8 - 1) * sizeof(HWND));
                FUNC_4(FUNC_2(), 0, VAR_5->child);
                VAR_5->child = VAR_11;
            }
            else
            {
                UINT VAR_12;
                for (VAR_12 = VAR_8; VAR_12 < VAR_5->nActiveChildren - 1; VAR_12++)
                {
                    VAR_5->child[VAR_12] = VAR_5->child[VAR_12+1];
                }
            }

            VAR_5->nActiveChildren--;
            break;
        }
    }

    if (VAR_7)
    {
        FUNC_11(VAR_4, VAR_3, 0, 0);
        FUNC_7(FUNC_1(VAR_6), VAR_5, VAR_0+1);
        FUNC_0(VAR_6);
    }

    FUNC_13("child destroyed - %p\n", VAR_6);
    return 0;
}
