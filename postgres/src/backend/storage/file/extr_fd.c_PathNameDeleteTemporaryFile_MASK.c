
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char const*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (char const*,struct stat*) ;
 scalar_t__ FUNC_5 (char const*) ;

bool
FUNC_6(const char *VAR_4, bool VAR_5)
{
 struct stat VAR_6;
 int VAR_7;


 if (FUNC_4(VAR_4, &VAR_6) != 0)
  VAR_7 = VAR_3;
 else
  VAR_7 = 0;






 if (VAR_7 == VAR_0)
  return 0;

 if (FUNC_5(VAR_4) < 0)
 {
  if (VAR_3 != VAR_0)
   FUNC_1(VAR_5 ? VAR_1 : VAR_2,
     (FUNC_2(),
      FUNC_3("could not unlink temporary file \"%s\": %m",
       VAR_4)));
  return 0;
 }

 if (VAR_7 == 0)
  FUNC_0(VAR_4, VAR_6.st_size);
 else
 {
  VAR_3 = VAR_7;
  FUNC_1(VAR_2,
    (FUNC_2(),
     FUNC_3("could not stat file \"%s\": %m", VAR_4)));
 }

 return 1;
}
