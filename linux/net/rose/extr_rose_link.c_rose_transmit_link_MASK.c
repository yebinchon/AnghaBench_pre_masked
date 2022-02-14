
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rose_neigh {scalar_t__ dce_mode; int queue; scalar_t__ restarted; scalar_t__ loopback; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct rose_neigh*) ;
 int FUNC_2 (struct sk_buff*,struct rose_neigh*) ;
 int FUNC_3 (struct sk_buff*,struct rose_neigh*) ;
 int FUNC_4 (struct rose_neigh*) ;
 int FUNC_5 (struct rose_neigh*) ;
 int FUNC_6 (struct rose_neigh*) ;
 unsigned char* FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (int *,struct sk_buff*) ;

void FUNC_9(struct sk_buff *VAR_1, struct rose_neigh *VAR_2)
{
 unsigned char *VAR_3;

 if (VAR_2->loopback) {
  FUNC_2(VAR_1, VAR_2);
  return;
 }

 if (!FUNC_1(VAR_2))
  VAR_2->restarted = 0;

 VAR_3 = FUNC_7(VAR_1, 1);
 *VAR_3++ = VAR_0;

 if (VAR_2->restarted) {
  if (!FUNC_3(VAR_1, VAR_2))
   FUNC_0(VAR_1);
 } else {
  FUNC_8(&VAR_2->queue, VAR_1);

  if (!FUNC_5(VAR_2)) {
   FUNC_6(VAR_2);
   VAR_2->dce_mode = 0;
   FUNC_4(VAR_2);
  }
 }
}
