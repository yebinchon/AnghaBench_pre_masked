
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int st8 ;
struct TYPE_3__ {int o; int * a; } ;
typedef TYPE_1__ ArmOpcode ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static st8 FUNC_2(ArmOpcode *VAR_1, ut64 VAR_2) {
 ut8 VAR_3 = FUNC_0 (VAR_1->a[0]);
 ut8 VAR_4 = FUNC_1 (VAR_1->a[1]);
 if ((VAR_3 > 15) || (VAR_4 > 15) || (VAR_2 & VAR_0)) {
  return -1;
 }
 VAR_1->o |= VAR_3 << 4;
 VAR_1->o |= VAR_4 << 24;
 return 4;
}
