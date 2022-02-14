
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int16_t ;
typedef int u8 ;
struct xt_tcpoptstrip_target_info {int strip_bmap; } ;
struct xt_action_param {scalar_t__ fragoff; struct xt_tcpoptstrip_target_info* targinfo; } ;
struct tcphdr {int doff; int check; } ;
struct sk_buff {int dummy; } ;
typedef int _th ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct sk_buff*,int ,int ,int) ;
 int FUNC_2 (int*,int,unsigned int) ;
 unsigned int FUNC_3 (int*,unsigned int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,unsigned int) ;
 struct tcphdr* FUNC_5 (struct sk_buff*,unsigned int,int,struct tcphdr*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static unsigned int
FUNC_8(struct sk_buff *VAR_3,
     const struct xt_action_param *VAR_4,
     unsigned int VAR_5)
{
 const struct xt_tcpoptstrip_target_info *VAR_6 = VAR_4->targinfo;
 struct tcphdr *VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11;
 u_int16_t VAR_12, VAR_13;
 u_int8_t *VAR_14;
 int VAR_15;


 if (VAR_4->fragoff != 0)
  return VAR_2;

 VAR_7 = FUNC_5(VAR_3, VAR_5, sizeof(VAR_8), &VAR_8);
 if (!VAR_7)
  return VAR_0;

 VAR_15 = VAR_7->doff * 4;
 if (VAR_15 < sizeof(struct tcphdr))
  return VAR_0;

 if (FUNC_4(VAR_3, VAR_5 + VAR_15))
  return VAR_0;


 VAR_7 = (struct tcphdr *)(FUNC_6(VAR_3) + VAR_5);
 VAR_14 = (u8 *)VAR_7;





 for (VAR_10 = sizeof(struct tcphdr); VAR_10 < VAR_15 - 1; VAR_10 += VAR_9) {
  VAR_9 = FUNC_3(VAR_14, VAR_10);

  if (VAR_10 + VAR_9 > VAR_15)
   break;

  if (!FUNC_7(VAR_6->strip_bmap, VAR_14[VAR_10]))
   continue;

  for (VAR_11 = 0; VAR_11 < VAR_9; ++VAR_11) {
   VAR_13 = VAR_14[VAR_10+VAR_11];
   VAR_12 = VAR_1;
   if ((VAR_10 + VAR_11) % 2 == 0) {
    VAR_13 <<= 8;
    VAR_12 <<= 8;
   }
   FUNC_1(&VAR_7->check, VAR_3, FUNC_0(VAR_13),
       FUNC_0(VAR_12), 0);
  }
  FUNC_2(VAR_14 + VAR_10, VAR_1, VAR_9);
 }

 return VAR_2;
}
