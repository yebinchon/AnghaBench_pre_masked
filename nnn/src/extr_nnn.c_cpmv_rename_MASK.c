
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int renamecmd ;
typedef int cmd ;
typedef int buf ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 char* VAR_6 ;
 int FUNC_3 () ;
 int VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 int FUNC_4 (int,char*,int) ;
 char* VAR_10 ;
 int FUNC_5 (char*,int ) ;
 int VAR_11 ;
 int FUNC_6 (int,int*) ;
 int FUNC_7 (char*,int,char const*,char const*,...) ;
 int FUNC_8 (int ,char*,int *,char const*,int ) ;
 int * VAR_12 ;

__attribute__((used)) static bool FUNC_9(int VAR_13, const char *VAR_14)
{
 int VAR_15;
 uint VAR_16 = 0, VAR_17 = 0;
 bool VAR_18 = VAR_0;
 char *VAR_19 = (VAR_13 == 'c' ? VAR_6 : VAR_10);
 static const char VAR_20[] = "sed -i 's|^\\(\\(.*/\\)\\(.*\\)$\\)|#\\1\\n\\3|' %s";
 static const char VAR_21[] = "sed 's|^\\([^#][^/]\\?.*\\)$|%s/\\1|;s|^#\\(/.*\\)$|\\1|' %s | tr '\\n' '\\0' | xargs -0 -o -n2 %s";
 char VAR_22[sizeof(VAR_21) + sizeof(VAR_19) + (VAR_3 << 1)];

 VAR_15 = FUNC_3();
 if (VAR_15 == -1)
  return VAR_18;


 if (!VAR_11) {
  FUNC_7(VAR_22, sizeof(VAR_22), "cat %s | tr '\\0' '\\n' > %s", VAR_8, VAR_9);
  FUNC_8(VAR_12[VAR_4], VAR_22, ((void*)0), ((void*)0), VAR_1);

  VAR_16 = FUNC_4(VAR_15, VAR_22, sizeof(VAR_22));
  if (!VAR_16)
   goto finish;
 } else
  FUNC_6(VAR_15, &VAR_16);

 FUNC_2(VAR_15);

 FUNC_7(VAR_22, sizeof(VAR_22), VAR_20, VAR_9);
 FUNC_8(VAR_12[VAR_4], VAR_22, ((void*)0), VAR_14, VAR_1);

 FUNC_8(VAR_7, VAR_9, ((void*)0), VAR_14, VAR_1);

 VAR_15 = FUNC_5(VAR_9, VAR_2);
 if (VAR_15 == -1)
  goto finish;

 VAR_17 = FUNC_4(VAR_15, VAR_22, sizeof(VAR_22));
 FUNC_1(VAR_16);
 FUNC_1(VAR_17);
 if (!VAR_17 || (2 * VAR_16 != VAR_17)) {
  FUNC_0("num mismatch");
  goto finish;
 }

 FUNC_7(VAR_22, sizeof(VAR_22), VAR_21, VAR_14, VAR_9, VAR_19);
 FUNC_8(VAR_12[VAR_4], VAR_22, ((void*)0), VAR_14, VAR_1);
 VAR_18 = VAR_5;

finish:
 if (VAR_15 >= 0)
  FUNC_2(VAR_15);

 return VAR_18;
}
