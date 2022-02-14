
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_buffer {int dummy; } ;
struct decoder {struct video_buffer* video_buffer; } ;



void
FUNC_0(struct decoder *VAR_0, struct video_buffer *VAR_1) {
    VAR_0->video_buffer = VAR_1;
}
