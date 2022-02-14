
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf_node {size_t children_count; TYPE_1__* children; } ;
struct TYPE_2__ {struct strbuf_node* child; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct strbuf_node* FUNC_1 (struct strbuf_node*) ;

__attribute__((used)) static struct strbuf_node* FUNC_2(struct strbuf_node *VAR_0) {
        size_t VAR_1;

        for (VAR_1 = 0; VAR_1 < VAR_0->children_count; VAR_1++)
                FUNC_2(VAR_0->children[VAR_1].child);
        FUNC_0(VAR_0->children);
        return FUNC_1(VAR_0);
}
