
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int szTemp ;
typedef int WPARAM ;
typedef int WCHAR ;
struct TYPE_7__ {int dwIdsName; int size; } ;
struct TYPE_6__ {int* ColumnOrderArray; int * ColumnSizeArray; int * Columns; } ;
struct TYPE_5__ {int mask; int cchTextMax; int cxy; int * pszText; } ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef TYPE_1__ HDITEM ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int *,int) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int VAR_8 ;
 TYPE_3__ VAR_9 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void FUNC_4(void)
{
    HDITEM VAR_12;
    int VAR_13, VAR_14;
    WCHAR VAR_15[260];
    WCHAR VAR_16[256];
    LRESULT VAR_17;


    for (VAR_13=0; VAR_13<VAR_0; VAR_13++) {
        VAR_9.ColumnOrderArray[VAR_13] = VAR_13;
        VAR_9.Columns[VAR_13] = VAR_2;
        VAR_9.ColumnSizeArray[VAR_13] = VAR_1[VAR_13].size;
    }


    VAR_17 = FUNC_1(VAR_11, VAR_6, 0, 0);
    FUNC_1(VAR_11, VAR_7, (WPARAM) VAR_17, (LPARAM) &VAR_9.ColumnOrderArray);


    for (VAR_13 = 0; VAR_13 < FUNC_1(VAR_11, VAR_6, 0, 0); VAR_13++) {
        FUNC_3(&VAR_12, 0, sizeof(HDITEM));

        VAR_12.mask = VAR_3|VAR_4;
        VAR_12.pszText = VAR_15;
        VAR_12.cchTextMax = 260;

        FUNC_1(VAR_11, VAR_5, VAR_13, (LPARAM) &VAR_12);

        for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
            FUNC_0(VAR_10, VAR_1[VAR_14].dwIdsName, VAR_16, sizeof(VAR_16)/sizeof(WCHAR));
            if (FUNC_2(VAR_15, VAR_16) == 0)
            {
                VAR_9.Columns[VAR_14] = VAR_8;
                VAR_9.ColumnSizeArray[VAR_14] = VAR_12.cxy;
            }
        }
    }
}
