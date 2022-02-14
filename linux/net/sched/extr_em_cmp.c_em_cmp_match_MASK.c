
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;
struct tcf_pkt_info {int dummy; } ;
struct tcf_ematch {scalar_t__ data; } ;
struct tcf_em_cmp {int off; int align; int mask; int opnd; unsigned char val; int layer; } ;
struct sk_buff {int dummy; } ;
 unsigned char FUNC_0 (unsigned char) ;
 unsigned char FUNC_1 (unsigned char) ;
 int FUNC_2 (struct tcf_em_cmp*) ;
 unsigned char FUNC_3 (unsigned char*) ;
 unsigned char FUNC_4 (unsigned char*) ;
 unsigned char* FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_0, struct tcf_ematch *VAR_1,
   struct tcf_pkt_info *VAR_2)
{
 struct tcf_em_cmp *VAR_3 = (struct tcf_em_cmp *) VAR_1->data;
 unsigned char *VAR_4 = FUNC_5(VAR_0, VAR_3->layer) + VAR_3->off;
 u32 VAR_5 = 0;

 if (!FUNC_6(VAR_0, VAR_4, VAR_3->align))
  return 0;

 switch (VAR_3->align) {
 case 131:
  VAR_5 = *VAR_4;
  break;

 case 133:
  VAR_5 = FUNC_3(VAR_4);

  if (FUNC_2(VAR_3))
   VAR_5 = FUNC_0(VAR_5);
  break;

 case 132:



  VAR_5 = FUNC_4(VAR_4);

  if (FUNC_2(VAR_3))
   VAR_5 = FUNC_1(VAR_5);
  break;

 default:
  return 0;
 }

 if (VAR_3->mask)
  VAR_5 &= VAR_3->mask;

 switch (VAR_3->opnd) {
 case 130:
  return VAR_5 == VAR_3->val;
 case 128:
  return VAR_5 < VAR_3->val;
 case 129:
  return VAR_5 > VAR_3->val;
 }

 return 0;
}
