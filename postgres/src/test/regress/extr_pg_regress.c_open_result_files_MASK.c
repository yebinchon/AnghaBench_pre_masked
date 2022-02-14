
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int file ;
typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 char* VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,char*,char*,char*) ;
 void* VAR_3 ;
 char* VAR_4 ;
 int FUNC_6 (char*) ;
 char* VAR_5 ;
 char* FUNC_7 (char*) ;
 char* VAR_6 ;
 int FUNC_8 (char*,int,char*,char*) ;
 int VAR_7 ;
 char* FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(void)
{
 char VAR_8[VAR_0];
 FILE *VAR_9;


 if (!FUNC_1(VAR_5))
  FUNC_6(VAR_5);


 FUNC_8(VAR_8, sizeof(VAR_8), "%s/regression.out", VAR_5);
 VAR_4 = FUNC_7(VAR_8);
 VAR_3 = FUNC_4(VAR_4, "w");
 if (!VAR_3)
 {
  FUNC_5(VAR_7, FUNC_0("%s: could not open file \"%s\" for writing: %s\n"),
    VAR_6, VAR_4, FUNC_9(VAR_2));
  FUNC_2(2);
 }


 FUNC_8(VAR_8, sizeof(VAR_8), "%s/regression.diffs", VAR_5);
 VAR_1 = FUNC_7(VAR_8);
 VAR_9 = FUNC_4(VAR_1, "w");
 if (!VAR_9)
 {
  FUNC_5(VAR_7, FUNC_0("%s: could not open file \"%s\" for writing: %s\n"),
    VAR_6, VAR_1, FUNC_9(VAR_2));
  FUNC_2(2);
 }

 FUNC_3(VAR_9);


 FUNC_8(VAR_8, sizeof(VAR_8), "%s/results", VAR_5);
 if (!FUNC_1(VAR_8))
  FUNC_6(VAR_8);
}
