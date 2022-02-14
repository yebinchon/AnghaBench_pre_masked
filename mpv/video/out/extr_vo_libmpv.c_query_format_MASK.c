
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_priv {struct mpv_render_context* ctx; } ;
struct vo {struct vo_priv* priv; } ;
struct mpv_render_context {int* imgfmt_supported; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct vo *VAR_2, int VAR_3)
{
    struct vo_priv *VAR_4 = VAR_2->priv;
    struct mpv_render_context *VAR_5 = VAR_4->ctx;

    bool VAR_6 = 0;
    FUNC_0(&VAR_5->lock);
    if (VAR_3 >= VAR_1 && VAR_3 < VAR_0)
        VAR_6 = VAR_5->imgfmt_supported[VAR_3 - VAR_1];
    FUNC_1(&VAR_5->lock);
    return VAR_6;
}
