
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;


 int FUNC_0 (int,char*,unsigned int,unsigned int,...) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline struct sk_buff *FUNC_1(unsigned int VAR_2)
{
 unsigned int VAR_3;
 struct sk_buff *VAR_4;

 VAR_3 = ((VAR_2 - 1) << 2) | VAR_1;
 VAR_4 = *(struct sk_buff **)VAR_3;

 FUNC_0((unsigned int)VAR_4 >= VAR_0, "invalid skb - skb = %#08x, dataptr = %#08x", (unsigned int)VAR_4, VAR_2);
 FUNC_0(((unsigned int)VAR_4->data | VAR_1) == ((VAR_2 << 2) | VAR_1), "invalid skb - skb = %#08x, skb->data = %#08x, dataptr = %#08x", (unsigned int)VAR_4, (unsigned int)VAR_4->data, VAR_2);

 return VAR_4;
}
