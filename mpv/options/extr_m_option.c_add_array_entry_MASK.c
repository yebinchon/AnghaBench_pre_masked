
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpv_node_list {int num; struct mpv_node* values; } ;
struct TYPE_2__ {struct mpv_node_list* list; } ;
struct mpv_node {scalar_t__ format; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mpv_node_list*,struct mpv_node*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static struct mpv_node *FUNC_2(struct mpv_node *VAR_1)
{
    struct mpv_node_list *VAR_2 = VAR_1->u.list;
    FUNC_1(VAR_1->format == VAR_0&& VAR_1->u.list);
    FUNC_0(VAR_2, VAR_2->values, VAR_2->num);
    return &VAR_2->values[VAR_2->num++];
}
