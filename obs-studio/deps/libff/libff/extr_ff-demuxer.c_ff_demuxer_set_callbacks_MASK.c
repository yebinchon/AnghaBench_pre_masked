
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_callbacks {void* frame_free; void* frame_initialize; int initialize; int format; void* frame; void* opaque; } ;
typedef int ff_callback_initialize ;
typedef void* ff_callback_frame ;
typedef int ff_callback_format ;



void FUNC_0(struct ff_callbacks *VAR_0,
                              ff_callback_frame VAR_1,
                              ff_callback_format VAR_2,
                              ff_callback_initialize VAR_3,
                              ff_callback_frame VAR_4,
                              ff_callback_frame VAR_5, void *VAR_6)
{
 VAR_0->opaque = VAR_6;
 VAR_0->frame = VAR_1;
 VAR_0->format = VAR_2;
 VAR_0->initialize = VAR_3;
 VAR_0->frame_initialize = VAR_4;
 VAR_0->frame_free = VAR_5;
}
