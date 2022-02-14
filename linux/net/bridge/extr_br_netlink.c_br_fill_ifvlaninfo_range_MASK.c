
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vinfo ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct bridge_vlan_info {scalar_t__ flags; scalar_t__ vid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int,struct bridge_vlan_info*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_4, u16 VAR_5,
        u16 VAR_6, u16 VAR_7)
{
 struct bridge_vlan_info VAR_8;

 if ((VAR_6 - VAR_5) > 0) {

  VAR_8.vid = VAR_5;
  VAR_8.flags = VAR_7 | VAR_0;
  if (FUNC_0(VAR_4, VAR_3,
       sizeof(VAR_8), &VAR_8))
   goto nla_put_failure;

  VAR_8.vid = VAR_6;
  VAR_8.flags = VAR_7 | VAR_1;
  if (FUNC_0(VAR_4, VAR_3,
       sizeof(VAR_8), &VAR_8))
   goto nla_put_failure;
 } else {
  VAR_8.vid = VAR_5;
  VAR_8.flags = VAR_7;
  if (FUNC_0(VAR_4, VAR_3,
       sizeof(VAR_8), &VAR_8))
   goto nla_put_failure;
 }

 return 0;

nla_put_failure:
 return -VAR_2;
}
