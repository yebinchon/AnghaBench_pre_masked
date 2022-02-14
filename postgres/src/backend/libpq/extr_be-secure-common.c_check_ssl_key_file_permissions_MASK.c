
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; scalar_t__ st_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (char const*,struct stat*) ;

bool
FUNC_8(const char *VAR_7, bool VAR_8)
{
 int VAR_9 = VAR_8 ? VAR_1 : VAR_2;
 struct stat VAR_10;

 if (FUNC_7(VAR_7, &VAR_10) != 0)
 {
  FUNC_1(VAR_9,
    (FUNC_3(),
     FUNC_5("could not access private key file \"%s\": %m",
      VAR_7)));
  return 0;
 }

 if (!FUNC_0(VAR_10.st_mode))
 {
  FUNC_1(VAR_9,
    (FUNC_2(VAR_0),
     FUNC_5("private key file \"%s\" is not a regular file",
      VAR_7)));
  return 0;
 }







 if (VAR_10.st_uid != FUNC_6() && VAR_10.st_uid != 0)
 {
  FUNC_1(VAR_9,
    (FUNC_2(VAR_0),
     FUNC_5("private key file \"%s\" must be owned by the database user or root",
      VAR_7)));
  return 0;
 }
 if ((VAR_10.st_uid == FUNC_6() && VAR_10.st_mode & (VAR_3 | VAR_4)) ||
  (VAR_10.st_uid == 0 && VAR_10.st_mode & (VAR_5 | VAR_6 | VAR_4)))
 {
  FUNC_1(VAR_9,
    (FUNC_2(VAR_0),
     FUNC_5("private key file \"%s\" has group or world access",
      VAR_7),
     FUNC_4("File must have permissions u=rw (0600) or less if owned by the database user, or permissions u=rw,g=r (0640) or less if owned by root.")));
  return 0;
 }


 return 1;
}
