
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (int,char*,int ,int,int) ;
 int VAR_4 ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int *,int ) ;
 char* VAR_5 ;
 int FUNC_5 (char*,char,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*) ;
 char* FUNC_11 (int) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static int FUNC_13(int VAR_6, const char *VAR_7, int VAR_8)
{
 int VAR_9 = 0;
 int VAR_10, VAR_11, VAR_12;
 char VAR_13[VAR_3 + 1];
 int VAR_14;

 if (*VAR_5 == '\0') {

  char *VAR_15 = FUNC_4(((void*)0), 0);

  if (!VAR_15) {
   FUNC_8("Failed to getcwd(), errno=%d (%s)\n",
          VAR_4, FUNC_11(VAR_4));
   return 2;
  }
  FUNC_10(VAR_5, VAR_15);
  FUNC_9(VAR_5, "/");
  FUNC_5(VAR_13, 'x', VAR_3 - 1);
  VAR_13[VAR_3 - 1] = '/';
  VAR_13[VAR_3] = '\0';
  VAR_11 = (VAR_2 - 3 - FUNC_12(VAR_15)) / VAR_3;
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
   FUNC_9(VAR_5, VAR_13);
   FUNC_6(VAR_5, 0755);
  }
  VAR_12 = (VAR_2 - 3 - FUNC_12(VAR_15)) - (VAR_11 * VAR_3);
  if (VAR_12 <= 0)
   VAR_12 = 1;
  FUNC_5(VAR_13, 'y', VAR_12);
  VAR_13[VAR_12] = '\0';
  FUNC_9(VAR_5, VAR_13);
  FUNC_3(VAR_15);
 }
 FUNC_2(VAR_7, VAR_5);






 VAR_14 = FUNC_7(VAR_5, VAR_1);
 if (VAR_14 > 0) {
  FUNC_8("Invoke copy of '%s' via filename of length %zu:\n",
   VAR_7, FUNC_12(VAR_5));
  VAR_9 += FUNC_0(VAR_14, "", VAR_0);
 } else {
  FUNC_8("Failed to open length %zu filename, errno=%d (%s)\n",
   FUNC_12(VAR_5), VAR_4, FUNC_11(VAR_4));
  VAR_9++;
 }
 if (VAR_8)
  VAR_9 += FUNC_1(VAR_6, VAR_5 + 1, 0,
        127, 126);
 else
  VAR_9 += FUNC_0(VAR_6, VAR_5 + 1, 0);

 return VAR_9;
}
