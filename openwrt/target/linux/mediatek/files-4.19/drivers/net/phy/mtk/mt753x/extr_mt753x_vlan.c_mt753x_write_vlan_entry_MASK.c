
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct gsw_mt753x {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct gsw_mt753x*,int ,int) ;
 int FUNC_3 (struct gsw_mt753x*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct gsw_mt753x *VAR_11, int VAR_12, u16 VAR_13,
        u8 VAR_14, u8 VAR_15)
{
 int VAR_16;
 u32 VAR_17;


 if (VAR_14)
  FUNC_2(VAR_11, VAR_6,
     VAR_2 | VAR_9 | VAR_8 |
     ((VAR_14 << VAR_5) & VAR_4));
 else
  FUNC_2(VAR_11, VAR_6, 0);


 VAR_17 = 0;
 for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
  if (VAR_15 & FUNC_0(VAR_16))
   VAR_17 |= VAR_0 << FUNC_1(VAR_16);
  else
   VAR_17 |= VAR_1 << FUNC_1(VAR_16);
 }
 FUNC_2(VAR_11, VAR_7, VAR_17);


 FUNC_3(VAR_11, VAR_10, VAR_13);
}
