
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int16_t ;
typedef int u8 ;
typedef int u16 ;
struct xt_tcpmss_info {scalar_t__ mss; } ;
struct xt_action_param {scalar_t__ fragoff; struct xt_tcpmss_info* targinfo; } ;
struct tcphdr {int doff; int check; } ;
struct sk_buff {unsigned int len; } ;
struct net {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct sk_buff*,int ,int ,int) ;
 int FUNC_3 (int *,struct sk_buff*,int ,int ,int) ;
 int FUNC_4 (int*,int*,int) ;
 void* FUNC_5 (int,int) ;
 int FUNC_6 (char*,unsigned int) ;
 scalar_t__ FUNC_7 (int*,unsigned int) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int,int ) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*) ;
 unsigned int FUNC_14 (struct net*,struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_15 (struct xt_action_param const*) ;
 struct net* FUNC_16 (struct xt_action_param const*) ;

__attribute__((used)) static int
FUNC_17(struct sk_buff *VAR_5,
       const struct xt_action_param *VAR_6,
       unsigned int VAR_7,
       unsigned int VAR_8,
       unsigned int VAR_9)
{
 const struct xt_tcpmss_info *VAR_10 = VAR_6->targinfo;
 struct tcphdr *VAR_11;
 int VAR_12, VAR_13;
 unsigned int VAR_14;
 __be16 VAR_15;
 u16 VAR_16;
 u8 *VAR_17;


 if (VAR_6->fragoff != 0)
  return 0;

 if (FUNC_10(VAR_5, VAR_5->len))
  return -1;

 VAR_12 = VAR_5->len - VAR_8;
 if (VAR_12 < (int)sizeof(struct tcphdr))
  return -1;

 VAR_11 = (struct tcphdr *)(FUNC_11(VAR_5) + VAR_8);
 VAR_13 = VAR_11->doff * 4;

 if (VAR_12 < VAR_13 || VAR_13 < sizeof(struct tcphdr))
  return -1;

 if (VAR_10->mss == VAR_4) {
  struct net *VAR_18 = FUNC_16(VAR_6);
  unsigned int VAR_19 = FUNC_14(VAR_18, VAR_5, VAR_7);
  unsigned int VAR_20 = FUNC_5(FUNC_0(FUNC_9(VAR_5)), VAR_19);

  if (VAR_20 <= VAR_9) {
   FUNC_6("unknown or invalid path-MTU (%u)\n",
         VAR_20);
   return -1;
  }
  VAR_16 = VAR_20 - VAR_9;
 } else
  VAR_16 = VAR_10->mss;

 VAR_17 = (u_int8_t *)VAR_11;
 for (VAR_14 = sizeof(struct tcphdr); VAR_14 <= VAR_13 - VAR_2; VAR_14 += FUNC_7(VAR_17, VAR_14)) {
  if (VAR_17[VAR_14] == VAR_3 && VAR_17[VAR_14+1] == VAR_2) {
   u_int16_t VAR_21;

   VAR_21 = (VAR_17[VAR_14+2] << 8) | VAR_17[VAR_14+3];





   if (VAR_21 <= VAR_16)
    return 0;

   VAR_17[VAR_14+2] = (VAR_16 & 0xff00) >> 8;
   VAR_17[VAR_14+3] = VAR_16 & 0x00ff;

   FUNC_2(&VAR_11->check, VAR_5,
       FUNC_1(VAR_21), FUNC_1(VAR_16),
       0);
   return 0;
  }
 }





 if (VAR_12 > VAR_13)
  return 0;


 if (VAR_13 >= 15 * 4)
  return 0;




 if (FUNC_13(VAR_5) < VAR_2) {
  if (FUNC_8(VAR_5, 0,
         VAR_2 - FUNC_13(VAR_5),
         VAR_0))
   return -1;
  VAR_11 = (struct tcphdr *)(FUNC_11(VAR_5) + VAR_8);
 }

 FUNC_12(VAR_5, VAR_2);
 if (FUNC_15(VAR_6) == VAR_1)
  VAR_16 = FUNC_5(VAR_16, (u16)536);
 else
  VAR_16 = FUNC_5(VAR_16, (u16)1220);

 VAR_17 = (u_int8_t *)VAR_11 + sizeof(struct tcphdr);
 FUNC_4(VAR_17 + VAR_2, VAR_17, VAR_12 - sizeof(struct tcphdr));

 FUNC_2(&VAR_11->check, VAR_5,
     FUNC_1(VAR_12), FUNC_1(VAR_12 + VAR_2), 1);
 VAR_17[0] = VAR_3;
 VAR_17[1] = VAR_2;
 VAR_17[2] = (VAR_16 & 0xff00) >> 8;
 VAR_17[3] = VAR_16 & 0x00ff;

 FUNC_3(&VAR_11->check, VAR_5, 0, *((__be32 *)VAR_17), 0);

 VAR_15 = ((__be16 *)VAR_11)[6];
 VAR_11->doff += VAR_2/4;
 FUNC_2(&VAR_11->check, VAR_5,
     VAR_15, ((__be16 *)VAR_11)[6], 0);
 return VAR_2;
}
