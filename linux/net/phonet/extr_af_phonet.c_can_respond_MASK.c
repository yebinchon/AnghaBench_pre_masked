
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct phonetmsg {scalar_t__ pn_msg_id; scalar_t__ pn_e_submsg_id; scalar_t__ pn_submsg_id; } ;
struct phonethdr {scalar_t__ pn_res; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct phonethdr* FUNC_0 (struct sk_buff*) ;
 struct phonetmsg* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static inline int FUNC_3(struct sk_buff *VAR_5)
{
 const struct phonethdr *VAR_6;
 const struct phonetmsg *VAR_7;
 u8 VAR_8;

 if (!FUNC_2(VAR_5, 3))
  return 0;

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6->pn_res == VAR_4 && !FUNC_2(VAR_5, 5))
  return 0;
 if (VAR_6->pn_res == VAR_0)
  return 0;

 VAR_6 = FUNC_0(VAR_5);
 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7->pn_msg_id != VAR_1)
  return 1;
 VAR_8 = (VAR_6->pn_res == VAR_4)
  ? VAR_7->pn_e_submsg_id : VAR_7->pn_submsg_id;
 if (VAR_8 != VAR_2 &&
  VAR_7->pn_e_submsg_id != VAR_3)
  return 1;
 return 0;
}
