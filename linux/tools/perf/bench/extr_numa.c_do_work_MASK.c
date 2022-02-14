
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef long u32 ;
struct TYPE_3__ {long nr_loops; int data_backwards; scalar_t__ data_zero_memset; scalar_t__ data_rand_walk; } ;
struct TYPE_4__ {TYPE_1__ p; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,long) ;
 TYPE_2__* VAR_0 ;
 long FUNC_3 (long) ;
 long FUNC_4 (long,long) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static u64 FUNC_6(u8 *VAR_1, long VAR_2, int VAR_3, int VAR_4, int VAR_5, u64 VAR_6)
{
 long VAR_7 = VAR_2/sizeof(u64);
 u64 *VAR_8 = (void *)VAR_1;
 long VAR_9, VAR_10;
 u64 *VAR_11, *VAR_12, *VAR_13;
 long VAR_14;
 long VAR_15;

 FUNC_0(!VAR_8 && VAR_7);
 FUNC_0(VAR_8 && !VAR_7);

 if (!VAR_8)
  return VAR_6;


 if (VAR_0->p.data_zero_memset && !VAR_0->p.data_rand_walk) {
  FUNC_2(VAR_8, VAR_2);
  return VAR_6;
 }


 VAR_9 = VAR_7/VAR_4;
 VAR_10 = VAR_7/VAR_0->p.nr_loops;
 VAR_14 = VAR_3*VAR_9 + VAR_5*VAR_10;

 while (VAR_14 >= VAR_7)
  VAR_14 -= VAR_7;

 if (VAR_0->p.data_rand_walk) {
  u32 VAR_16 = VAR_3 + VAR_5 + VAR_6;
  int VAR_17;

  for (VAR_15 = 0; VAR_15 < VAR_7/1024; VAR_15++) {
   long VAR_18, VAR_19;

   VAR_16 = FUNC_3(VAR_16);

   VAR_18 = VAR_16 % VAR_7;
   VAR_19 = FUNC_4(VAR_18 + 1024, VAR_7-1);

   if (VAR_0->p.data_zero_memset) {
    FUNC_2(VAR_8 + VAR_18, (VAR_19-VAR_18) * sizeof(u64));
   } else {
    for (VAR_17 = VAR_18; VAR_17 < VAR_19; VAR_17++)
     VAR_6 = FUNC_1(VAR_8 + VAR_17, VAR_6);
   }
  }
 } else if (!VAR_0->p.data_backwards || (VAR_3 + VAR_5) & 1) {

  VAR_11 = VAR_8 + VAR_14;
  VAR_12 = VAR_8 + VAR_14 + 1;
  VAR_13 = VAR_8 + VAR_7;


  for (;;) {
   if (FUNC_5(VAR_12 >= VAR_13))
    VAR_12 = VAR_8;
   if (FUNC_5(VAR_12 == VAR_11))
    break;

   VAR_6 = FUNC_1(VAR_12, VAR_6);

   VAR_12++;
  }
 } else {


  VAR_11 = VAR_8 + VAR_14;
  VAR_12 = VAR_8 + VAR_14 - 1;
  VAR_13 = VAR_8 + VAR_7;


  for (;;) {
   if (FUNC_5(VAR_12 < VAR_8))
    VAR_12 = VAR_8 + VAR_7-1;
   if (FUNC_5(VAR_12 == VAR_11))
    break;

   VAR_6 = FUNC_1(VAR_12, VAR_6);

   VAR_12--;
  }
 }

 return VAR_6;
}
