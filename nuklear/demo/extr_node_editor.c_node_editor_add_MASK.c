
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_editor {scalar_t__ node_count; struct node* node_buf; } ;
struct nk_rect {int dummy; } ;
struct nk_color {int dummy; } ;
struct node {int input_count; int output_count; int name; struct nk_rect bounds; struct nk_color color; scalar_t__ value; int ID; } ;
typedef scalar_t__ nk_size ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct node*) ;
 struct nk_color FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct node_editor*,struct node*) ;
 int FUNC_4 (int ,char const*) ;

__attribute__((used)) static void
FUNC_5(struct node_editor *VAR_0, const char *VAR_1, struct nk_rect VAR_2,
    struct nk_color VAR_3, int VAR_4, int VAR_5)
{
    static int VAR_6 = 0;
    struct node *VAR_7;
    FUNC_0((nk_size)VAR_0->node_count < FUNC_1(VAR_0->node_buf));
    VAR_7 = &VAR_0->node_buf[VAR_0->node_count++];
    VAR_7->ID = VAR_6++;
    VAR_7->value = 0;
    VAR_7->color = FUNC_2(255, 0, 0);
    VAR_7->input_count = VAR_4;
    VAR_7->output_count = VAR_5;
    VAR_7->color = VAR_3;
    VAR_7->bounds = VAR_2;
    FUNC_4(VAR_7->name, VAR_1);
    FUNC_3(VAR_0, VAR_7);
}
