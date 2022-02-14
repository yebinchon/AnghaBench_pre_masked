
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ra_buf_gl {int target; int buffer; } ;
struct TYPE_4__ {int host_mutable; } ;
struct ra_buf {TYPE_1__ params; struct ra_buf_gl* priv; } ;
struct ra {int dummy; } ;
typedef int ptrdiff_t ;
struct TYPE_5__ {int (* BindBuffer ) (int ,int ) ;int (* BufferSubData ) (int ,int ,size_t,void const*) ;} ;
typedef TYPE_2__ GL ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct ra*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,size_t,void const*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ra *VAR_0, struct ra_buf *VAR_1, ptrdiff_t VAR_2,
                          const void *VAR_3, size_t VAR_4)
{
    GL *VAR_5 = FUNC_1(VAR_0);
    struct ra_buf_gl *VAR_6 = VAR_1->priv;
    FUNC_0(VAR_1->params.host_mutable);

    VAR_5->BindBuffer(VAR_6->target, VAR_6->buffer);
    VAR_5->BufferSubData(VAR_6->target, VAR_2, VAR_4, VAR_3);
    VAR_5->BindBuffer(VAR_6->target, 0);
}
