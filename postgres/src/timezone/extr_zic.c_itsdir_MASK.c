
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (size_t) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,size_t) ;
 scalar_t__ FUNC_4 (char const*,struct stat*) ;
 int FUNC_5 (char*,char*) ;
 size_t FUNC_6 (char const*) ;

__attribute__((used)) static bool
FUNC_7(char const *VAR_2)
{
 struct stat VAR_3;
 int VAR_4 = FUNC_4(VAR_2, &VAR_3);




 if (VAR_4 == 0 || VAR_1 == VAR_0)
 {
  size_t VAR_5 = FUNC_6(VAR_2);
  char *VAR_6 = FUNC_1(VAR_5 + 3);
  bool VAR_7;

  FUNC_3(VAR_6, VAR_2, VAR_5);
  FUNC_5(&VAR_6[VAR_5], &"/."[!(VAR_5 && VAR_2[VAR_5 - 1] != '/')]);
  VAR_7 = FUNC_4(VAR_6, &VAR_3) == 0 || VAR_1 == VAR_0;
  FUNC_2(VAR_6);
  return VAR_7;
 }
 return 0;
}
