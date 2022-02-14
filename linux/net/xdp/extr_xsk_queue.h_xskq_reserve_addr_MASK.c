
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_queue {int prod_head; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xsk_queue*,int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct xsk_queue *VAR_1)
{
 if (FUNC_0(VAR_1, VAR_1->prod_head, 1) == 0)
  return -VAR_0;


 VAR_1->prod_head++;
 return 0;
}
