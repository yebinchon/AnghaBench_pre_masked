
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrdeng_query_handle {scalar_t__ next_page_time; } ;
struct rrddim_query_handle {struct rrdeng_query_handle rrdeng; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(struct rrddim_query_handle *VAR_1)
{
    struct rrdeng_query_handle *VAR_2;

    VAR_2 = &VAR_1->rrdeng;
    return (VAR_0 == VAR_2->next_page_time);
}
