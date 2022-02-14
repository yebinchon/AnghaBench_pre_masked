
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct vdpctx* priv; } ;
struct vdpctx {int dropped_frame; int current_image; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vo *VAR_0, bool VAR_1)
{
    struct vdpctx *VAR_2 = VAR_0->priv;

    if (!VAR_1)
        FUNC_0(&VAR_2->current_image);

    VAR_2->dropped_frame = 0;
}
