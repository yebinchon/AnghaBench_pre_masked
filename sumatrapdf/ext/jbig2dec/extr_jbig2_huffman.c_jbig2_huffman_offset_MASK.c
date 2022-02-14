
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int offset_bits; scalar_t__ offset; } ;
typedef TYPE_1__ Jbig2HuffmanState ;



uint32_t
FUNC_0(Jbig2HuffmanState *VAR_0)
{
    return VAR_0->offset + (VAR_0->offset_bits >> 3);
}
