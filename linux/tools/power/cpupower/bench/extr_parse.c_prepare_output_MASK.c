
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {char const* nodename; char const* release; } ;
typedef int FILE ;
typedef int DIR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char const*,int) ;
 int * FUNC_7 (char const*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,int) ;
 int FUNC_10 (char*,int,char*,char const*,char const*,...) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (struct utsname*) ;

FILE *FUNC_14(const char *VAR_2)
{
 FILE *VAR_3 = ((void*)0);
 int VAR_4;
 char *VAR_5, *VAR_6;
 struct utsname VAR_7;
 DIR *VAR_8;

 VAR_8 = FUNC_7(VAR_2);
 if (VAR_8 == ((void*)0)) {
  if (FUNC_6(VAR_2, 0755)) {
   FUNC_8("mkdir");
   FUNC_3(VAR_0, "error: Cannot create dir %s\n",
    VAR_2);
   return ((void*)0);
  }
 }

 VAR_4 = FUNC_11(VAR_2) + 30;
 VAR_5 = FUNC_5(sizeof(char) * VAR_4);
 if (!VAR_5) {
  FUNC_8("malloc");
  goto out_dir;
 }

 if (FUNC_13(&VAR_7) == 0) {
  VAR_4 += FUNC_11(VAR_7.nodename) + FUNC_11(VAR_7.release);
  VAR_6 = FUNC_9(VAR_5, sizeof(*VAR_5) * VAR_4);

  if (VAR_6 == ((void*)0)) {
   FUNC_4(VAR_5);
   FUNC_8("realloc");
   goto out_dir;
  }

  VAR_5 = VAR_6;
  FUNC_10(VAR_5, VAR_4 - 1, "%s/benchmark_%s_%s_%li.log",
   VAR_2, VAR_7.nodename, VAR_7.release, FUNC_12(((void*)0)));
 } else {
  FUNC_10(VAR_5, VAR_4 - 1, "%s/benchmark_%li.log",
   VAR_2, FUNC_12(((void*)0)));
 }

 FUNC_1("logfilename: %s\n", VAR_5);

 VAR_3 = FUNC_2(VAR_5, "w+");
 if (VAR_3 == ((void*)0)) {
  FUNC_8("fopen");
  FUNC_3(VAR_0, "error: unable to open logfile\n");
  goto out;
 }

 FUNC_3(&VAR_1, "Logfile: %s\n", VAR_5);

 FUNC_3(VAR_3, "#round load sleep performance powersave percentage\n");
out:
 FUNC_4(VAR_5);
out_dir:
 FUNC_0(VAR_8);
 return VAR_3;
}
