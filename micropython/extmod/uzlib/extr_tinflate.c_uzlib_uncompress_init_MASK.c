
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int btype; unsigned int dict_size; scalar_t__ curlen; scalar_t__ dict_idx; void* dict_ring; scalar_t__ bfinal; scalar_t__ bitcount; scalar_t__ eof; } ;
typedef TYPE_1__ TINF_DATA ;



void FUNC_0(TINF_DATA *VAR_0, void *VAR_1, unsigned int VAR_2)
{
   VAR_0->eof = 0;
   VAR_0->bitcount = 0;
   VAR_0->bfinal = 0;
   VAR_0->btype = -1;
   VAR_0->dict_size = VAR_2;
   VAR_0->dict_ring = VAR_1;
   VAR_0->dict_idx = 0;
   VAR_0->curlen = 0;
}
