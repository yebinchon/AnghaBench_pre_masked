
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; scalar_t__ latent; scalar_t__ front; scalar_t__ size; scalar_t__ cts; scalar_t__ dts; } ;
typedef TYPE_1__ mpeg_bitstream_t ;


 int VAR_0 ;

void FUNC_0(mpeg_bitstream_t* VAR_1)
{
    VAR_1->dts = 0;
    VAR_1->cts = 0;
    VAR_1->size = 0;
    VAR_1->front = 0;
    VAR_1->latent = 0;
    VAR_1->status = VAR_0;
}
