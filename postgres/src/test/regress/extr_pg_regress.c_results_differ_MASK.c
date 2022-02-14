
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int expectfile ;
typedef int diff ;
typedef int cmd ;
typedef int best_expect_file ;
typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,char*,char*,...) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,int) ;
 char* FUNC_9 (char const*,char const*) ;
 char* VAR_4 ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,int,char*,char const*,...) ;
 int VAR_5 ;
 int FUNC_12 (char*,char const*) ;
 char* FUNC_13 (int ) ;
 int FUNC_14 (char*,char const*,int) ;
 char* FUNC_15 (char*,char) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static bool
FUNC_17(const char *VAR_6, const char *VAR_7, const char *VAR_8)
{
 char VAR_9[VAR_0];
 char VAR_10[VAR_0];
 char VAR_11[VAR_0 * 3];
 char VAR_12[VAR_0];
 FILE *VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 const char *VAR_17;





 VAR_17 = FUNC_9(VAR_6, VAR_7);

 FUNC_14(VAR_9, VAR_8, sizeof(VAR_9));
 if (VAR_17)
 {




  char *VAR_18 = FUNC_15(VAR_9, '/');

  if (VAR_18)
   FUNC_12(++VAR_18, VAR_17);
 }


 FUNC_11(VAR_10, sizeof(VAR_10), "%s.diff", VAR_7);


 FUNC_11(VAR_11, sizeof(VAR_11),
    "diff %s \"%s\" \"%s\" > \"%s\"",
    VAR_1, VAR_9, VAR_7, VAR_10);


 if (FUNC_10(VAR_11, VAR_10) == 0)
 {
  FUNC_16(VAR_10);
  return 0;
 }


 VAR_14 = FUNC_4(VAR_10);
 FUNC_12(VAR_12, VAR_9);

 for (VAR_15 = 0; VAR_15 <= 9; VAR_15++)
 {
  char *VAR_19;

  VAR_19 = FUNC_8(VAR_9, VAR_15);
  if (!VAR_19)
  {
   FUNC_6(&VAR_5, FUNC_0("Unable to check secondary comparison files: %s\n"),
     FUNC_13(VAR_3));
   FUNC_1(2);
  }

  if (!FUNC_3(VAR_19))
  {
   FUNC_7(VAR_19);
   continue;
  }

  FUNC_11(VAR_11, sizeof(VAR_11),
     "diff %s \"%s\" \"%s\" > \"%s\"",
     VAR_1, VAR_19, VAR_7, VAR_10);

  if (FUNC_10(VAR_11, VAR_10) == 0)
  {
   FUNC_16(VAR_10);
   FUNC_7(VAR_19);
   return 0;
  }

  VAR_16 = FUNC_4(VAR_10);
  if (VAR_16 < VAR_14)
  {

   VAR_14 = VAR_16;
   FUNC_14(VAR_12, VAR_19, sizeof(VAR_12));
  }
  FUNC_7(VAR_19);
 }






 if (VAR_17)
 {
  FUNC_11(VAR_11, sizeof(VAR_11),
     "diff %s \"%s\" \"%s\" > \"%s\"",
     VAR_1, VAR_8, VAR_7, VAR_10);

  if (FUNC_10(VAR_11, VAR_10) == 0)
  {

   FUNC_16(VAR_10);
   return 0;
  }

  VAR_16 = FUNC_4(VAR_10);
  if (VAR_16 < VAR_14)
  {

   VAR_14 = VAR_16;
   FUNC_14(VAR_12, VAR_8, sizeof(VAR_12));
  }
 }







 VAR_13 = FUNC_5(VAR_2, "a");
 if (VAR_13)
 {
  FUNC_6(VAR_13,
    "diff %s %s %s\n",
    VAR_4, VAR_12, VAR_7);
  FUNC_2(VAR_13);
 }


 FUNC_11(VAR_11, sizeof(VAR_11),
    "diff %s \"%s\" \"%s\" >> \"%s\"",
    VAR_4, VAR_12, VAR_7, VAR_2);
 FUNC_10(VAR_11, VAR_2);

 FUNC_16(VAR_10);
 return 1;
}
