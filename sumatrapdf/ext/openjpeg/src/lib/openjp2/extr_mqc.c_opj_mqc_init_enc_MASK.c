
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int a; int* bp; int ct; int* start; scalar_t__ end_of_byte_stream_counter; scalar_t__ c; } ;
typedef TYPE_1__ opj_mqc_t ;
typedef int OPJ_BYTE ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;

void FUNC_2(opj_mqc_t *VAR_0, OPJ_BYTE *VAR_1)
{


    FUNC_1(VAR_0, 0);



    VAR_0->a = 0x8000;
    VAR_0->c = 0;


    VAR_0->bp = VAR_1 - 1;
    VAR_0->ct = 12;



    FUNC_0(*(VAR_0->bp) != 0xff);

    VAR_0->start = VAR_1;
    VAR_0->end_of_byte_stream_counter = 0;
}
