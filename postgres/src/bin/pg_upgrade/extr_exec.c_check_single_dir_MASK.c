
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int subDirName ;
struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (char*,int,char*,char const*,char*,char const*) ;
 scalar_t__ FUNC_3 (char*,struct stat*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_3, const char *VAR_4)
{
 struct stat VAR_5;
 char VAR_6[VAR_0];

 FUNC_2(VAR_6, sizeof(VAR_6), "%s%s%s", VAR_3,

    *VAR_4 ? "/" : "",
    VAR_4);

 if (FUNC_3(VAR_6, &VAR_5) != 0)
  FUNC_1(VAR_1, "check for \"%s\" failed: %s\n",
       VAR_6, FUNC_4(VAR_2));
 else if (!FUNC_0(VAR_5.st_mode))
  FUNC_1(VAR_1, "\"%s\" is not a directory\n",
       VAR_6);
}
