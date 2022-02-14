
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; scalar_t__ st_uid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_10 () ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_11 (int ,struct stat*) ;
 int FUNC_12 (int ) ;

void
FUNC_13(void)
{
 struct stat VAR_9;

 FUNC_0(VAR_0);

 if (FUNC_11(VAR_0, &VAR_9) != 0)
 {
  if (VAR_6 == VAR_1)
   FUNC_4(VAR_3,
     (FUNC_6(),
      FUNC_9("data directory \"%s\" does not exist",
       VAR_0)));
  else
   FUNC_4(VAR_3,
     (FUNC_6(),
      FUNC_9("could not read permissions of directory \"%s\": %m",
       VAR_0)));
 }


 if (!FUNC_1(VAR_9.st_mode))
  FUNC_4(VAR_3,
    (FUNC_5(VAR_2),
     FUNC_9("specified data directory \"%s\" is not a directory",
      VAR_0)));
 if (VAR_9.st_uid != FUNC_10())
  FUNC_4(VAR_3,
    (FUNC_5(VAR_2),
     FUNC_9("data directory \"%s\" has wrong ownership",
      VAR_0),
     FUNC_8("The server must be started by the user that owns the data directory.")));
 if (VAR_9.st_mode & VAR_4)
  FUNC_4(VAR_3,
    (FUNC_5(VAR_2),
     FUNC_9("data directory \"%s\" has invalid permissions",
      VAR_0),
     FUNC_7("Permissions should be u=rwx (0700) or u=rwx,g=rx (0750).")));
 FUNC_2(VAR_9.st_mode);

 FUNC_12(VAR_8);
 VAR_5 = VAR_7;



 FUNC_3(VAR_0);
}
