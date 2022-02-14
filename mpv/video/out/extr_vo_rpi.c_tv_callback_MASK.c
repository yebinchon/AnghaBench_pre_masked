
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vo {struct priv* priv; } ;
struct priv {int reload_display; int display_mutex; int display_cond; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vo*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, uint32_t VAR_1, uint32_t VAR_2,
                        uint32_t VAR_3)
{
    struct vo *VAR_4 = VAR_0;
    struct priv *VAR_5 = VAR_4->priv;
    FUNC_1(&VAR_5->display_mutex);
    VAR_5->reload_display = 1;
    FUNC_0(&VAR_5->display_cond);
    FUNC_2(&VAR_5->display_mutex);
    FUNC_3(VAR_4);
}
