
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ct; scalar_t__ buf; int * bp; int * end; int * start; } ;
typedef TYPE_1__ opj_bio_t ;
typedef int OPJ_UINT32 ;
typedef int OPJ_BYTE ;



void FUNC_0(opj_bio_t *VAR_0, OPJ_BYTE *VAR_1, OPJ_UINT32 VAR_2)
{
    VAR_0->start = VAR_1;
    VAR_0->end = VAR_1 + VAR_2;
    VAR_0->bp = VAR_1;
    VAR_0->buf = 0;
    VAR_0->ct = 0;
}
