
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ,...) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int *,char*,char*) ;
 char* VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int *,int ,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(void)
{
 FILE *VAR_13;
 mode_t VAR_14;

 if (!(VAR_6 & VAR_3) &&
  !(VAR_6 & VAR_2))
 {
  if (FUNC_11(VAR_4) < 0 && VAR_9 != VAR_0)
   FUNC_2(VAR_1,
     (FUNC_3(),
      FUNC_4("could not remove file \"%s\": %m",
       VAR_4)));
  return;
 }


 VAR_14 = FUNC_10(VAR_12);
 VAR_13 = FUNC_6(VAR_5, "w");
 FUNC_10(VAR_14);

 if (VAR_13)
 {
  FUNC_9(VAR_13, ((void*)0), VAR_7, 0);





 }
 else
 {
  FUNC_2(VAR_1,
    (FUNC_3(),
     FUNC_4("could not open file \"%s\": %m",
      VAR_5)));
  return;
 }

 if (VAR_11 && (VAR_6 & VAR_3))
 {
  if (FUNC_7(VAR_13, "stderr %s\n", VAR_11) < 0)
  {
   FUNC_2(VAR_1,
     (FUNC_3(),
      FUNC_4("could not write file \"%s\": %m",
       VAR_5)));
   FUNC_5(VAR_13);
   return;
  }
 }

 if (VAR_10 && (VAR_6 & VAR_2))
 {
  if (FUNC_7(VAR_13, "csvlog %s\n", VAR_10) < 0)
  {
   FUNC_2(VAR_1,
     (FUNC_3(),
      FUNC_4("could not write file \"%s\": %m",
       VAR_5)));
   FUNC_5(VAR_13);
   return;
  }
 }
 FUNC_5(VAR_13);

 if (FUNC_8(VAR_5, VAR_4) != 0)
  FUNC_2(VAR_1,
    (FUNC_3(),
     FUNC_4("could not rename file \"%s\" to \"%s\": %m",
      VAR_5, VAR_4)));
}
