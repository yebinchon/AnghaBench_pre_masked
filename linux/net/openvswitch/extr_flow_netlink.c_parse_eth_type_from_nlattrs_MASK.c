
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sw_flow_match {int dummy; } ;
struct nlattr {int dummy; } ;
typedef int __be16 ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (struct sw_flow_match*,int ,int ,int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct nlattr const*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct sw_flow_match *VAR_4,
           u64 *VAR_5, const struct nlattr **VAR_6,
           bool VAR_7, bool VAR_8)
{
 __be16 VAR_9;

 VAR_9 = FUNC_4(VAR_6[VAR_2]);
 if (VAR_7) {

  VAR_9 = FUNC_3(0xffff);
 } else if (!FUNC_2(VAR_9)) {
  FUNC_0(VAR_8, "EtherType %x is less than min %x",
    FUNC_5(VAR_9), VAR_1);
  return -VAR_0;
 }

 FUNC_1(VAR_4, VAR_3.type, VAR_9, VAR_7);
 *VAR_5 &= ~(1 << VAR_2);
 return 0;
}
