
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; } ;
struct TYPE_3__ {int* ColumnOrderArray; int * ColumnSizeArray; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_5(void)
{
    int VAR_10;

    if (FUNC_1(VAR_6, FUNC_4(VAR_3), VAR_7, VAR_2) == VAR_4)
    {
        for (VAR_10=FUNC_2(VAR_8)-1; VAR_10>=0; VAR_10--)
        {
            (void)FUNC_3(VAR_9, VAR_10);
        }

        for (VAR_10=0; VAR_10<VAR_0; VAR_10++) {
            VAR_5.ColumnOrderArray[VAR_10] = VAR_10;
            VAR_5.ColumnSizeArray[VAR_10] = VAR_1[VAR_10].size;
        }

        FUNC_0();
    }
}
