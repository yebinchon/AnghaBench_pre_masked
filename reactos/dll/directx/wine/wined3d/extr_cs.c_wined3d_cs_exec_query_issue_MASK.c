
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_query {int counter_retrieved; int poll_list_entry; TYPE_1__* query_ops; } ;
struct wined3d_cs_query_issue {int flags; struct wined3d_query* query; } ;
struct wined3d_cs {int query_poll_list; int thread; } ;
struct TYPE_2__ {scalar_t__ (* query_issue ) (struct wined3d_query*,int) ;} ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct wined3d_query*,int) ;

__attribute__((used)) static void FUNC_6(struct wined3d_cs *VAR_2, const void *VAR_3)
{
    const struct wined3d_cs_query_issue *VAR_4 = VAR_3;
    struct wined3d_query *VAR_5 = VAR_4->query;
    BOOL VAR_6;

    VAR_6 = VAR_5->query_ops->query_issue(VAR_5, VAR_4->flags);

    if (!VAR_2->thread)
        return;

    if (VAR_6 && FUNC_2(&VAR_5->poll_list_entry))
    {
        FUNC_1(&VAR_2->query_poll_list, &VAR_5->poll_list_entry);
        return;
    }



    if ((VAR_4->flags & VAR_0) && !VAR_6 && !FUNC_2(&VAR_5->poll_list_entry))
    {
        FUNC_4(&VAR_5->poll_list_entry);
        FUNC_3(&VAR_5->poll_list_entry);
        FUNC_0(&VAR_5->counter_retrieved);
        return;
    }
    if (VAR_4->flags & VAR_1)
        FUNC_0(&VAR_5->counter_retrieved);
}
