
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static uint64_t FUNC_1(uint64_t VAR_18, uint64_t VAR_19)
{

 if (VAR_18 & FUNC_0(VAR_11)) {
  if (VAR_18 & FUNC_0(VAR_8))
   VAR_18 ^= FUNC_0(VAR_8) | FUNC_0(VAR_12);
  if (VAR_18 & FUNC_0(VAR_0))
   VAR_18 ^= FUNC_0(VAR_0) | FUNC_0(VAR_14);
  if (VAR_18 & FUNC_0(VAR_1))
   VAR_18 ^= FUNC_0(VAR_1) | FUNC_0(VAR_13);
 }


 if ((VAR_18 & (FUNC_0(VAR_10) | FUNC_0(VAR_17))) == FUNC_0(VAR_10))
  VAR_18 ^= FUNC_0(VAR_10) | FUNC_0(VAR_9);

 if (VAR_19 & VAR_6)
  VAR_18 |= FUNC_0(VAR_15);
 if (VAR_19 & VAR_4)
  VAR_18 |= FUNC_0(VAR_2);
 if (VAR_19 & VAR_7)
  VAR_18 |= FUNC_0(VAR_16);
 if (VAR_19 & VAR_5)
  VAR_18 |= FUNC_0(VAR_3);

 return VAR_18;
}
