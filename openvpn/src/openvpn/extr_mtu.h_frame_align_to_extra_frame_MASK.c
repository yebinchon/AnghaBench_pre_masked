
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame {scalar_t__ extra_link; scalar_t__ extra_frame; scalar_t__ align_adjust; } ;



__attribute__((used)) static inline void
FUNC_0(struct frame *VAR_0)
{
    VAR_0->align_adjust = VAR_0->extra_frame + VAR_0->extra_link;
}
