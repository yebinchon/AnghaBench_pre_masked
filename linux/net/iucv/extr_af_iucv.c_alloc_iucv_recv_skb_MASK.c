
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned long len; unsigned long data_len; } ;
struct iucv_array {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int,char*,unsigned long,int) ;
 struct sk_buff* FUNC_1 (size_t,unsigned long,int ,int*,int) ;
 int FUNC_2 (struct sk_buff*,size_t) ;
 int FUNC_3 (struct sk_buff*,size_t) ;

__attribute__((used)) static struct sk_buff *FUNC_4(unsigned long VAR_4)
{
 size_t VAR_5, VAR_6;
 struct sk_buff *VAR_7;
 int VAR_8;

 if (VAR_4 < VAR_3) {
  VAR_5 = 0;
  VAR_6 = VAR_4;
 } else {
  VAR_5 = sizeof(struct iucv_array) * (VAR_2 + 1);
  VAR_6 = VAR_3 - VAR_5;
 }
 VAR_7 = FUNC_1(VAR_5 + VAR_6, VAR_4 - VAR_6,
       0, &VAR_8, VAR_0 | VAR_1);
 FUNC_0(!VAR_7,
    "alloc of recv iucv skb len=%lu failed with errcode=%d\n",
    VAR_4, VAR_8);
 if (VAR_7) {
  if (VAR_5)
   FUNC_3(VAR_7, VAR_5);
  FUNC_2(VAR_7, VAR_6);
  VAR_7->len = VAR_4;
  VAR_7->data_len = VAR_4 - VAR_6;
 }
 return VAR_7;
}
