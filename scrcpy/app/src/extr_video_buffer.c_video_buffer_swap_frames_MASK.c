
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_buffer {int * rendering_frame; int * decoding_frame; } ;
typedef int AVFrame ;



__attribute__((used)) static void
FUNC_0(struct video_buffer *VAR_0) {
    AVFrame *VAR_1 = VAR_0->decoding_frame;
    VAR_0->decoding_frame = VAR_0->rendering_frame;
    VAR_0->rendering_frame = VAR_1;
}
