
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct gsw_mt753x {int dummy; } ;
typedef int ktime_t ;


 int VAR_0 ;
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
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct gsw_mt753x*,int ) ;
 int FUNC_4 (struct gsw_mt753x*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct gsw_mt753x *VAR_15, int VAR_16, int VAR_17, u16 VAR_18,
    u32 VAR_19, u32 VAR_20)
{
 ktime_t VAR_21;
 u32 VAR_22, VAR_23;
 int VAR_24 = 0;

 VAR_23 = 100000;
 VAR_21 = FUNC_0(FUNC_2(), VAR_23);
 while (1) {
  VAR_22 = FUNC_3(VAR_15, VAR_14);

  if ((VAR_22 & VAR_13) == 0)
   break;

  if (FUNC_1(FUNC_2(), VAR_21) > 0)
   return -VAR_0;
 }

 VAR_22 = (VAR_20 << VAR_12) |
       ((VAR_19 << VAR_5) & VAR_2) |
       ((VAR_16 << VAR_8) & VAR_7) |
       ((VAR_17 << VAR_10) & VAR_9);

 if (VAR_19 == VAR_6 || VAR_19 == VAR_1)
  VAR_22 |= VAR_18 & VAR_11;

 FUNC_4(VAR_15, VAR_14, VAR_22 | VAR_13);

 VAR_23 = 100000;
 VAR_21 = FUNC_0(FUNC_2(), VAR_23);
 while (1) {
  VAR_22 = FUNC_3(VAR_15, VAR_14);

  if ((VAR_22 & VAR_13) == 0)
   break;

  if (FUNC_1(FUNC_2(), VAR_21) > 0)
   return -VAR_0;
 }

 if (VAR_19 == VAR_3 || VAR_19 == VAR_4) {
  VAR_22 = FUNC_3(VAR_15, VAR_14);
  VAR_24 = VAR_22 & VAR_11;
 }

 return VAR_24;
}
