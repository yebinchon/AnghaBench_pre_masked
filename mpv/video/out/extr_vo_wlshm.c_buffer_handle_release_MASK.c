
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl_buffer {int dummy; } ;
struct vo {scalar_t__ dwidth; scalar_t__ dheight; struct priv* priv; } ;
struct priv {struct buffer* free_buffers; } ;
struct TYPE_2__ {scalar_t__ w; scalar_t__ h; } ;
struct buffer {struct buffer* next; TYPE_1__ mpi; struct vo* vo; } ;


 int FUNC_0 (struct buffer*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct wl_buffer *VAR_1)
{
    struct buffer *VAR_2 = VAR_0;
    struct vo *VAR_3 = VAR_2->vo;
    struct priv *VAR_4 = VAR_3->priv;

    if (VAR_2->mpi.w == VAR_3->dwidth && VAR_2->mpi.h == VAR_3->dheight) {
        VAR_2->next = VAR_4->free_buffers;
        VAR_4->free_buffers = VAR_2;
    } else {
        FUNC_0(VAR_2);
    }
}
