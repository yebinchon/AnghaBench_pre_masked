
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct sw_flow_match {TYPE_3__* key; } ;
struct nlattr {int dummy; } ;
struct TYPE_4__ {int tci; } ;
struct TYPE_5__ {TYPE_1__ vlan; } ;
struct TYPE_6__ {TYPE_2__ eth; } ;


 int VAR_0 ;
 int FUNC_0 (struct sw_flow_match*,int *,int,struct nlattr const**,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct sw_flow_match *VAR_1,
       u64 *VAR_2, const struct nlattr **VAR_3,
       bool VAR_4, bool VAR_5)
{
 int VAR_6;
 bool VAR_7 = 0;

 VAR_6 = FUNC_0(VAR_1, VAR_2, 0, VAR_3,
     VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_7 = !!(VAR_1->key->eth.vlan.tci & FUNC_1(VAR_0));
 if (VAR_7) {
  VAR_6 = FUNC_0(VAR_1, VAR_2, 1, VAR_3,
      VAR_4, VAR_5);
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
