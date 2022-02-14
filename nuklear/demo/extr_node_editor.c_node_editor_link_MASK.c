
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_link {int input_id; int input_slot; int output_id; int output_slot; } ;
struct node_editor {scalar_t__ link_count; struct node_link* links; } ;
typedef scalar_t__ nk_size ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct node_link*) ;

__attribute__((used)) static void
FUNC_2(struct node_editor *VAR_0, int VAR_1, int VAR_2,
    int VAR_3, int VAR_4)
{
    struct node_link *VAR_5;
    FUNC_0((nk_size)VAR_0->link_count < FUNC_1(VAR_0->links));
    VAR_5 = &VAR_0->links[VAR_0->link_count++];
    VAR_5->input_id = VAR_1;
    VAR_5->input_slot = VAR_2;
    VAR_5->output_id = VAR_3;
    VAR_5->output_slot = VAR_4;
}
