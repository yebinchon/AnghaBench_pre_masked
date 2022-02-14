
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int target; TYPE_1__* label; } ;
struct sljit_jump {int flags; int addr; TYPE_2__ u; } ;
typedef int sljit_uw ;
typedef int sljit_u8 ;
typedef int sljit_sw ;
typedef int sljit_s8 ;
typedef scalar_t__ sljit_s32 ;
struct TYPE_3__ {int size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int * FUNC_0 (struct sljit_jump*,int *,scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;

__attribute__((used)) static sljit_u8* FUNC_2(struct sljit_jump *VAR_11, sljit_u8 *VAR_12, sljit_u8 *VAR_13, sljit_s32 VAR_14, sljit_sw VAR_15)
{
 sljit_s32 VAR_16;
 sljit_uw VAR_17;

 if (VAR_11->flags & VAR_6)
  VAR_17 = (sljit_uw)(VAR_13 + VAR_11->u.label->size);
 else
  VAR_17 = VAR_11->u.target - VAR_15;

 VAR_16 = (sljit_sw)(VAR_17 - (VAR_11->addr + 2)) >= -128 && (sljit_sw)(VAR_17 - (VAR_11->addr + 2)) <= 127;






 if (VAR_14 == VAR_10) {
  if (VAR_16)
   *VAR_12++ = VAR_5;
  else
   *VAR_12++ = VAR_4;
  VAR_11->addr++;
 }
 else if (VAR_14 >= VAR_9) {
  VAR_16 = 0;
  *VAR_12++ = VAR_0;
  VAR_11->addr++;
 }
 else if (VAR_16) {
  *VAR_12++ = FUNC_1(VAR_14) - 0x10;
  VAR_11->addr++;
 }
 else {
  *VAR_12++ = VAR_1;
  *VAR_12++ = FUNC_1(VAR_14);
  VAR_11->addr += 2;
 }

 if (VAR_16) {
  VAR_11->flags |= VAR_7;
  VAR_12 += sizeof(sljit_s8);
 } else {
  VAR_11->flags |= VAR_8;
  VAR_12 += sizeof(sljit_s32);
 }

 return VAR_12;
}
