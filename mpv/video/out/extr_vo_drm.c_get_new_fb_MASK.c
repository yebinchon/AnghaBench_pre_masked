
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {size_t front_buf; size_t buf_count; struct framebuffer* bufs; } ;
struct framebuffer {int dummy; } ;



__attribute__((used)) static struct framebuffer *FUNC_0(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    VAR_1->front_buf++;
    VAR_1->front_buf %= VAR_1->buf_count;

    return &VAR_1->bufs[VAR_1->front_buf];
}
