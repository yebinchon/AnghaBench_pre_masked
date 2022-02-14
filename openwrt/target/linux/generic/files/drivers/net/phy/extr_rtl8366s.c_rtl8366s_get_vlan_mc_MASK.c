
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl8366_vlan_mc {scalar_t__ fid; scalar_t__ member; scalar_t__ untag; scalar_t__ priority; scalar_t__ vid; } ;
struct rtl8366_smi {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct rtl8366_vlan_mc*,char,int) ;
 int FUNC_2 (struct rtl8366_smi*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct rtl8366_smi *VAR_10, u32 VAR_11,
    struct rtl8366_vlan_mc *VAR_12)
{
 u32 VAR_13[2];
 int VAR_14;
 int VAR_15;

 FUNC_1(VAR_12, '\0', sizeof(struct rtl8366_vlan_mc));

 if (VAR_11 >= VAR_1)
  return -VAR_0;

 for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {
  VAR_14 = FUNC_2(VAR_10,
        FUNC_0(VAR_11) + VAR_15,
        &VAR_13[VAR_15]);
  if (VAR_14)
   return VAR_14;
 }

 VAR_12->vid = VAR_13[0] & VAR_9;
 VAR_12->priority = (VAR_13[0] >> VAR_6) &
      VAR_5;
 VAR_12->untag = (VAR_13[1] >> VAR_8) &
   VAR_7;
 VAR_12->member = VAR_13[1] & VAR_4;
 VAR_12->fid = (VAR_13[1] >> VAR_3) &
        VAR_2;

 return 0;
}
