
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xt_match {int me; } ;
struct tcf_ematch {int datalen; unsigned long data; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct em_ipt_match {int nfproto; int match_data; int hook; struct xt_match* match; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct xt_match*) ;


 int FUNC_1 (struct xt_match*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net*,struct em_ipt_match*,int) ;
 int VAR_8 ;
 struct xt_match* FUNC_4 (struct nlattr**) ;
 int FUNC_5 (struct em_ipt_match*) ;
 struct em_ipt_match* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct nlattr*) ;
 int FUNC_9 (struct nlattr*) ;
 int FUNC_10 (struct nlattr*) ;
 int FUNC_11 (int ,struct nlattr*,int) ;
 int FUNC_12 (struct nlattr**,int ,void*,int,int ,int *) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static int FUNC_14(struct net *VAR_9, void *VAR_10, int VAR_11,
    struct tcf_ematch *VAR_12)
{
 struct nlattr *VAR_13[VAR_6 + 1];
 struct em_ipt_match *VAR_14 = ((void*)0);
 struct xt_match *VAR_15;
 int VAR_16, VAR_17;
 u8 VAR_18;

 VAR_17 = FUNC_12(VAR_13, VAR_6, VAR_10, VAR_11,
       VAR_8, ((void*)0));
 if (VAR_17 < 0)
  return VAR_17;

 if (!VAR_13[VAR_3] || !VAR_13[VAR_5] ||
     !VAR_13[VAR_4] || !VAR_13[VAR_7])
  return -VAR_0;

 VAR_18 = FUNC_9(VAR_13[VAR_7]);
 switch (VAR_18) {
 case 129:
 case 128:
  break;
 default:
  return -VAR_0;
 }

 VAR_15 = FUNC_4(VAR_13);
 if (FUNC_0(VAR_15)) {
  FUNC_13("unable to load match\n");
  return FUNC_1(VAR_15);
 }

 VAR_16 = FUNC_2(FUNC_10(VAR_13[VAR_4]));
 VAR_14 = FUNC_6(sizeof(*VAR_14) + VAR_16, VAR_2);
 if (!VAR_14) {
  VAR_17 = -VAR_1;
  goto err;
 }

 VAR_14->match = VAR_15;
 VAR_14->hook = FUNC_8(VAR_13[VAR_3]);
 VAR_14->nfproto = VAR_18;
 FUNC_11(VAR_14->match_data, VAR_13[VAR_4], VAR_16);

 VAR_17 = FUNC_3(VAR_9, VAR_14, VAR_16);
 if (VAR_17)
  goto err;

 VAR_12->datalen = sizeof(*VAR_14) + VAR_16;
 VAR_12->data = (unsigned long)VAR_14;
 return 0;

err:
 FUNC_5(VAR_14);
 FUNC_7(VAR_15->me);
 return VAR_17;
}
