
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sw_flow_match {int dummy; } ;
struct nlattr {int dummy; } ;
typedef int __be16 ;
struct TYPE_5__ {int tci; int tpid; } ;
struct TYPE_4__ {int tci; int tpid; } ;
struct TYPE_6__ {TYPE_2__ cvlan; TYPE_1__ vlan; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct sw_flow_match*,int ,int ,int) ;
 TYPE_3__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct nlattr const*) ;

__attribute__((used)) static int FUNC_3(struct sw_flow_match *VAR_3,
        const struct nlattr *VAR_4[],
        bool VAR_5, bool VAR_6)
{
 __be16 VAR_7 = 0;
 __be16 VAR_8 = 0;

 if (VAR_4[VAR_1])
  VAR_7 = FUNC_2(VAR_4[VAR_1]);

 if (VAR_4[VAR_0])
  VAR_8 = FUNC_2(VAR_4[VAR_0]);

 if (FUNC_1(!VAR_6)) {
  FUNC_0(VAR_3, VAR_2.vlan.tpid, VAR_8, VAR_5);
  FUNC_0(VAR_3, VAR_2.vlan.tci, VAR_7, VAR_5);
 } else {
  FUNC_0(VAR_3, VAR_2.cvlan.tpid, VAR_8, VAR_5);
  FUNC_0(VAR_3, VAR_2.cvlan.tci, VAR_7, VAR_5);
 }
 return 0;
}
