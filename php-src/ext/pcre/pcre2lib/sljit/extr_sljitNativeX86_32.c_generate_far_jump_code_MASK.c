
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ target; } ;
struct sljit_jump {int flags; scalar_t__ addr; TYPE_1__ u; } ;
typedef scalar_t__ sljit_uw ;
typedef int sljit_u8 ;
typedef scalar_t__ sljit_sw ;
typedef scalar_t__ sljit_s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static sljit_u8* FUNC_2(struct sljit_jump *VAR_7, sljit_u8 *VAR_8, sljit_s32 VAR_9, sljit_sw VAR_10)
{
 if (VAR_9 == VAR_6) {
  *VAR_8++ = VAR_2;
  VAR_7->addr++;
 }
 else if (VAR_9 >= VAR_5) {
  *VAR_8++ = VAR_0;
  VAR_7->addr++;
 }
 else {
  *VAR_8++ = VAR_1;
  *VAR_8++ = FUNC_0(VAR_9);
  VAR_7->addr += 2;
 }

 if (VAR_7->flags & VAR_3)
  VAR_7->flags |= VAR_4;
 else
  FUNC_1(VAR_8, VAR_7->u.target - (VAR_7->addr + 4) - (sljit_uw)VAR_10);
 VAR_8 += 4;

 return VAR_8;
}
