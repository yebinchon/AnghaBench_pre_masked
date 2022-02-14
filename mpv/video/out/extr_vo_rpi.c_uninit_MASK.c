
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {int display_mutex; int display_cond; scalar_t__ renderer; scalar_t__ update; int next_image; } ;


 int FUNC_0 (struct vo*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,struct vo*) ;

__attribute__((used)) static void FUNC_8(struct vo *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;

    FUNC_7(VAR_0, VAR_1);

    FUNC_5(VAR_2->next_image);

    FUNC_0(VAR_1);

    if (VAR_2->update)
        FUNC_6(VAR_2->update);

    if (VAR_2->renderer)
        FUNC_1(VAR_2->renderer);

    FUNC_2();

    FUNC_3(&VAR_2->display_cond);
    FUNC_4(&VAR_2->display_mutex);
}
