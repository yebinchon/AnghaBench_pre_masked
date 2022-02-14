
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlist_head {scalar_t__ bytes; int * tail; int head; } ;



__attribute__((used)) static void FUNC_0(struct qlist_head *VAR_0)
{
 VAR_0->head = *(VAR_0->tail = ((void*)0));
 VAR_0->bytes = 0;
}
