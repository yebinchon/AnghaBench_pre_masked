
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int c; int* bp; int ct; int a; scalar_t__ end_of_byte_stream_counter; } ;
typedef TYPE_1__ opj_mqc_t ;
typedef int OPJ_UINT32 ;
typedef int OPJ_BYTE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,int,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;

void FUNC_3(opj_mqc_t *VAR_0, OPJ_BYTE *VAR_1, OPJ_UINT32 VAR_2,
                      OPJ_UINT32 VAR_3)
{





    FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
    FUNC_2(VAR_0, 0);
    VAR_0->end_of_byte_stream_counter = 0;
    if (VAR_2 == 0) {
        VAR_0->c = 0xff << 16;
    } else {
        VAR_0->c = (OPJ_UINT32)(*VAR_0->bp << 16);
    }

    FUNC_0(VAR_0);
    VAR_0->c <<= 7;
    VAR_0->ct -= 7;
    VAR_0->a = 0x8000;
}
