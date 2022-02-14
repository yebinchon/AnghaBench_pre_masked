
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_editor {struct node* begin; } ;
struct node {int ID; struct node* next; } ;



__attribute__((used)) static struct node*
FUNC_0(struct node_editor *VAR_0, int VAR_1)
{
    struct node *VAR_2 = VAR_0->begin;
    while (VAR_2) {
        if (VAR_2->ID == VAR_1)
            return VAR_2;
        VAR_2 = VAR_2->next;
    }
    return ((void*)0);
}
