
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int path ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int VAR_6 ;
 int FUNC_2 (char*,char*,...) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,char*,char const*,char const*) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(const char *VAR_7, const char *VAR_8)
{
 char VAR_9[VAR_1];
 struct stat VAR_10;

 FUNC_4(VAR_9, sizeof(VAR_9), "%s/%s", VAR_7, VAR_8);
 if (FUNC_5(VAR_9, &VAR_10) < 0)
  FUNC_2("check for \"%s\" failed: %s\n",
     VAR_9, FUNC_6(VAR_6));
 else if (!FUNC_0(VAR_10.st_mode))
  FUNC_2("check for \"%s\" failed: not a regular file\n",
     VAR_9);






 if (FUNC_1(VAR_9, VAR_2) != 0)



  FUNC_2("check for \"%s\" failed: cannot read file (permission denied)\n",
     VAR_9);


 if (FUNC_1(VAR_9, VAR_5) != 0)



  FUNC_2("check for \"%s\" failed: cannot execute (permission denied)\n",
     VAR_9);
}
