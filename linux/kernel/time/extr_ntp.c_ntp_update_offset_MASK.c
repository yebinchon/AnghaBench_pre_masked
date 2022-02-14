
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long s64 ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 () ;
 long FUNC_1 (long,int ,int ) ;
 int FUNC_2 (long,int ) ;
 long FUNC_3 (long,int ) ;
 long FUNC_4 (long,int ) ;
 long FUNC_5 (long,long) ;
 int VAR_10 ;
 long VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(long VAR_15)
{
 s64 VAR_16;
 s64 VAR_17;
 long VAR_18;

 if (!(VAR_14 & VAR_8))
  return;

 if (!(VAR_14 & VAR_7)) {

  VAR_15 = FUNC_1(VAR_15, -VAR_9, VAR_9);
  VAR_15 *= VAR_2;
 }





 VAR_15 = FUNC_1(VAR_15, -VAR_1, VAR_1);





 VAR_18 = (long)(FUNC_0() - VAR_13);
 if (FUNC_6(VAR_14 & VAR_6))
  VAR_18 = 0;

 VAR_13 = FUNC_0();

 VAR_17 = VAR_15;
 VAR_16 = FUNC_5(VAR_17, VAR_18);






 if (FUNC_6(VAR_18 > 1 << (VAR_5 + 1 + VAR_10)))
  VAR_18 = 1 << (VAR_5 + 1 + VAR_10);

 VAR_16 += (VAR_17 * VAR_18) <<
   (VAR_4 - 2 * (VAR_5 + 2 + VAR_10));

 VAR_16 = FUNC_4(VAR_16 + VAR_11, VAR_0);

 VAR_11 = FUNC_3(VAR_16, -VAR_0);

 VAR_12 = FUNC_2(VAR_17 << VAR_4, VAR_3);
}
