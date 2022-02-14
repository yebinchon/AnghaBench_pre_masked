
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pg_time_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int * VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int *) ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* FUNC_3 (int ,char*) ;
 int * FUNC_4 (char*,char*,int) ;
 int VAR_11 ;
 int FUNC_5 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int * VAR_14 ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;

__attribute__((used)) static void
FUNC_10(bool VAR_15, int VAR_16)
{
 char *VAR_17;
 char *VAR_18 = ((void*)0);
 pg_time_t VAR_19;
 FILE *VAR_20;

 VAR_13 = 0;






 if (VAR_15)
  VAR_19 = VAR_11;
 else
  VAR_19 = FUNC_8(((void*)0));
 VAR_17 = FUNC_3(VAR_19, ((void*)0));
 if (VAR_5 & VAR_3)
  VAR_18 = FUNC_3(VAR_19, ".csv");
 if (VAR_15 || (VAR_16 & VAR_4))
 {
  if (VAR_6 && VAR_15 &&
   VAR_10 != ((void*)0) &&
   FUNC_7(VAR_17, VAR_10) != 0)
   VAR_20 = FUNC_4(VAR_17, "w", 1);
  else
   VAR_20 = FUNC_4(VAR_17, "a", 1);

  if (!VAR_20)
  {






   if (VAR_8 != VAR_1 && VAR_8 != VAR_0)
   {
    FUNC_0(VAR_2,
      (FUNC_1("disabling automatic rotation (use SIGHUP to re-enable)")));
    VAR_12 = 1;
   }

   if (VAR_17)
    FUNC_5(VAR_17);
   if (VAR_18)
    FUNC_5(VAR_18);
   return;
  }

  FUNC_2(VAR_14);
  VAR_14 = VAR_20;


  if (VAR_10 != ((void*)0))
   FUNC_5(VAR_10);
  VAR_10 = VAR_17;
  VAR_17 = ((void*)0);
 }
 if ((VAR_5 & VAR_3) &&
  (VAR_7 == ((void*)0) ||
   VAR_15 || (VAR_16 & VAR_3)))
 {
  if (VAR_6 && VAR_15 &&
   VAR_9 != ((void*)0) &&
   FUNC_7(VAR_18, VAR_9) != 0)
   VAR_20 = FUNC_4(VAR_18, "w", 1);
  else
   VAR_20 = FUNC_4(VAR_18, "a", 1);

  if (!VAR_20)
  {






   if (VAR_8 != VAR_1 && VAR_8 != VAR_0)
   {
    FUNC_0(VAR_2,
      (FUNC_1("disabling automatic rotation (use SIGHUP to re-enable)")));
    VAR_12 = 1;
   }

   if (VAR_17)
    FUNC_5(VAR_17);
   if (VAR_18)
    FUNC_5(VAR_18);
   return;
  }

  if (VAR_7 != ((void*)0))
   FUNC_2(VAR_7);
  VAR_7 = VAR_20;


  if (VAR_9 != ((void*)0))
   FUNC_5(VAR_9);
  VAR_9 = VAR_18;
  VAR_18 = ((void*)0);
 }
 else if (!(VAR_5 & VAR_3) &&
    VAR_7 != ((void*)0))
 {

  FUNC_2(VAR_7);
  VAR_7 = ((void*)0);
  if (VAR_9 != ((void*)0))
   FUNC_5(VAR_9);
  VAR_9 = ((void*)0);
 }

 if (VAR_17)
  FUNC_5(VAR_17);
 if (VAR_18)
  FUNC_5(VAR_18);

 FUNC_9();

 FUNC_6();
}
