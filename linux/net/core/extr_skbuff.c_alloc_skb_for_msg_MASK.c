
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int * destructor; int truesize; int len; int data_len; } ;
struct TYPE_2__ {struct sk_buff* frag_list; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;

struct sk_buff *FUNC_3(struct sk_buff *VAR_1)
{
 struct sk_buff *VAR_2;

 VAR_2 = FUNC_1(0, VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->len = VAR_1->len;
 VAR_2->data_len = VAR_1->len;
 VAR_2->truesize = VAR_1->truesize;

 FUNC_2(VAR_2)->frag_list = VAR_1;

 FUNC_0(VAR_2, VAR_1);
 VAR_2->destructor = ((void*)0);

 return VAR_2;
}
