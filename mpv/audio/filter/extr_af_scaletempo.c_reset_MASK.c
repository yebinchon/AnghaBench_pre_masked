
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int in; int bytes_overlap; int buf_overlap; scalar_t__ frames_stride_error; scalar_t__ bytes_to_slide; scalar_t__ bytes_queued; int current_pts; } ;
struct mp_filter {struct priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mp_filter *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;

    VAR_2->current_pts = VAR_0;
    VAR_2->bytes_queued = 0;
    VAR_2->bytes_to_slide = 0;
    VAR_2->frames_stride_error = 0;
    FUNC_1(VAR_2->buf_overlap, 0, VAR_2->bytes_overlap);
    FUNC_0(&VAR_2->in);
}
