
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int ,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int ,int) ;
 int VAR_7 ;
 int FUNC_5 (int,int ,char*) ;
 int FUNC_6 (int ,char*,int,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_8 ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(void)
{
 unsigned long VAR_9, VAR_10, VAR_11;
 int VAR_12 = -1, VAR_13 = -1, VAR_14, VAR_15 = 0, VAR_16 = 0;

 if (!VAR_6)
  VAR_13 = FUNC_7();
 if (!VAR_5)
  VAR_12 = FUNC_8();

 VAR_14 = FUNC_0();

 VAR_11 = FUNC_9();
 VAR_10 = VAR_11 + 1000;
 VAR_9 = VAR_11 + (VAR_4 * 1000);

 while (1) {
  if (!VAR_5)
   VAR_15 += FUNC_4(VAR_12, VAR_1, VAR_14);

  if (!VAR_6)
   VAR_16 += FUNC_3(VAR_13);

  if (VAR_4) {
   VAR_11 = FUNC_9();
   if (VAR_11 >= VAR_9)
    break;
   if (VAR_11 >= VAR_10) {
    FUNC_6(VAR_8, "pkts: tx=%u rx=%u\n", VAR_15, VAR_16);
    VAR_15 = 0;
    VAR_16 = 0;
    VAR_10 = VAR_11 + 1000;
   }
  } else {
   if (VAR_15 == VAR_3)
    break;
  }
 }


 if (VAR_16 < VAR_15) {
  VAR_9 = FUNC_9() + 100;
  while (VAR_16 < VAR_15) {
   VAR_11 = FUNC_9();
   if (VAR_11 >= VAR_9)
    break;

   FUNC_2(VAR_13, VAR_0, VAR_9 - VAR_11);
   VAR_16 += FUNC_3(VAR_13);
  }
 }

 FUNC_6(VAR_8, "pkts: tx=%u rx=%u\n", VAR_15, VAR_16);

 if (VAR_13 != -1 && FUNC_1(VAR_13))
  FUNC_5(1, VAR_7, "close rx");
 if (VAR_12 != -1 && FUNC_1(VAR_12))
  FUNC_5(1, VAR_7, "close tx");





 if (VAR_2)
  return VAR_16 != 0;
 else
  return VAR_16 != VAR_15;
}
