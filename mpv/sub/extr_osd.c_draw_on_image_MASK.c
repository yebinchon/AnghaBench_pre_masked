
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sub_bitmaps {int dummy; } ;
struct osd_state {int draw_cache; } ;
struct draw_on_image_closure {int changed; int dest; int pool; struct osd_state* osd; } ;


 int FUNC_0 (int *,int ,struct sub_bitmaps*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct osd_state*,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, struct sub_bitmaps *VAR_1)
{
    struct draw_on_image_closure *VAR_2 = VAR_0;
    struct osd_state *VAR_3 = VAR_2->osd;
    if (!FUNC_1(VAR_2->pool, VAR_2->dest))
        return;
    FUNC_0(&VAR_3->draw_cache, VAR_2->dest, VAR_1);
    FUNC_2(VAR_3, VAR_3->draw_cache);
    VAR_2->changed = 1;
}
