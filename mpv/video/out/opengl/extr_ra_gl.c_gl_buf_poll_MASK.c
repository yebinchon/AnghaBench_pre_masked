
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ra_buf_gl {int * fence; } ;
struct ra_buf {struct ra_buf_gl* priv; int data; } ;
struct ra {int dummy; } ;
struct TYPE_3__ {scalar_t__ (* ClientWaitSync ) (int *,int ,int ) ;int (* DeleteSync ) (int *) ;} ;
typedef scalar_t__ GLenum ;
typedef TYPE_1__ GL ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct ra*) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct ra *VAR_1, struct ra_buf *VAR_2)
{


    if (!VAR_2->data)
        return 1;

    GL *VAR_3 = FUNC_0(VAR_1);
    struct ra_buf_gl *VAR_4 = VAR_2->priv;

    if (VAR_4->fence) {
        GLenum VAR_5 = VAR_3->ClientWaitSync(VAR_4->fence, 0, 0);
        if (VAR_5 == VAR_0) {
            VAR_3->DeleteSync(VAR_4->fence);
            VAR_4->fence = ((void*)0);
        }
    }

    return !VAR_4->fence;
}
