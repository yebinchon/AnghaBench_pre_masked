
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_frame {int current; int redraw; int repeat; int still; } ;
struct vo {struct priv* priv; } ;
struct priv {size_t front_buf; struct framebuffer* bufs; int still; int active; } ;
struct framebuffer {int dummy; } ;


 int FUNC_0 (struct vo*,int ,struct framebuffer*) ;
 int FUNC_1 (struct vo*,struct framebuffer*) ;
 struct framebuffer* FUNC_2 (struct vo*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct vo *VAR_0, struct vo_frame *VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;

    if (!VAR_2->active)
        return;

    VAR_2->still = VAR_1->still;


    const bool VAR_3 = VAR_1->repeat && !VAR_1->redraw;

    struct framebuffer *VAR_4 = &VAR_2->bufs[VAR_2->front_buf];
    if (!VAR_3) {
        VAR_4 = FUNC_2(VAR_0);
        FUNC_0(VAR_0, FUNC_3(VAR_1->current), VAR_4);
    }

    FUNC_1(VAR_0, VAR_4);
}
