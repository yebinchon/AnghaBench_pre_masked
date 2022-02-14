
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_image {int dummy; } ;
struct gl_video {int num_dr_buffers; TYPE_2__* ra; struct dr_buffer* dr_buffers; } ;
struct dr_buffer {struct mp_image* mpi; int buf; } ;
struct TYPE_4__ {TYPE_1__* fns; } ;
struct TYPE_3__ {int (* buf_poll ) (TYPE_2__*,int ) ;} ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct mp_image*) ;

__attribute__((used)) static void FUNC_2(struct gl_video *VAR_0, bool VAR_1)
{
again:;
    for (int VAR_2 = 0; VAR_2 < VAR_0->num_dr_buffers; VAR_2++) {
        struct dr_buffer *VAR_3 = &VAR_0->dr_buffers[VAR_2];
        if (!VAR_3->mpi)
            continue;

        bool VAR_4 = VAR_0->ra->fns->buf_poll(VAR_0->ra, VAR_3->buf);
        if (VAR_4 || VAR_1) {







            struct mp_image *VAR_5 = VAR_3->mpi;
            VAR_3->mpi = ((void*)0);
            FUNC_1(VAR_5);
            goto again;
        }
    }
}
