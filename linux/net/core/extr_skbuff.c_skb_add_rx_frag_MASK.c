
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data_len; unsigned int truesize; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct sk_buff*,int,struct page*,int,int) ;

void FUNC_1(struct sk_buff *VAR_0, int VAR_1, struct page *VAR_2, int VAR_3,
       int VAR_4, unsigned int VAR_5)
{
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_0->len += VAR_4;
 VAR_0->data_len += VAR_4;
 VAR_0->truesize += VAR_5;
}
