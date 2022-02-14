
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int ut32 ;
typedef int st8 ;
struct TYPE_3__ {int o; int * a; } ;
typedef TYPE_1__ ArmOpcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static st8 FUNC_2(ArmOpcode *VAR_3, ut64 VAR_4, bool VAR_5) {
 ut8 VAR_6 = FUNC_0 (VAR_3->a[0]);
 ut8 VAR_7 = FUNC_0 (VAR_3->a[1]);
 ut8 VAR_8 = FUNC_0 (VAR_3->a[2]);
 if ((VAR_6 > 15) || (VAR_7 > 15) || (VAR_8 > 15) || (VAR_4 & VAR_0)) {
  return -1;
 }
 VAR_3->o |= VAR_6;
 VAR_3->o |= VAR_7 << 24;
 VAR_3->o |= VAR_8 << 8;
 if (VAR_5) {
  VAR_2 = 0;
  ut32 VAR_9 = FUNC_1 (VAR_3->a[3]);
  if (VAR_2) {
   return -1;
  }
  VAR_3->o |= VAR_9;
 }
 if (VAR_4 & VAR_1) {
  VAR_3->o |= 1 << 28;
 }
 return 4;
}
