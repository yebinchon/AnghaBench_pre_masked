
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,char*,char*,char const*,char*) ;
 char* VAR_2 ;
 int VAR_3 ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;
 FILE *VAR_7 = FUNC_3(VAR_4, "r");

 if (!VAR_7)
 {
  FUNC_4(VAR_3, FUNC_0("%s: could not open file \"%s\" for reading: %s\n"),
    VAR_2, VAR_4, FUNC_5(VAR_1));
  return -1;
 }
 while ((VAR_5 = FUNC_2(VAR_7)) != VAR_0)
 {
  if (VAR_5 == '\n')
   VAR_6++;
 }
 FUNC_1(VAR_7);
 return VAR_6;
}
