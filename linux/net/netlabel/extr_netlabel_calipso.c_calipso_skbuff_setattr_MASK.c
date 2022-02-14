
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netlbl_lsm_secattr {int dummy; } ;
struct netlbl_calipso_ops {int (* skbuff_setattr ) (struct sk_buff*,struct calipso_doi const*,struct netlbl_lsm_secattr const*) ;} ;
struct calipso_doi {int dummy; } ;


 int VAR_0 ;
 struct netlbl_calipso_ops* FUNC_0 () ;
 int FUNC_1 (struct sk_buff*,struct calipso_doi const*,struct netlbl_lsm_secattr const*) ;

int FUNC_2(struct sk_buff *VAR_1,
      const struct calipso_doi *VAR_2,
      const struct netlbl_lsm_secattr *VAR_3)
{
 int VAR_4 = -VAR_0;
 const struct netlbl_calipso_ops *VAR_5 = FUNC_0();

 if (VAR_5)
  VAR_4 = VAR_5->skbuff_setattr(VAR_1, VAR_2, VAR_3);
 return VAR_4;
}
