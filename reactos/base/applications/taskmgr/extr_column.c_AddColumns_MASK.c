
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int szTemp ;
typedef int WPARAM ;
typedef int WCHAR ;
struct TYPE_4__ {int dwIdsName; } ;
struct TYPE_3__ {int ColumnOrderArray; int * ColumnSizeArray; scalar_t__* Columns; } ;
typedef scalar_t__ LRESULT ;
typedef int LPARAM ;


 unsigned int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,int *,int ,int ,int) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int *,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 () ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_4(void)
{
    LRESULT VAR_8;
    WCHAR VAR_9[256];
    unsigned int VAR_10;

    for (VAR_10=0; VAR_10<VAR_0; VAR_10++) {
        if (VAR_5.Columns[VAR_10]) {
            FUNC_1(VAR_6, VAR_1[VAR_10].dwIdsName, VAR_9, sizeof(VAR_9)/sizeof(WCHAR));
            FUNC_0(VAR_10, VAR_9, VAR_4, VAR_5.ColumnSizeArray[VAR_10], -1);
        }
    }

    VAR_8 = FUNC_2(VAR_7, VAR_2, 0, 0);
    FUNC_2(VAR_7, VAR_3, (WPARAM) VAR_8, (LPARAM) &VAR_5.ColumnOrderArray);

    FUNC_3();
}
