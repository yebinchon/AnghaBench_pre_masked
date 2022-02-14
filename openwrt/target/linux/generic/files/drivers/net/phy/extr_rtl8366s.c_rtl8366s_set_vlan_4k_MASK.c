
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8366_vlan_4k {int vid; int member; int untag; int fid; } ;
struct rtl8366_smi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct rtl8366_smi*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct rtl8366_smi *VAR_12,
    const struct rtl8366_vlan_4k *VAR_13)
{
 u32 VAR_14[2];
 int VAR_15;
 int VAR_16;

 if (VAR_13->vid >= VAR_2 ||
     VAR_13->member > VAR_7 ||
     VAR_13->untag > VAR_9 ||
     VAR_13->fid > VAR_1)
  return -VAR_0;

 VAR_14[0] = VAR_13->vid & VAR_11;
 VAR_14[1] = (VAR_13->member & VAR_7) |
    ((VAR_13->untag & VAR_9) <<
   VAR_10) |
    ((VAR_13->fid & VAR_5) <<
   VAR_6);

 for (VAR_16 = 0; VAR_16 < 2; VAR_16++) {
  VAR_15 = FUNC_0(VAR_12,
         VAR_8 + VAR_16,
         VAR_14[VAR_16]);
  if (VAR_15)
   return VAR_15;
 }


 VAR_15 = FUNC_0(VAR_12, VAR_3,
        VAR_4);

 return VAR_15;
}
