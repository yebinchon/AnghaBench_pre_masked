
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_refqueue {scalar_t__ pos; scalar_t__ needed_future_frames; int eof; } ;



__attribute__((used)) static bool FUNC_0(struct mp_refqueue *VAR_0)
{
    return VAR_0->pos < VAR_0->needed_future_frames && !VAR_0->eof;
}
