
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

__attribute__((used)) static st8 FUNC_1(ArmOpcode *VAR_1, ut64 VAR_2) {
 ut8 VAR_3 = FUNC_0 (VAR_1->a[0]);
 ut8 VAR_4 = FUNC_0 (VAR_1->a[1]);
 if ( (VAR_3 < 8) && (VAR_4 < 8) && !(VAR_2 & VAR_0)) {
  VAR_1->o |= VAR_3 << 8;
  VAR_1->o |= VAR_4 << 11;
  return 2;
 }
 return 0;
}
