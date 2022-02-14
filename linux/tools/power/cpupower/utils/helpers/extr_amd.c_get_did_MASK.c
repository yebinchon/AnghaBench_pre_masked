
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int did; } ;
struct TYPE_3__ {int did; } ;
union msr_pstate {int val; TYPE_2__ bits; TYPE_1__ fam17h_bits; } ;



__attribute__((used)) static int FUNC_0(int VAR_0, union msr_pstate VAR_1)
{
 int VAR_2;

 if (VAR_0 == 0x12)
  VAR_2 = VAR_1.val & 0xf;
 else if (VAR_0 == 0x17 || VAR_0 == 0x18)
  VAR_2 = VAR_1.fam17h_bits.did;
 else
  VAR_2 = VAR_1.bits.did;

 return VAR_2;
}
