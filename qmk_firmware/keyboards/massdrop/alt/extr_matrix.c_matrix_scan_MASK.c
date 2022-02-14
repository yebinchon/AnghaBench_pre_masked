
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int matrix_row_t ;
struct TYPE_10__ {TYPE_4__* Group; } ;
struct TYPE_8__ {int reg; } ;
struct TYPE_7__ {int reg; } ;
struct TYPE_6__ {int reg; } ;
struct TYPE_9__ {TYPE_3__ OUTCLR; TYPE_2__ IN; TYPE_1__ OUTSET; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 TYPE_5__* VAR_5 ;
 int* VAR_6 ;
 size_t* VAR_7 ;
 int FUNC_0 () ;
 int* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int*,int ,int) ;
 int* VAR_10 ;
 int* VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;
 size_t* VAR_14 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int) ;

uint8_t FUNC_4(void)
{
    uint8_t VAR_15;
    uint8_t VAR_16;
    uint8_t VAR_17;
    uint32_t VAR_18[2];

    if (FUNC_2() < VAR_9) return 1;

    FUNC_1(VAR_11, 0, VAR_2 * sizeof(matrix_row_t));

    for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++)
    {
        VAR_5->Group[VAR_7[VAR_17]].OUTSET.reg = 1 << VAR_6[VAR_17];

        FUNC_3(1);

        VAR_18[VAR_3] = VAR_5->Group[VAR_3].IN.reg & VAR_12[VAR_3];
        VAR_18[VAR_4] = VAR_5->Group[VAR_4].IN.reg & VAR_12[VAR_4];

        VAR_5->Group[VAR_7[VAR_17]].OUTCLR.reg = 1 << VAR_6[VAR_17];

        for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++)
        {

            if (VAR_18[VAR_14[VAR_16]] & (1 << VAR_13[VAR_16]))
                VAR_11[VAR_16] |= 1 << VAR_17;
        }
    }

    VAR_15 = 0;

    for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++)
    {
        if (VAR_10[VAR_16] != VAR_11[VAR_16])
            VAR_15 = 1;
        VAR_10[VAR_16] = VAR_11[VAR_16];
    }

    if (!VAR_15)
    {
        for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++)
            VAR_8[VAR_16] = VAR_11[VAR_16];
        VAR_9 = 0;
    }
    else
    {

        VAR_9 = FUNC_2() + VAR_0;
    }

    FUNC_0();

    return 1;
}
