
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {int vsync_counter; int display_mutex; int display_cond; } ;
typedef int DISPMANX_UPDATE_HANDLE_T ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(DISPMANX_UPDATE_HANDLE_T VAR_0, void *VAR_1)
{
    struct vo *VAR_2 = VAR_1;
    struct priv *VAR_3 = VAR_2->priv;
    FUNC_1(&VAR_3->display_mutex);
    VAR_3->vsync_counter += 1;
    FUNC_0(&VAR_3->display_cond);
    FUNC_2(&VAR_3->display_mutex);
}
