
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct timespec {int dummy; } ;
struct priv {scalar_t__ vsync_counter; int display_mutex; int display_cond; int reload_display; } ;
typedef scalar_t__ int64_t ;


 struct timespec FUNC_0 (double) ;
 scalar_t__ FUNC_1 (int *,int *,struct timespec*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    FUNC_2(&VAR_1->display_mutex);
    struct timespec VAR_2 = FUNC_0(0.050);
    int64_t VAR_3 = VAR_1->vsync_counter;
    while (VAR_3 == VAR_1->vsync_counter && !VAR_1->reload_display) {
        if (FUNC_1(&VAR_1->display_cond, &VAR_1->display_mutex, &VAR_2))
            break;
    }
    FUNC_3(&VAR_1->display_mutex);
}
