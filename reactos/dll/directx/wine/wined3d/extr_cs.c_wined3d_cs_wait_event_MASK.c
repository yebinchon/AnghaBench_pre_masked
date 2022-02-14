
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_cs {int event; int waiting_for_event; int * queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct wined3d_cs*,int *) ;

__attribute__((used)) static void FUNC_4(struct wined3d_cs *VAR_5)
{
    FUNC_1(&VAR_5->waiting_for_event, VAR_2);
    if (!(FUNC_3(VAR_5, &VAR_5->queue[VAR_3])
            && FUNC_3(VAR_5, &VAR_5->queue[VAR_4]))
            && FUNC_0(&VAR_5->waiting_for_event, VAR_0, VAR_2))
        return;

    FUNC_2(VAR_5->event, VAR_1);
}
