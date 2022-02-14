
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct netlbl_lsm_secattr {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,struct netlbl_lsm_secattr*) ;
 int FUNC_1 (int *,struct netlbl_lsm_secattr*,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_3,
        u16 VAR_4,
        struct netlbl_lsm_secattr *VAR_5,
        u32 *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(&VAR_2, VAR_5, VAR_6);
 if (VAR_7 == 0 &&
     (VAR_5->flags & VAR_1) &&
     (VAR_5->flags & VAR_0))
  FUNC_0(VAR_3, VAR_4, VAR_5);

 return VAR_7;
}
