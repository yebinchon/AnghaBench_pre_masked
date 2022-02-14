
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int,int ,int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(char **VAR_4, bool *VAR_5)
{
 FILE *VAR_6;
 char *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_0);
 if (!VAR_7) {
  FUNC_5("Error allocating memory");
  return VAR_1;
 }

 VAR_6 = FUNC_1(VAR_3, "r");
 if (!VAR_6) {
  FUNC_5("Error opening core_pattern file");
  VAR_8 = VAR_1;
  goto out;
 }

 VAR_8 = FUNC_2(VAR_7, 1, VAR_0, VAR_6);
 FUNC_0(VAR_6);
 if (!VAR_8) {
  FUNC_5("Error reading core_pattern file");
  VAR_8 = VAR_1;
  goto out;
 }


 if (!FUNC_6(VAR_7, "core") || !FUNC_6(VAR_7, "core.%p"))
  *VAR_5 = 0;
 else {
  VAR_8 = FUNC_7("core-pkey.%p");
  if (VAR_8)
   goto out;

  *VAR_5 = 1;
 }

 *VAR_4 = VAR_7;
 VAR_8 = VAR_2;

 out:
 if (VAR_8)
  FUNC_3(VAR_7);

 return VAR_8;
}
