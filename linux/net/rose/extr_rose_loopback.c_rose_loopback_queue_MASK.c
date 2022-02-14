
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rose_neigh {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,struct sk_buff*) ;

int FUNC_7(struct sk_buff *VAR_3, struct rose_neigh *VAR_4)
{
 struct sk_buff *VAR_5 = ((void*)0);

 if (FUNC_5(&VAR_2) < VAR_1)
  VAR_5 = FUNC_4(VAR_3, VAR_0);

 if (VAR_5) {
  FUNC_0(VAR_3);
  FUNC_6(&VAR_2, VAR_5);

  if (!FUNC_2())
   FUNC_3();
 } else {
  FUNC_1(VAR_3);
 }

 return 1;
}
