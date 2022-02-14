
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_frame {int current; int repeat; int redraw; } ;
struct vo {struct priv* priv; } ;
struct priv {int * next_image; } ;
typedef int mp_image_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_0, struct vo_frame *VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;

    mp_image_t *VAR_3 = ((void*)0);
    if (!VAR_1->redraw && !VAR_1->repeat)
        VAR_3 = FUNC_0(VAR_1->current);

    FUNC_1(VAR_2->next_image);
    VAR_2->next_image = VAR_3;
}
