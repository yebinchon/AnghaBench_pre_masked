
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl8366_vlan_4k {scalar_t__ fid; scalar_t__ untag; scalar_t__ member; scalar_t__ vid; } ;
struct rtl8366_smi {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (struct rtl8366_smi*,int ,scalar_t__*) ;
 int FUNC_2 (struct rtl8366_smi*,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct rtl8366_vlan_4k*,char,int) ;

__attribute__((used)) static int FUNC_5(struct rtl8366_smi *VAR_12, u32 VAR_13,
    struct rtl8366_vlan_4k *VAR_14)
{
 u32 VAR_15[VAR_11];
 int VAR_16;
 int VAR_17;

 FUNC_4(VAR_14, '\0', sizeof(struct rtl8366_vlan_4k));

 if (VAR_13 >= VAR_1)
  return -VAR_0;


 FUNC_2(VAR_12, VAR_2, VAR_13);


 FUNC_2(VAR_12, VAR_4, VAR_3);

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_15); VAR_17++)
  FUNC_1(VAR_12, FUNC_3(VAR_17), &VAR_15[VAR_17]);

 VAR_14->vid = VAR_13;
 VAR_14->member = (VAR_15[0] >> VAR_6) &
    VAR_5;
 VAR_14->untag = (VAR_15[0] >> VAR_8) &
   VAR_7;
 VAR_14->fid = (VAR_15[1] >> VAR_10) &
        VAR_9;

 return 0;
}
