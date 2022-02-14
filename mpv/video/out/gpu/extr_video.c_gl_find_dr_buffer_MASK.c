
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct gl_video {int num_dr_buffers; struct dr_buffer* dr_buffers; } ;
struct dr_buffer {TYPE_2__* buf; } ;
struct TYPE_3__ {size_t size; } ;
struct TYPE_4__ {TYPE_1__ params; int * data; } ;



__attribute__((used)) static struct dr_buffer *FUNC_0(struct gl_video *VAR_0, uint8_t *VAR_1)
{
   for (int VAR_2 = 0; VAR_2 < VAR_0->num_dr_buffers; VAR_2++) {
       struct dr_buffer *VAR_3 = &VAR_0->dr_buffers[VAR_2];
        uint8_t *VAR_4 = VAR_3->buf->data;
        size_t VAR_5 = VAR_3->buf->params.size;
        if (VAR_1 >= VAR_4 && VAR_1 < VAR_4 + VAR_5)
            return VAR_3;
    }

    return ((void*)0);
}
