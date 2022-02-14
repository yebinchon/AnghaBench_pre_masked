
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_aframe {struct AVFrame* av_frame; } ;
struct AVFrame {int dummy; } ;



struct AVFrame *FUNC_0(struct mp_aframe *VAR_0)
{
    return VAR_0->av_frame;
}
