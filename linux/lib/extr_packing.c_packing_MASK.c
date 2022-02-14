
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int*,int*,int*,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,size_t) ;

int FUNC_4(void *VAR_7, u64 *VAR_8, int VAR_9, int VAR_10, size_t VAR_11,
     enum packing_op VAR_12, u8 VAR_13)
{



 u64 VAR_14;



 int VAR_15, VAR_16, VAR_17;


 if (VAR_9 < VAR_10)

  return -VAR_0;

 VAR_14 = VAR_9 - VAR_10 + 1;
 if (VAR_14 > 64)
  return -VAR_1;





 if (VAR_12 == VAR_2 && VAR_14 < 64 && (*VAR_8 >= (1ull << VAR_14)))




  return -VAR_1;


 if (VAR_12 == VAR_6)
  *VAR_8 = 0;





 VAR_15 = VAR_9 / 8;
 VAR_16 = VAR_10 / 8;

 for (VAR_17 = VAR_15; VAR_17 >= VAR_16; VAR_17--) {

  int VAR_18, VAR_19, VAR_20;
  u8 VAR_21;

  int VAR_22, VAR_23;
  u64 VAR_24;





  if (VAR_17 == VAR_15)
   VAR_18 = VAR_9 % 8;
  else
   VAR_18 = 7;
  if (VAR_17 == VAR_16)
   VAR_19 = VAR_10 % 8;
  else
   VAR_19 = 0;
  VAR_22 = ((VAR_17 * 8) + VAR_18) - VAR_10;
  VAR_23 = ((VAR_17 * 8) + VAR_19) - VAR_10;
  VAR_24 = FUNC_0(VAR_22, VAR_23);
  VAR_21 = FUNC_0(VAR_18, VAR_19);






  VAR_20 = VAR_11 - VAR_17 - 1;
  if (VAR_13 & VAR_3)
   VAR_20 = FUNC_2(VAR_20);
  if (VAR_13 & VAR_4)
   VAR_20 = FUNC_3(VAR_20,
           VAR_11);

  if (VAR_12 == VAR_6) {
   u64 VAR_25;


   VAR_25 = ((u8 *)VAR_7)[VAR_20] & VAR_21;
   if (VAR_13 & VAR_5)
    FUNC_1(&VAR_25,
          &VAR_18,
          &VAR_19,
          &VAR_21);

   VAR_25 >>= VAR_19;
   VAR_25 <<= VAR_23;
   *VAR_8 &= ~VAR_24;
   *VAR_8 |= VAR_25;
  } else {
   u64 VAR_26;


   VAR_26 = (*VAR_8) & VAR_24;
   VAR_26 >>= VAR_23;
   if (VAR_13 & VAR_5)
    FUNC_1(&VAR_26,
          &VAR_18,
          &VAR_19,
          &VAR_21);

   VAR_26 <<= VAR_19;
   ((u8 *)VAR_7)[VAR_20] &= ~VAR_21;
   ((u8 *)VAR_7)[VAR_20] |= VAR_26;
  }
 }
 return 0;
}
