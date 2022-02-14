
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (char const*,struct stat*) ;

__attribute__((used)) static bool
FUNC_6(const char *VAR_4)
{
 struct stat VAR_5;

 FUNC_0(VAR_4 != ((void*)0));

 if (FUNC_5(VAR_4, &VAR_5) == 0)
  return FUNC_1(VAR_5.st_mode) ? 0 : 1;
 else if (!(VAR_3 == VAR_0 || VAR_3 == VAR_1))
  FUNC_2(VAR_2,
    (FUNC_3(),
     FUNC_4("could not access file \"%s\": %m", VAR_4)));

 return 0;
}
