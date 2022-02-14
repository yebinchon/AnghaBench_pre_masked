
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl8366_vlan_4k {scalar_t__ untag; scalar_t__ fid; scalar_t__ member; scalar_t__ vid; } ;
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
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (struct rtl8366_vlan_4k*,char,int) ;

__attribute__((used)) static int FUNC_5(struct rtl8366_smi *VAR_14, u32 VAR_15,
    struct rtl8366_vlan_4k *VAR_16)
{
 u32 VAR_17[VAR_5];
 int VAR_18;
 int VAR_19;

 FUNC_4(VAR_16, '\0', sizeof(struct rtl8366_vlan_4k));

 if (VAR_15 >= VAR_1)
  return -VAR_0;


 FUNC_2(VAR_14, VAR_2, VAR_15);


 FUNC_2(VAR_14, VAR_4, VAR_3);

 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_17); VAR_19++)
  FUNC_1(VAR_14, FUNC_3(VAR_19), &VAR_17[VAR_19]);

 VAR_16->vid = VAR_15;
 VAR_16->member = (VAR_17[0] >> VAR_9) &
    VAR_8;
 VAR_16->fid = (VAR_17[1] >> VAR_7) &
        VAR_6;
 VAR_16->untag = (VAR_17[2] >> VAR_11) &
   VAR_10;
 VAR_16->untag |= ((VAR_17[3] >> VAR_13) &
     VAR_12) << 2;

 return 0;
}
