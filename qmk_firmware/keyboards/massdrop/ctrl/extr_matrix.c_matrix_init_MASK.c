
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int matrix_row_t ;
struct TYPE_14__ {TYPE_6__* Group; } ;
struct TYPE_12__ {int reg; } ;
struct TYPE_11__ {int reg; } ;
struct TYPE_8__ {int reg; } ;
struct TYPE_13__ {TYPE_5__ OUTCLR; TYPE_4__ DIRSET; TYPE_3__* PINCFG; TYPE_1__ DIRCLR; } ;
struct TYPE_9__ {int INEN; int PULLEN; } ;
struct TYPE_10__ {TYPE_2__ bit; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_7__* VAR_4 ;
 int* VAR_5 ;
 size_t* VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 int* VAR_11 ;
 size_t* VAR_12 ;

void FUNC_2(void)
{
    FUNC_1(VAR_9, 0, VAR_1 * sizeof(matrix_row_t));
    FUNC_1(VAR_8, 0, VAR_1 * sizeof(matrix_row_t));
    FUNC_1(VAR_7, 0, VAR_1 * sizeof(matrix_row_t));

    VAR_10[VAR_2] = 0;
    VAR_10[VAR_3] = 0;

    uint8_t VAR_13;
    for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++)
    {
        VAR_4->Group[VAR_12[VAR_13]].DIRCLR.reg = 1 << VAR_11[VAR_13];
        VAR_4->Group[VAR_12[VAR_13]].OUTCLR.reg = 1 << VAR_11[VAR_13];
        VAR_4->Group[VAR_12[VAR_13]].PINCFG[VAR_11[VAR_13]].bit.INEN = 1;
        VAR_4->Group[VAR_12[VAR_13]].PINCFG[VAR_11[VAR_13]].bit.PULLEN = 1;
        VAR_10[VAR_12[VAR_13]] |= 1 << VAR_11[VAR_13];
    }

    uint8_t VAR_14;
    for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++)
    {
        VAR_4->Group[VAR_6[VAR_14]].DIRSET.reg = 1 << VAR_5[VAR_14];
        VAR_4->Group[VAR_6[VAR_14]].OUTCLR.reg = 1 << VAR_5[VAR_14];
    }

    FUNC_0();
}
