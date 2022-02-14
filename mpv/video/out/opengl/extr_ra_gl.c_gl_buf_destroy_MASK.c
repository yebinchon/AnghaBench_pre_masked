
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ra_buf_gl {int buffer; int target; scalar_t__ data; scalar_t__ fence; struct ra_buf_gl* priv; } ;
struct ra_buf {int buffer; int target; scalar_t__ data; scalar_t__ fence; struct ra_buf* priv; } ;
struct ra {int dummy; } ;
struct TYPE_3__ {int (* DeleteBuffers ) (int,int *) ;int (* BindBuffer ) (int ,int ) ;int (* UnmapBuffer ) (int ) ;int (* DeleteSync ) (scalar_t__) ;} ;
typedef TYPE_1__ GL ;


 TYPE_1__* FUNC_0 (struct ra*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (struct ra_buf_gl*) ;

__attribute__((used)) static void FUNC_7(struct ra *VAR_0, struct ra_buf *VAR_1)
{
    if (!VAR_1)
        return;

    GL *VAR_2 = FUNC_0(VAR_0);
    struct ra_buf_gl *VAR_3 = VAR_1->priv;

    if (VAR_3->fence)
        VAR_2->DeleteSync(VAR_3->fence);

    if (VAR_1->data) {
        VAR_2->BindBuffer(VAR_3->target, VAR_3->buffer);
        VAR_2->UnmapBuffer(VAR_3->target);
        VAR_2->BindBuffer(VAR_3->target, 0);
    }
    VAR_2->DeleteBuffers(1, &VAR_3->buffer);

    FUNC_6(VAR_3);
    FUNC_6(VAR_1);
}
