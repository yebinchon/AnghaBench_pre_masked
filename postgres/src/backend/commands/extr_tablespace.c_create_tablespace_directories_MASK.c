
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int Oid ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char const*) ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (char*) ;
 int VAR_9 ;
 char* FUNC_9 (char*,char const*,...) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int) ;
 scalar_t__ FUNC_12 (char*,struct stat*) ;
 scalar_t__ FUNC_13 (char const*,char*) ;

__attribute__((used)) static void
FUNC_14(const char *VAR_10, const Oid VAR_11)
{
 char *VAR_12;
 char *VAR_13;
 struct stat VAR_14;

 VAR_12 = FUNC_9("pg_tblspc/%u", VAR_11);
 VAR_13 = FUNC_9("%s/%s", VAR_10,
           VAR_6);





 if (FUNC_2(VAR_10, VAR_9) != 0)
 {
  if (VAR_8 == VAR_1)
   FUNC_3(VAR_4,
     (FUNC_4(VAR_3),
      FUNC_7("directory \"%s\" does not exist", VAR_10),
      VAR_5 ? FUNC_6("Create this directory for the tablespace before "
            "restarting the server.") : 0));
  else
   FUNC_3(VAR_4,
     (FUNC_5(),
      FUNC_7("could not set permissions on directory \"%s\": %m",
       VAR_10)));
 }

 if (VAR_5)
 {





  if (FUNC_12(VAR_13, &VAR_14) == 0 && FUNC_1(VAR_14.st_mode))
  {
   if (!FUNC_11(VAR_13, 1))

    FUNC_3(VAR_7,
      (FUNC_7("some useless files may be left behind in old database directory \"%s\"",
        VAR_13)));
  }
 }





 if (FUNC_0(VAR_13) < 0)
 {
  if (VAR_8 == VAR_0)
   FUNC_3(VAR_4,
     (FUNC_4(VAR_2),
      FUNC_7("directory \"%s\" already in use as a tablespace",
       VAR_13)));
  else
   FUNC_3(VAR_4,
     (FUNC_5(),
      FUNC_7("could not create directory \"%s\": %m",
       VAR_13)));
 }




 if (VAR_5)
  FUNC_10(VAR_12);




 if (FUNC_13(VAR_10, VAR_12) < 0)
  FUNC_3(VAR_4,
    (FUNC_5(),
     FUNC_7("could not create symbolic link \"%s\": %m",
      VAR_12)));

 FUNC_8(VAR_12);
 FUNC_8(VAR_13);
}
