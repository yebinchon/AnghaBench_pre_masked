
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skb_shared_info {int nr_frags; int * frags; } ;
struct sk_buff {int end; int tail; int data_len; } ;
struct TYPE_2__ {int frag0; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 struct skb_shared_info* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct sk_buff *VAR_0, int VAR_1)
{
 struct skb_shared_info *VAR_2 = FUNC_8(VAR_0);

 FUNC_0(VAR_0->end - VAR_0->tail < VAR_1);

 FUNC_2(FUNC_9(VAR_0), FUNC_1(VAR_0)->frag0, VAR_1);

 VAR_0->data_len -= VAR_1;
 VAR_0->tail += VAR_1;

 FUNC_4(&VAR_2->frags[0], VAR_1);
 FUNC_6(&VAR_2->frags[0], VAR_1);

 if (FUNC_10(!FUNC_5(&VAR_2->frags[0]))) {
  FUNC_7(VAR_0, 0);
  FUNC_3(VAR_2->frags, VAR_2->frags + 1,
   --VAR_2->nr_frags * sizeof(VAR_2->frags[0]));
 }
}
