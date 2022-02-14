
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct __ip6_tnl_parm {int collect_md; void* fwmark; void* flags; void* flowinfo; void* encap_limit; void* hop_limit; void* raddr; void* laddr; void* o_key; void* i_key; void* o_flags; void* i_flags; void* link; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct __ip6_tnl_parm*,int ,int) ;
 int FUNC_2 (struct nlattr*) ;
 void* FUNC_3 (struct nlattr*) ;
 void* FUNC_4 (struct nlattr*) ;
 void* FUNC_5 (struct nlattr*) ;
 void* FUNC_6 (struct nlattr*) ;

__attribute__((used)) static void FUNC_7(struct nlattr *VAR_13[],
    struct __ip6_tnl_parm *VAR_14)
{
 FUNC_1(VAR_14, 0, sizeof(*VAR_14));

 if (!VAR_13)
  return;

 if (VAR_13[VAR_7])
  VAR_14->link = FUNC_5(VAR_13[VAR_7]);

 if (VAR_13[VAR_5])
  VAR_14->i_flags = FUNC_0(
    FUNC_2(VAR_13[VAR_5]));

 if (VAR_13[VAR_9])
  VAR_14->o_flags = FUNC_0(
    FUNC_2(VAR_13[VAR_9]));

 if (VAR_13[VAR_6])
  VAR_14->i_key = FUNC_3(VAR_13[VAR_6]);

 if (VAR_13[VAR_10])
  VAR_14->o_key = FUNC_3(VAR_13[VAR_10]);

 if (VAR_13[VAR_8])
  VAR_14->laddr = FUNC_4(VAR_13[VAR_8]);

 if (VAR_13[VAR_11])
  VAR_14->raddr = FUNC_4(VAR_13[VAR_11]);

 if (VAR_13[VAR_12])
  VAR_14->hop_limit = FUNC_6(VAR_13[VAR_12]);

 if (VAR_13[VAR_1])
  VAR_14->encap_limit = FUNC_6(VAR_13[VAR_1]);

 if (VAR_13[VAR_3])
  VAR_14->flowinfo = FUNC_3(VAR_13[VAR_3]);

 if (VAR_13[VAR_2])
  VAR_14->flags = FUNC_5(VAR_13[VAR_2]);

 if (VAR_13[VAR_4])
  VAR_14->fwmark = FUNC_5(VAR_13[VAR_4]);

 if (VAR_13[VAR_0])
  VAR_14->collect_md = 1;
}
