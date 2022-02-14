
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_queue {int ring; } ;


 int FUNC_0 (struct xsk_queue*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct xsk_queue *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_1(VAR_0->ring);
 FUNC_0(VAR_0);
}
