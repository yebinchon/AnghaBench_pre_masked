
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fq_flow_head {struct fq_flow* last; struct fq_flow* first; } ;
struct fq_flow {struct fq_flow* next; } ;



__attribute__((used)) static void FUNC_0(struct fq_flow_head *VAR_0, struct fq_flow *VAR_1)
{
 if (VAR_0->first)
  VAR_0->last->next = VAR_1;
 else
  VAR_0->first = VAR_1;
 VAR_0->last = VAR_1;
 VAR_1->next = ((void*)0);
}
