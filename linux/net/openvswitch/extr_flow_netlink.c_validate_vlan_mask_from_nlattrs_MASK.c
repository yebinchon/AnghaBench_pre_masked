
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct sw_flow_match {TYPE_4__* key; } ;
struct nlattr {int dummy; } ;
typedef int __be16 ;
struct TYPE_6__ {int tci; } ;
struct TYPE_5__ {int tci; } ;
struct TYPE_7__ {TYPE_2__ cvlan; TYPE_1__ vlan; } ;
struct TYPE_8__ {TYPE_3__ eth; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int,char*,char*,...) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nlattr const*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const struct sw_flow_match *VAR_5,
        u64 VAR_6, bool VAR_7,
        const struct nlattr **VAR_8, bool VAR_9)
{
 __be16 VAR_10 = 0;
 __be16 VAR_11 = 0;
 bool VAR_12 = !!(VAR_5->key->eth.vlan.tci &
         FUNC_1(VAR_4));
 bool VAR_13 = !!(VAR_5->key->eth.cvlan.tci &
    FUNC_1(VAR_4));

 if (!(VAR_6 & (1 << VAR_1))) {

  return 0;
 }

 if ((!VAR_7 && !VAR_12) || (VAR_7 && !VAR_13)) {
  FUNC_0(VAR_9, "Encap mask attribute is set for non-%s frame.",
     (VAR_7) ? "C-VLAN" : "VLAN");
  return -VAR_0;
 }

 if (VAR_8[VAR_3])
  VAR_10 = FUNC_2(VAR_8[VAR_3]);

 if (VAR_8[VAR_2])
  VAR_11 = FUNC_2(VAR_8[VAR_2]);

 if (VAR_11 != FUNC_1(0xffff)) {
  FUNC_0(VAR_9, "Must have an exact match on %s TPID (mask=%x).",
     (VAR_7) ? "C-VLAN" : "VLAN", FUNC_3(VAR_11));
  return -VAR_0;
 }
 if (!(VAR_10 & FUNC_1(VAR_4))) {
  FUNC_0(VAR_9, "%s TCI mask does not have exact match for VLAN_CFI_MASK bit.",
     (VAR_7) ? "C-VLAN" : "VLAN");
  return -VAR_0;
 }

 return 1;
}
