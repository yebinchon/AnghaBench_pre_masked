
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fid; } ;
struct TYPE_3__ {int fid; } ;
union msr_pstate {TYPE_2__ bits; TYPE_1__ fam17h_bits; } ;


 int FUNC_0 (int,union msr_pstate) ;

__attribute__((used)) static int FUNC_1(int VAR_0, union msr_pstate VAR_1)
{
 int VAR_2;
 int VAR_3, VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (VAR_0 == 0x17 || VAR_0 == 0x18) {
  VAR_3 = VAR_1.fam17h_bits.fid;
  VAR_5 = 200 * VAR_3 / VAR_4;
 } else {
  VAR_2 = 0x10;
  VAR_3 = VAR_1.bits.fid;
  if (VAR_0 == 0x11)
   VAR_2 = 0x8;
  VAR_5 = (100 * (VAR_3 + VAR_2)) >> VAR_4;
 }
 return VAR_5;
}
