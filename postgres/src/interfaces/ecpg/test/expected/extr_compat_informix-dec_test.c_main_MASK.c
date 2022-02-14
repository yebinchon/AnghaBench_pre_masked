
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int decimal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (scalar_t__,int ,int *) ;
 int FUNC_8 (int,int *) ;
 int FUNC_9 (long,int *) ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (int *,int *,int *) ;
 scalar_t__* VAR_2 ;
 int FUNC_12 (int *,int *,int *) ;
 int FUNC_13 (int *,char*,int,int) ;
 int FUNC_14 (int *,double*) ;
 int FUNC_15 (int *,int*) ;
 int FUNC_16 (int *,long*) ;
 int FUNC_17 (int **) ;
 int FUNC_18 (double) ;
 int FUNC_19 (char*,...) ;
 int ** FUNC_20 (int **,int) ;
 scalar_t__ FUNC_21 (int ,char*) ;
 int FUNC_22 (int ,char*) ;
 int VAR_3 ;
 int FUNC_23 (scalar_t__) ;

int
FUNC_24(void)
{
 decimal *VAR_4, *VAR_5;
 char VAR_6[VAR_0];
 long VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 = 0;
 double VAR_14;
 decimal **VAR_15 = (decimal **) FUNC_3(1, sizeof(decimal));

 FUNC_0(1, VAR_3);

 for (VAR_8 = 0; VAR_2[VAR_8]; VAR_8++)
 {
  VAR_4 = FUNC_2();
  VAR_12 = FUNC_7(VAR_2[VAR_8], FUNC_23(VAR_2[VAR_8]), VAR_4);
  if (VAR_12)
  {
   FUNC_4();
   FUNC_19("dec[%d,0]: r: %d\n", VAR_8, VAR_12);
   FUNC_1(VAR_4);
   continue;
  }
  VAR_15 = FUNC_20(VAR_15, sizeof(decimal *) * (VAR_13 + 1));
  VAR_15[VAR_13++] = VAR_4;

  VAR_12 = FUNC_13(VAR_4, VAR_6, VAR_0-1, -1);
  if (VAR_12 < 0) FUNC_4();
  FUNC_19("dec[%d,1]: r: %d, %s\n", VAR_8, VAR_12, VAR_6);

  VAR_12 = FUNC_13(VAR_4, VAR_6, VAR_0-1, 0);
  if (VAR_12 < 0) FUNC_4();
  FUNC_19("dec[%d,2]: r: %d, %s\n", VAR_8, VAR_12, VAR_6);
  VAR_12 = FUNC_13(VAR_4, VAR_6, VAR_0-1, 1);
  if (VAR_12 < 0) FUNC_4();
  FUNC_19("dec[%d,3]: r: %d, %s\n", VAR_8, VAR_12, VAR_6);
  VAR_12 = FUNC_13(VAR_4, VAR_6, VAR_0-1, 2);
  if (VAR_12 < 0) FUNC_4();
  FUNC_19("dec[%d,4]: r: %d, %s\n", VAR_8, VAR_12, VAR_6);

  VAR_5 = FUNC_2();
  VAR_12 = FUNC_13(VAR_5, VAR_6, VAR_0-1, 2);
  if (VAR_12 < 0) FUNC_4();
  FUNC_19("dec[%d,5]: r: %d, %s\n", VAR_8, VAR_12, VAR_6);

  VAR_12 = FUNC_16(VAR_4, &VAR_7);
  if (VAR_12) FUNC_4();
  FUNC_19("dec[%d,6]: %ld (r: %d)\n", VAR_8, VAR_12?0L:VAR_7, VAR_12);
  if (VAR_12 == 0)
  {
   VAR_12 = FUNC_9(VAR_7, VAR_5);
   if (VAR_12) FUNC_4();
   FUNC_13(VAR_5, VAR_6, VAR_0-1, 2);
   VAR_11 = FUNC_6(VAR_4, VAR_5);
   FUNC_19("dec[%d,7]: %s (r: %d - cmp: %d)\n", VAR_8, VAR_6, VAR_12, VAR_11);
  }

  VAR_12 = FUNC_15(VAR_4, &VAR_10);
  if (VAR_12) FUNC_4();
  FUNC_19("dec[%d,8]: %d (r: %d)\n", VAR_8, VAR_12?0:VAR_10, VAR_12);
  if (VAR_12 == 0)
  {
   VAR_12 = FUNC_8(VAR_10, VAR_5);
   if (VAR_12) FUNC_4();
   FUNC_13(VAR_5, VAR_6, VAR_0-1, 2);
   VAR_11 = FUNC_6(VAR_4, VAR_5);
   FUNC_19("dec[%d,9]: %s (r: %d - cmp: %d)\n", VAR_8, VAR_6, VAR_12, VAR_11);
  }

  if (VAR_8 != 6)
  {


   VAR_12 = FUNC_14(VAR_4, &VAR_14);
   if (VAR_12) FUNC_4();
   FUNC_19("dec[%d,10]: ", VAR_8);
   FUNC_18(VAR_12 ? 0.0 : VAR_14);
   FUNC_19(" (r: %d)\n", VAR_12);
  }

  FUNC_1(VAR_5);
  FUNC_19("\n");
 }


 VAR_4 = FUNC_2();
 VAR_15 = FUNC_20(VAR_15, sizeof(decimal *) * (VAR_13 + 1));
 VAR_15[VAR_13++] = VAR_4;

 FUNC_22(VAR_1, (char *) VAR_15[VAR_13-1]);
 FUNC_19("dec[%d]: %sNULL\n", VAR_13-1,
  FUNC_21(VAR_1, (char *) VAR_15[VAR_13-1]) ? "" : "NOT ");
 FUNC_19("dec[0]: %sNULL\n",
  FUNC_21(VAR_1, (char *) VAR_15[0]) ? "" : "NOT ");

 VAR_12 = FUNC_13(VAR_15[3], VAR_6, -1, -1);
 FUNC_4(); FUNC_19("dectoasc with len == -1: r: %d\n", VAR_12);
 VAR_12 = FUNC_13(VAR_15[3], VAR_6, 0, -1);
 FUNC_4(); FUNC_19("dectoasc with len == 0: r: %d\n", VAR_12);

 for (VAR_8 = 0; VAR_8 < VAR_13; VAR_8++)
 {
  for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9++)
  {
   decimal VAR_16, VAR_17, VAR_18, VAR_19;
   int VAR_20;
   VAR_20 = FUNC_6(VAR_15[VAR_8], VAR_15[VAR_9]);
   FUNC_19("dec[c,%d,%d]: %d\n", VAR_8, VAR_9, VAR_20);

   VAR_12 = FUNC_5(VAR_15[VAR_8], VAR_15[VAR_9], &VAR_16);
   if (VAR_12)
   {
    FUNC_4();
    FUNC_19("r: %d\n", VAR_12);
   }
   else
   {
    FUNC_13(&VAR_16, VAR_6, VAR_0-1, -1);
    FUNC_19("dec[a,%d,%d]: %s\n", VAR_8, VAR_9, VAR_6);
   }

   VAR_12 = FUNC_12(VAR_15[VAR_8], VAR_15[VAR_9], &VAR_17);
   if (VAR_12)
   {
    FUNC_4();
    FUNC_19("r: %d\n", VAR_12);
   }
   else
   {
    FUNC_13(&VAR_17, VAR_6, VAR_0-1, -1);
    FUNC_19("dec[s,%d,%d]: %s\n", VAR_8, VAR_9, VAR_6);
   }

   VAR_12 = FUNC_11(VAR_15[VAR_8], VAR_15[VAR_9], &VAR_18);
   if (VAR_12)
   {
    FUNC_4();
    FUNC_19("r: %d\n", VAR_12);
   }
   else
   {
    FUNC_13(&VAR_18, VAR_6, VAR_0-1, -1);
    FUNC_19("dec[m,%d,%d]: %s\n", VAR_8, VAR_9, VAR_6);
   }

   VAR_12 = FUNC_10(VAR_15[VAR_8], VAR_15[VAR_9], &VAR_19);
   if (VAR_12)
   {
    FUNC_4();
    FUNC_19("r: %d\n", VAR_12);
   }
   else
   {
    FUNC_13(&VAR_19, VAR_6, VAR_0-1, -1);
    FUNC_19("dec[d,%d,%d]: %s\n", VAR_8, VAR_9, VAR_6);
   }
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_13; VAR_8++)
 {
  FUNC_13(VAR_15[VAR_8], VAR_6, VAR_0-1, -1);
  FUNC_19("%d: %s\n", VAR_8, VAR_6);

  FUNC_1(VAR_15[VAR_8]);
 }
 FUNC_17(VAR_15);

 return 0;
}
