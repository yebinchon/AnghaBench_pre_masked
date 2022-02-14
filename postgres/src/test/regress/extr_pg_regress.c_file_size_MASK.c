
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,char*,char const*,char*) ;
 int FUNC_4 (int *,int ,int ) ;
 long FUNC_5 (int *) ;
 char* VAR_2 ;
 int VAR_3 ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static long
FUNC_7(const char *VAR_4)
{
 long VAR_5;
 FILE *VAR_6 = FUNC_2(VAR_4, "r");

 if (!VAR_6)
 {
  FUNC_3(VAR_3, FUNC_0("%s: could not open file \"%s\" for reading: %s\n"),
    VAR_2, VAR_4, FUNC_6(VAR_1));
  return -1;
 }
 FUNC_4(VAR_6, 0, VAR_0);
 VAR_5 = FUNC_5(VAR_6);
 FUNC_1(VAR_6);
 return VAR_5;
}
