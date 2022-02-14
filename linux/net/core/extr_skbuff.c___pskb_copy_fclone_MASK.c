
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data_len; int truesize; int data; } ;
typedef int gfp_t ;
struct TYPE_2__ {int nr_frags; int frag_list; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (unsigned int,int ,int,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,int) ;
 TYPE_1__* FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (struct sk_buff*,struct sk_buff*,int ) ;

struct sk_buff *FUNC_14(struct sk_buff *VAR_2, int VAR_3,
       gfp_t VAR_4, bool VAR_5)
{
 unsigned int VAR_6 = FUNC_8(VAR_2) + VAR_3;
 int VAR_7 = FUNC_2(VAR_2) | (VAR_5 ? VAR_1 : 0);
 struct sk_buff *VAR_8 = FUNC_0(VAR_6, VAR_4, VAR_7, VAR_0);

 if (!VAR_8)
  goto out;


 FUNC_11(VAR_8, VAR_3);

 FUNC_10(VAR_8, FUNC_8(VAR_2));

 FUNC_4(VAR_2, VAR_8->data, VAR_8->len);

 VAR_8->truesize += VAR_2->data_len;
 VAR_8->data_len = VAR_2->data_len;
 VAR_8->len = VAR_2->len;

 if (FUNC_12(VAR_2)->nr_frags) {
  int VAR_9;

  if (FUNC_9(VAR_2, VAR_4) ||
      FUNC_13(VAR_8, VAR_2, VAR_4)) {
   FUNC_1(VAR_8);
   VAR_8 = ((void*)0);
   goto out;
  }
  for (VAR_9 = 0; VAR_9 < FUNC_12(VAR_2)->nr_frags; VAR_9++) {
   FUNC_12(VAR_8)->frags[VAR_9] = FUNC_12(VAR_2)->frags[VAR_9];
   FUNC_6(VAR_2, VAR_9);
  }
  FUNC_12(VAR_8)->nr_frags = VAR_9;
 }

 if (FUNC_7(VAR_2)) {
  FUNC_12(VAR_8)->frag_list = FUNC_12(VAR_2)->frag_list;
  FUNC_3(VAR_8);
 }

 FUNC_5(VAR_8, VAR_2);
out:
 return VAR_8;
}
