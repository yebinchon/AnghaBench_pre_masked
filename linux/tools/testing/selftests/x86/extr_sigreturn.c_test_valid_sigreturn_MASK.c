
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selectors {int ss; int cs; } ;
typedef int greg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int* VAR_10 ;
 int* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_3(int VAR_14, bool VAR_15, int VAR_16)
{
 int VAR_17 = FUNC_0(VAR_14);
 if (VAR_17 == -1) {
  FUNC_1("[SKIP]\tCode segment unavailable for %d-bit CS, %d-bit SS\n",
         VAR_14, VAR_15 ? 16 : 32);
  return 0;
 }

 if (VAR_16 != -1) {
  VAR_13 = VAR_16;
 } else {
  if (VAR_15) {
   if (!VAR_8) {
    FUNC_1("[SKIP]\tData segment unavailable for %d-bit CS, 16-bit SS\n",
           VAR_14);
    return 0;
   }
   VAR_13 = VAR_8;
  } else {
   asm volatile ("mov %%ss,%0" : "=r" (VAR_13));
  }
 }

 VAR_12 = VAR_17;

 FUNC_1("[RUN]\tValid sigreturn: %d-bit CS (%hx), %d-bit SS (%hx%s)\n",
        VAR_14, VAR_12, VAR_15 ? 16 : 32, VAR_13,
        (VAR_13 & 4) ? "" : ", GDT");

 FUNC_2(VAR_7);

 VAR_9 = 0;





 for (int VAR_18 = 0; VAR_18 < VAR_0; VAR_18++) {
  greg_t VAR_19 = VAR_10[VAR_18], VAR_20 = VAR_11[VAR_18];

  if (VAR_18 == VAR_5 || VAR_18 == VAR_3)
   continue;

  if (VAR_18 == VAR_4) {
   if (VAR_20 == VAR_19)
    continue;

   if (VAR_14 != 64 && ((VAR_20 ^ VAR_19) & 0xFFFFFFFF) == 0) {
    FUNC_1("[NOTE]\tSP: %llx -> %llx\n",
           (unsigned long long)VAR_19,
           (unsigned long long)VAR_20);
    continue;
   }

   FUNC_1("[FAIL]\tSP mismatch: requested 0x%llx; got 0x%llx\n",
          (unsigned long long)VAR_10[VAR_18],
          (unsigned long long)VAR_11[VAR_18]);
   VAR_9++;
   continue;
  }

  bool VAR_21 = 0;




  if (VAR_18 == VAR_1) {
   struct selectors *VAR_22 =
    (void *)&VAR_10[VAR_1];
   struct selectors *VAR_23 =
    (void *)&VAR_11[VAR_1];
   if (VAR_22->cs != VAR_23->cs) {
    FUNC_1("[FAIL]\tCS mismatch: requested 0x%hx; got 0x%hx\n",
           VAR_22->cs, VAR_23->cs);
    VAR_9++;
   }

   if (VAR_22->ss != VAR_23->ss) {
    FUNC_1("[FAIL]\tSS mismatch: requested 0x%hx; got 0x%hx\n",
           VAR_22->ss, VAR_23->ss);
    VAR_9++;
   }

   continue;
  }



  if (VAR_18 == VAR_2 && VAR_19 != VAR_20) {
   FUNC_1("[FAIL]\tCX (saved SP) mismatch: requested 0x%llx; got 0x%llx\n",
          (unsigned long long)VAR_19,
          (unsigned long long)VAR_20);
   VAR_9++;
   continue;
  }

  if (VAR_19 != VAR_20 && !VAR_21) {
   FUNC_1("[FAIL]\tReg %d mismatch: requested 0x%llx; got 0x%llx\n",
          VAR_18, (unsigned long long)VAR_19,
          (unsigned long long)VAR_20);
   VAR_9++;
  }
 }

 if (VAR_9 == 0)
  FUNC_1("[OK]\tall registers okay\n");

 return VAR_9;
}
