
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; int pkt_type; } ;
struct dn_skb_cb {int rt_flags; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dn_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct sk_buff*,unsigned char*,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,unsigned char*) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_8)
{
 struct dn_skb_cb *VAR_9;
 unsigned char *VAR_10;
 unsigned char *VAR_11, *VAR_12;
 unsigned char VAR_13[VAR_3];


 FUNC_4(VAR_8, VAR_8->data - FUNC_3(VAR_8));

 if ((VAR_8 = FUNC_5(VAR_8, VAR_4)) == ((void*)0))
  return VAR_5;

 VAR_9 = FUNC_0(VAR_8);

 VAR_10 = VAR_8->data + 2;


 if (*VAR_10 & VAR_0) {
  char VAR_14 = (*VAR_10 & ~VAR_0);
  VAR_10 += VAR_14;
 }

 *VAR_10++ = (VAR_9->rt_flags & ~VAR_1) | VAR_2;
 VAR_10 += 2;
 VAR_12 = VAR_10;
 VAR_10 += 8;
 VAR_11 = VAR_10;
 VAR_10 += 6;
 *VAR_10 = 0;


 FUNC_2(VAR_13, VAR_11, VAR_3);
 FUNC_2(VAR_11, VAR_12, VAR_3);
 FUNC_2(VAR_12, VAR_13, VAR_3);

 VAR_8->pkt_type = VAR_7;
 FUNC_1(VAR_8, VAR_12, VAR_11);
 return VAR_6;
}
