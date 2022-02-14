
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int to_dir ;
typedef int from_dir ;
typedef int dir ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,char*,int ,int ,char*,...) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char const*,int) ;
 char* FUNC_10 (char*,char) ;

__attribute__((used)) static int FUNC_11(const char *VAR_4, bool VAR_5)
{
 char VAR_6[32], VAR_7[VAR_2];
 char VAR_8[VAR_1], VAR_9[VAR_1];
 char *VAR_10;

 FUNC_9(VAR_8, VAR_4, sizeof(VAR_8));

 VAR_10 = FUNC_10(VAR_8, '/');
 if (!VAR_10 || FUNC_8(VAR_10 + 1, "kcore"))
  return -1;
 *VAR_10 = '\0';

 if (FUNC_0(VAR_8, VAR_7) < 0)
  return -1;

 FUNC_7(VAR_9, sizeof(VAR_9), "%s/%s/%s",
    VAR_3, VAR_0, VAR_7);

 if (!VAR_5 &&
     !FUNC_2(VAR_8, VAR_9, sizeof(VAR_9))) {
  FUNC_5("same kcore found in %s\n", VAR_9);
  return 0;
 }

 if (FUNC_1(VAR_6, sizeof(VAR_6)))
  return -1;

 FUNC_7(VAR_9, sizeof(VAR_9), "%s/%s/%s/%s",
    VAR_3, VAR_0, VAR_7, VAR_6);

 if (FUNC_4(VAR_9, 0755))
  return -1;

 if (FUNC_3(VAR_8, VAR_9)) {

  if (!FUNC_6(VAR_9)) {
   VAR_10 = FUNC_10(VAR_9, '/');
   if (VAR_10)
    *VAR_10 = '\0';

   if (!FUNC_6(VAR_9)) {
    VAR_10 = FUNC_10(VAR_9, '/');
    if (VAR_10)
     *VAR_10 = '\0';

    FUNC_6(VAR_9);
   }
  }
  return -1;
 }

 FUNC_5("kcore added to build-id cache directory %s\n", VAR_9);

 return 0;
}
