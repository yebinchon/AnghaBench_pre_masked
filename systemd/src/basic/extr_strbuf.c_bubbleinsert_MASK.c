
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct strbuf_node {int children_count; struct strbuf_child_entry* children; } ;
struct strbuf_child_entry {struct strbuf_node* child; int c; } ;


 int FUNC_0 (struct strbuf_child_entry*,struct strbuf_child_entry*,int) ;
 scalar_t__ FUNC_1 (struct strbuf_child_entry*,struct strbuf_child_entry*) ;

__attribute__((used)) static void FUNC_2(struct strbuf_node *VAR_0,
                         uint8_t VAR_1,
                         struct strbuf_node *VAR_2) {

        struct strbuf_child_entry VAR_3 = {
                .c = VAR_1,
                .child = VAR_2,
        };
        int VAR_4 = 0, VAR_5 = VAR_0->children_count;

        while (VAR_5 > VAR_4) {
                int VAR_6 = (VAR_5 + VAR_4) / 2 ;
                if (FUNC_1(&VAR_0->children[VAR_6], &VAR_3) <= 0)
                        VAR_4 = VAR_6 + 1;
                else
                        VAR_5 = VAR_6;
        }

        FUNC_0(VAR_0->children + VAR_4 + 1, VAR_0->children + VAR_4,
                sizeof(struct strbuf_child_entry) * (VAR_0->children_count - VAR_4));
        VAR_0->children[VAR_4] = VAR_3;

        VAR_0->children_count++;
}
