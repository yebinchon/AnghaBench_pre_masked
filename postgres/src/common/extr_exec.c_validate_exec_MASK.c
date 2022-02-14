
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int path_exe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,struct stat*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_5)
{
 struct stat VAR_6;
 int VAR_7;
 int VAR_8;
 if (FUNC_3(VAR_5, &VAR_6) < 0)
  return -1;

 if (!FUNC_0(VAR_6.st_mode))
  return -1;






 VAR_7 = (FUNC_1(VAR_5, VAR_1) == 0);
 VAR_8 = (FUNC_1(VAR_5, VAR_4) == 0);




 return VAR_8 ? (VAR_7 ? 0 : -2) : -1;
}
