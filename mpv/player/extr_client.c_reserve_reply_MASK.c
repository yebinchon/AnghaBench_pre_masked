
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_handle {scalar_t__ reserved_events; scalar_t__ num_events; scalar_t__ max_events; int lock; int choked; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct mpv_handle *VAR_1)
{
    int VAR_2 = VAR_0;
    FUNC_0(&VAR_1->lock);
    if (VAR_1->reserved_events + VAR_1->num_events < VAR_1->max_events && !VAR_1->choked)
    {
        VAR_1->reserved_events++;
        VAR_2 = 0;
    }
    FUNC_1(&VAR_1->lock);
    return VAR_2;
}
