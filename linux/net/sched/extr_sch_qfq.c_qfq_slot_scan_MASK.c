
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_group {unsigned int full_slots; unsigned int front; int index; } ;
struct qfq_aggregate {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,int ,unsigned int) ;
 struct qfq_aggregate* FUNC_2 (struct qfq_group*) ;

__attribute__((used)) static struct qfq_aggregate *FUNC_3(struct qfq_group *VAR_1)
{
 unsigned int VAR_2;

 FUNC_1("qfq slot_scan: grp %u full %#lx\n",
   VAR_1->index, VAR_1->full_slots);

 if (VAR_1->full_slots == 0)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_1->full_slots);
 if (VAR_2 > 0) {
  VAR_1->front = (VAR_1->front + VAR_2) % VAR_0;
  VAR_1->full_slots >>= VAR_2;
 }

 return FUNC_2(VAR_1);
}
