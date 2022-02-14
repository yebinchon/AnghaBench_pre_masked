
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl8366_vlan_mc {scalar_t__ vid; scalar_t__ priority; scalar_t__ member; scalar_t__ untag; scalar_t__ fid; } ;
struct rtl8366_smi {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (struct rtl8366_smi*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_3(struct rtl8366_smi *VAR_13, u32 VAR_14,
    const struct rtl8366_vlan_mc *VAR_15)
{
 u32 VAR_16[VAR_12];
 int VAR_17;
 int VAR_18;

 if (VAR_14 >= VAR_3 ||
     VAR_15->vid >= VAR_2 ||
     VAR_15->priority > VAR_4 ||
     VAR_15->member > VAR_6 ||
     VAR_15->untag > VAR_5 ||
     VAR_15->fid > VAR_1)
  return -VAR_0;

 VAR_16[0] = (VAR_15->member & VAR_6) <<
    VAR_7;
 VAR_16[1] = (VAR_15->fid & VAR_8) <<
    VAR_9;
 VAR_16[2] = 0;
 VAR_16[3] = (VAR_15->vid & VAR_10) <<
     VAR_11;

 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_16); VAR_18++)
  FUNC_1(VAR_13, FUNC_2(VAR_14) + VAR_18, VAR_16[VAR_18]);

 return 0;
}
