
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int type; } ;
struct sw_flow_key {TYPE_1__ eth; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u16 FUNC_1(const struct sw_flow_key *VAR_3)
{
 switch (FUNC_0(VAR_3->eth.type)) {
 case 129:
  return VAR_0;
 case 128:
  return VAR_1;
 default:
  return VAR_2;
 }
}
