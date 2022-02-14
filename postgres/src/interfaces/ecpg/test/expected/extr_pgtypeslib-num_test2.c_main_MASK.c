
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int numeric ;
typedef int decimal ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (scalar_t__,char**) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int,int *) ;
 int FUNC_11 (long,int *) ;
 int FUNC_12 (int *,int *,int *) ;
 int * FUNC_13 () ;
 int FUNC_14 (int *,int *,int *) ;
 char* FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,double*) ;
 int FUNC_18 (int *,int*) ;
 int FUNC_19 (int *,long*) ;
 scalar_t__ FUNC_20 (int,int) ;
 int FUNC_21 () ;
 int FUNC_22 (int **) ;
 scalar_t__* VAR_0 ;
 int FUNC_23 (double) ;
 int FUNC_24 (char*,...) ;
 int ** FUNC_25 (int **,int) ;
 int VAR_1 ;

int
FUNC_26(void)
{
 char *VAR_2="error\n";
 char *VAR_3;
 numeric *VAR_4, *VAR_5;
 decimal *VAR_6;
 long VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 = 0;
 double VAR_14;
 numeric **VAR_15 = (numeric **) FUNC_20(1, sizeof(numeric));

 FUNC_0(1, VAR_1);

 for (VAR_8 = 0; VAR_0[VAR_8]; VAR_8++)
 {
  VAR_4 = FUNC_8(VAR_0[VAR_8], &VAR_3);
  if (!VAR_4) FUNC_21();
  if (VAR_3 != ((void*)0))
  {
   FUNC_24("endptr of %d is not NULL\n", VAR_8);
   if (*VAR_3 != '\0')
    FUNC_24("*endptr of %d is not \\0\n", VAR_8);
  }
  if (!VAR_4) continue;

  VAR_15 = FUNC_25(VAR_15, sizeof(numeric *) * (VAR_13 + 1));
  VAR_15[VAR_13++] = VAR_4;

  VAR_2 = FUNC_15(VAR_4, -1);
  if (!VAR_2) FUNC_21();
  FUNC_24("num[%d,1]: %s\n", VAR_8, VAR_2); FUNC_1(VAR_2);
  VAR_2 = FUNC_15(VAR_4, 0);
  if (!VAR_2) FUNC_21();
  FUNC_24("num[%d,2]: %s\n", VAR_8, VAR_2); FUNC_1(VAR_2);
  VAR_2 = FUNC_15(VAR_4, 1);
  if (!VAR_2) FUNC_21();
  FUNC_24("num[%d,3]: %s\n", VAR_8, VAR_2); FUNC_1(VAR_2);
  VAR_2 = FUNC_15(VAR_4, 2);
  if (!VAR_2) FUNC_21();
  FUNC_24("num[%d,4]: %s\n", VAR_8, VAR_2); FUNC_1(VAR_2);

  VAR_5 = FUNC_13();
  VAR_2 = FUNC_15(VAR_5, 2);
  if (!VAR_2) FUNC_21();
  FUNC_24("num[%d,5]: %s\n", VAR_8, VAR_2); FUNC_1(VAR_2);

  VAR_12 = FUNC_19(VAR_4, &VAR_7);
  if (VAR_12) FUNC_21();
  FUNC_24("num[%d,6]: %ld (r: %d)\n", VAR_8, VAR_12?0L:VAR_7, VAR_12);
  if (VAR_12 == 0)
  {
   VAR_12 = FUNC_11(VAR_7, VAR_5);
   if (VAR_12) FUNC_21();
   VAR_2 = FUNC_15(VAR_5, 2);
   VAR_11 = FUNC_5(VAR_4, VAR_5);
   FUNC_24("num[%d,7]: %s (r: %d - cmp: %d)\n", VAR_8, VAR_2, VAR_12, VAR_11);
   FUNC_1(VAR_2);
  }

  VAR_12 = FUNC_18(VAR_4, &VAR_10);
  if (VAR_12) FUNC_21();
  FUNC_24("num[%d,8]: %d (r: %d)\n", VAR_8, VAR_12?0:VAR_10, VAR_12);
  if (VAR_12 == 0)
  {
   VAR_12 = FUNC_10(VAR_10, VAR_5);
   if (VAR_12) FUNC_21();
   VAR_2 = FUNC_15(VAR_5, 2);
   VAR_11 = FUNC_5(VAR_4, VAR_5);
   FUNC_24("num[%d,9]: %s (r: %d - cmp: %d)\n", VAR_8, VAR_2, VAR_12, VAR_11);
   FUNC_1(VAR_2);
  }

  if (VAR_8 != 6)
  {



   VAR_12 = FUNC_17(VAR_4, &VAR_14);
   if (VAR_12) FUNC_21();
   FUNC_24("num[%d,10]: ", VAR_8);
   FUNC_23(VAR_12 ? 0.0 : VAR_14);
   FUNC_24(" (r: %d)\n", VAR_12);
  }






  VAR_6 = FUNC_3();
  VAR_12 = FUNC_16(VAR_4, VAR_6);
  if (VAR_12) FUNC_21();


  FUNC_24("num[%d,11]: - (r: %d)\n", VAR_8, VAR_12);
  if (VAR_12 == 0)
  {
   VAR_12 = FUNC_9(VAR_6, VAR_5);
   if (VAR_12) FUNC_21();
   VAR_2 = FUNC_15(VAR_5, 2);
   VAR_11 = FUNC_5(VAR_4, VAR_5);
   FUNC_24("num[%d,12]: %s (r: %d - cmp: %d)\n", VAR_8, VAR_2, VAR_12, VAR_11);
   FUNC_1(VAR_2);
  }

  FUNC_2(VAR_6);
  FUNC_7(VAR_5);
  FUNC_24("\n");
 }

 for (VAR_8 = 0; VAR_8 < VAR_13; VAR_8++)
 {
  for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9++)
  {
   numeric* VAR_16 = FUNC_13();
   numeric* VAR_17 = FUNC_13();
   numeric* VAR_18 = FUNC_13();
   numeric* VAR_19 = FUNC_13();
   VAR_12 = FUNC_4(VAR_15[VAR_8], VAR_15[VAR_9], VAR_16);
   if (VAR_12)
   {
    FUNC_21();
    FUNC_24("r: %d\n", VAR_12);
   }
   else
   {
    VAR_2 = FUNC_15(VAR_16, 10);
    FUNC_24("num[a,%d,%d]: %s\n", VAR_8, VAR_9, VAR_2);
    FUNC_1(VAR_2);
   }
   VAR_12 = FUNC_14(VAR_15[VAR_8], VAR_15[VAR_9], VAR_17);
   if (VAR_12)
   {
    FUNC_21();
    FUNC_24("r: %d\n", VAR_12);
   }
   else
   {
    VAR_2 = FUNC_15(VAR_17, 10);
    FUNC_24("num[s,%d,%d]: %s\n", VAR_8, VAR_9, VAR_2);
    FUNC_1(VAR_2);
   }
   VAR_12 = FUNC_12(VAR_15[VAR_8], VAR_15[VAR_9], VAR_18);
   if (VAR_12)
   {
    FUNC_21();
    FUNC_24("r: %d\n", VAR_12);
   }
   else
   {
    VAR_2 = FUNC_15(VAR_18, 10);
    FUNC_24("num[m,%d,%d]: %s\n", VAR_8, VAR_9, VAR_2);
    FUNC_1(VAR_2);
   }
   VAR_12 = FUNC_6(VAR_15[VAR_8], VAR_15[VAR_9], VAR_19);
   if (VAR_12)
   {
    FUNC_21();
    FUNC_24("r: %d\n", VAR_12);
   }
   else
   {
    VAR_2 = FUNC_15(VAR_19, 10);
    FUNC_24("num[d,%d,%d]: %s\n", VAR_8, VAR_9, VAR_2);
    FUNC_1(VAR_2);
   }

   FUNC_7(VAR_16);
   FUNC_7(VAR_17);
   FUNC_7(VAR_18);
   FUNC_7(VAR_19);
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_13; VAR_8++)
 {
  VAR_2 = FUNC_15(VAR_15[VAR_8], -1);
  FUNC_24("%d: %s\n", VAR_8, VAR_2);
  FUNC_1(VAR_2);
  FUNC_7(VAR_15[VAR_8]);
 }
 FUNC_22(VAR_15);

 return 0;
}
