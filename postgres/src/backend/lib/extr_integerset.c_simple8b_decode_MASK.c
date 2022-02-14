
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_2__ {int num_ints; int bits_per_int; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int
FUNC_1(uint64 VAR_2, uint64 *VAR_3, uint64 VAR_4)
{
 int VAR_5 = (VAR_2 >> 60);
 int VAR_6 = VAR_1[VAR_5].num_ints;
 int VAR_7 = VAR_1[VAR_5].bits_per_int;
 uint64 VAR_8 = (FUNC_0(1) << VAR_7) - 1;
 uint64 VAR_9;

 if (VAR_2 == VAR_0)
  return 0;

 VAR_9 = VAR_4;
 for (int VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
 {
  uint64 VAR_11 = VAR_2 & VAR_8;

  VAR_9 += 1 + VAR_11;
  VAR_3[VAR_10] = VAR_9;
  VAR_2 >>= VAR_7;
 }
 return VAR_6;
}
