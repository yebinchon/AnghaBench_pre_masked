
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int en; } ;
struct TYPE_3__ {int en; } ;
union msr_pstate {unsigned long long val; TYPE_2__ bits; TYPE_1__ fam17h_bits; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int,int) ;
 unsigned long FUNC_1 (unsigned int,union msr_pstate) ;
 scalar_t__ FUNC_2 (unsigned int,scalar_t__,unsigned long long*) ;
 int VAR_4 ;

int FUNC_3(unsigned int VAR_5, unsigned int VAR_6,
     int VAR_7, unsigned long *VAR_8, int *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 union msr_pstate VAR_13;
 unsigned long long VAR_14;





 if (VAR_6 < 0x10 || VAR_6 == 0x14)
  return -1;

 if (FUNC_2(VAR_5, VAR_2, &VAR_14))
  return -1;

 VAR_11 = (VAR_14 >> 4) & 0x7;

 if (FUNC_2(VAR_5, VAR_3, &VAR_14))
  return -1;

 VAR_12 = VAR_14 & 0x7;

 VAR_12 += VAR_7;
 VAR_11 += VAR_7;
 for (VAR_10 = 0; VAR_10 <= VAR_11; VAR_10++) {
  if (VAR_10 >= VAR_0) {
   FUNC_0(VAR_4, "HW pstates [%d] exceeding max [%d]\n",
    VAR_11, VAR_0);
   return -1;
  }
  if (FUNC_2(VAR_5, VAR_1 + VAR_10, &VAR_13.val))
   return -1;
  if ((VAR_6 == 0x17) && (!VAR_13.fam17h_bits.en))
   continue;
  else if (!VAR_13.bits.en)
   continue;

  VAR_8[VAR_10] = FUNC_1(VAR_6, VAR_13);
 }
 *VAR_9 = VAR_10;
 return 0;
}
