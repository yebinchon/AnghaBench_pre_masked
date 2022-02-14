
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl8366_vlan_mc {scalar_t__ vid; scalar_t__ priority; scalar_t__ member; scalar_t__ untag; scalar_t__ fid; } ;
struct rtl8366_smi {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct rtl8366_smi*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct rtl8366_smi *VAR_12, u32 VAR_13,
     const struct rtl8366_vlan_mc *VAR_14)
{
 u32 VAR_15[3];
 int VAR_16;
 int VAR_17;

 if (VAR_13 >= VAR_3 ||
     VAR_14->vid >= VAR_2 ||
     VAR_14->priority > VAR_4 ||
     VAR_14->member > VAR_6 ||
     VAR_14->untag > VAR_9 ||
     VAR_14->fid > VAR_1)
  return -VAR_0;

 VAR_15[0] = (VAR_14->vid & VAR_11) |
    ((VAR_14->priority & VAR_7) <<
   VAR_8);
 VAR_15[1] = (VAR_14->member & VAR_6) |
    ((VAR_14->untag & VAR_9) <<
   VAR_10);
 VAR_15[2] = VAR_14->fid & VAR_5;

 for (VAR_17 = 0; VAR_17 < 3; VAR_17++) {
  VAR_16 = FUNC_1(VAR_12,
         FUNC_0(VAR_13) + VAR_17,
         VAR_15[VAR_17]);
  if (VAR_16)
   return VAR_16;
 }

 return 0;
}
