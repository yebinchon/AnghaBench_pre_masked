
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char const* d_name; } ;
typedef int buf ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,int) ;
 int * FUNC_4 (char*) ;
 struct dirent* FUNC_5 (int *) ;
 int FUNC_6 (char*,int,char*,char const*) ;
 int FUNC_7 (char const*,char*,int) ;

int FUNC_8(const char *VAR_4)
{
 struct dirent *VAR_5;
 char VAR_6[VAR_3 + VAR_0];
 DIR *VAR_7;
 int VAR_8;

 FUNC_6(VAR_6, sizeof(VAR_6), "/sys/class/rc/%s", VAR_4);

 VAR_7 = FUNC_4(VAR_6);
 if (!VAR_7)
  FUNC_1("cannot open %s: %m\n", VAR_6);

 while ((VAR_5 = FUNC_5(VAR_7)) != ((void*)0)) {
  if (!FUNC_7(VAR_5->d_name, "lirc", 4)) {
   FUNC_6(VAR_6, sizeof(VAR_6), "/dev/%s", VAR_5->d_name);
   break;
  }
 }

 if (!VAR_5)
  FUNC_2("cannot find lirc device for %s\n", VAR_4);

 FUNC_0(VAR_7);

 VAR_8 = FUNC_3(VAR_6, VAR_2 | VAR_1);
 if (VAR_8 == -1)
  FUNC_1("cannot open: %s: %m\n", VAR_6);

 return VAR_8;
}
