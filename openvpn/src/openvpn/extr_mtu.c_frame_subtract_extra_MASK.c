
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame {scalar_t__ extra_frame; int extra_tun; } ;



void
FUNC_0(struct frame *VAR_0, const struct frame *VAR_1)
{
    VAR_0->extra_frame -= VAR_1->extra_frame;
    VAR_0->extra_tun += VAR_1->extra_frame;
}
