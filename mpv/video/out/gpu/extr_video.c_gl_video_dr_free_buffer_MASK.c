
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct gl_video {int num_dr_buffers; struct dr_buffer* dr_buffers; int ra; } ;
struct dr_buffer {TYPE_1__* buf; int mpi; } ;
struct TYPE_2__ {int * data; } ;


 int FUNC_0 (struct dr_buffer*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_1__**) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, uint8_t *VAR_1)
{
    struct gl_video *VAR_2 = VAR_0;

    for (int VAR_3 = 0; VAR_3 < VAR_2->num_dr_buffers; VAR_3++) {
        struct dr_buffer *VAR_4 = &VAR_2->dr_buffers[VAR_3];
        if (VAR_4->buf->data == VAR_1) {
            FUNC_1(!VAR_4->mpi);
            FUNC_2(VAR_2->ra, &VAR_4->buf);
            FUNC_0(VAR_2->dr_buffers, VAR_2->num_dr_buffers, VAR_3);
            return;
        }
    }

    FUNC_1(0);
}
