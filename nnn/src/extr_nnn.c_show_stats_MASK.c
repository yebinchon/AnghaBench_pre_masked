
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,char*) ;
 int FUNC_6 (int *,char*,...) ;
 char* VAR_5 ;
 int VAR_6 ;
 char* FUNC_7 (char*,int ,char*,char*,char const*,int) ;
 int VAR_7 ;
 int FUNC_8 (char*,int *) ;
 int FUNC_9 (int ,int ,int *,int *,int ) ;
 int FUNC_10 (int ) ;
 size_t FUNC_11 (char*,char const*,int ) ;

__attribute__((used)) static bool FUNC_12(const char *VAR_8, const struct stat *VAR_9)
{
 int VAR_10;
 FILE *VAR_11;
 char *VAR_12, *VAR_13 = VAR_5;
 size_t VAR_14;

 VAR_10 = FUNC_3();
 if (VAR_10 == -1)
  return VAR_1;

 VAR_14 = FUNC_11(VAR_5, "stat \"", VAR_3);
 VAR_14 += FUNC_11(VAR_5 + VAR_14 - 1, VAR_8, VAR_3);
 VAR_5[VAR_14 - 2] = '\"';
 VAR_5[VAR_14 - 1] = '\0';
 FUNC_0(VAR_5);

 VAR_11 = FUNC_5(VAR_10, "w");
 if (!VAR_11) {
  FUNC_2(VAR_10);
  return VAR_1;
 }

 FUNC_8(VAR_5, VAR_11);

 if (FUNC_1(VAR_9->st_mode)) {

  VAR_12 = FUNC_7(VAR_5, VAR_0, "file", "-b", VAR_8, VAR_1);
  if (VAR_12) {
   FUNC_6(VAR_11, "\n\n ");
   while (*VAR_12) {
    if (*VAR_12 == ',') {
     *VAR_12 = '\0';
     FUNC_6(VAR_11, " %s\n", VAR_13);
     VAR_13 = VAR_12 + 1;
    }

    ++VAR_12;
   }
   FUNC_6(VAR_11, " %s", VAR_13);
  }
 }

 FUNC_6(VAR_11, "\n\n");
 FUNC_4(VAR_11);
 FUNC_2(VAR_10);

 FUNC_9(VAR_7, VAR_6, ((void*)0), ((void*)0), VAR_2);
 FUNC_10(VAR_6);
 return VAR_4;
}
