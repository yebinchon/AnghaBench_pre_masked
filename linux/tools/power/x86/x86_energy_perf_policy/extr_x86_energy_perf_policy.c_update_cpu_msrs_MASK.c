
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 int FUNC_0 (int,int ,unsigned long long*) ;
 int VAR_3 ;
 int FUNC_1 () ;
 unsigned long long VAR_4 ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int,int ,unsigned long long) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

int FUNC_5(int VAR_9)
{
 unsigned long long VAR_10;


 if (VAR_6) {
  FUNC_0(VAR_9, VAR_0, &VAR_10);
  FUNC_3(VAR_9, VAR_0, VAR_4);

  if (VAR_8)
   FUNC_2("cpu%d: ENERGY_PERF_BIAS old: %d new: %d\n",
    VAR_9, (unsigned int) VAR_10, (unsigned int) VAR_4);
 }

 if (VAR_7) {
  int VAR_11;

  FUNC_0(VAR_9, VAR_1, &VAR_10);

  VAR_11 = ((VAR_10 & VAR_2) != 0);

  if (VAR_5 == 1) {
   if (VAR_11) {
    VAR_10 &= ~VAR_2;
    FUNC_3(VAR_9, VAR_1, VAR_10);
    if (VAR_8)
     FUNC_2("cpu%d: turbo ENABLE\n", VAR_9);
   }
  } else {





   VAR_10 |= VAR_2;
   FUNC_3(VAR_9, VAR_1, VAR_10);
   if (VAR_8)
    FUNC_2("cpu%d: turbo DISABLE\n", VAR_9);
  }
 }

 if (!VAR_3)
  return 0;

 if (!FUNC_1())
  return 0;

 FUNC_4(VAR_9);
 return 0;
}
