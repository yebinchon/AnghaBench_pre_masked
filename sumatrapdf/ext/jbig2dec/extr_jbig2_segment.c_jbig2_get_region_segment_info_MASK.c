
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int flags; scalar_t__ op; void* y; void* x; void* height; void* width; } ;
typedef TYPE_1__ Jbig2RegionSegmentInfo ;
typedef scalar_t__ Jbig2ComposeOp ;


 void* FUNC_0 (int const*) ;

void
FUNC_1(Jbig2RegionSegmentInfo *VAR_0, const uint8_t *VAR_1)
{

    VAR_0->width = FUNC_0(VAR_1);
    VAR_0->height = FUNC_0(VAR_1 + 4);
    VAR_0->x = FUNC_0(VAR_1 + 8);
    VAR_0->y = FUNC_0(VAR_1 + 12);
    VAR_0->flags = VAR_1[16];
    VAR_0->op = (Jbig2ComposeOp)(VAR_0->flags & 0x7);
}
