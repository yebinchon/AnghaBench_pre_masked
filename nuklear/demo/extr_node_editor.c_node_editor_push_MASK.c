
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_editor {struct node* end; struct node* begin; } ;
struct node {struct node* next; struct node* prev; } ;



__attribute__((used)) static void
FUNC_0(struct node_editor *VAR_0, struct node *VAR_1)
{
    if (!VAR_0->begin) {
        VAR_1->next = ((void*)0);
        VAR_1->prev = ((void*)0);
        VAR_0->begin = VAR_1;
        VAR_0->end = VAR_1;
    } else {
        VAR_1->prev = VAR_0->end;
        if (VAR_0->end)
            VAR_0->end->next = VAR_1;
        VAR_1->next = ((void*)0);
        VAR_0->end = VAR_1;
    }
}
