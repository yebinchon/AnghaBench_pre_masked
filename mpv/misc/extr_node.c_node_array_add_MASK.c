
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpv_node_list {size_t num; struct mpv_node* values; } ;
struct TYPE_2__ {struct mpv_node_list* list; } ;
struct mpv_node {scalar_t__ format; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mpv_node_list*,struct mpv_node*,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mpv_node*,int,struct mpv_node*) ;

struct mpv_node *FUNC_3(struct mpv_node *VAR_1, int VAR_2)
{
    struct mpv_node_list *VAR_3 = VAR_1->u.list;
    FUNC_1(VAR_1->format == VAR_0 && VAR_1->u.list);
    FUNC_0(VAR_3, VAR_3->values, VAR_3->num);
    FUNC_2(&VAR_3->values[VAR_3->num], VAR_2, VAR_1);
    return &VAR_3->values[VAR_3->num++];
}
