
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options {char* hostname; char* port; char* username; char* dbname; char* progname; } ;
typedef int password ;
typedef int PGresult ;
typedef int PGconn ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const**,char const**,int) ;
 scalar_t__ FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,char*,...) ;
 int FUNC_10 (char*,char*,int,int) ;

PGconn *
FUNC_11(struct options *VAR_4)
{
 PGconn *VAR_5;
 bool VAR_6 = 0;
 char VAR_7[100];
 bool VAR_8;
 PGresult *VAR_9;





 do
 {


  const char *VAR_10[7];
  const char *VAR_11[7];

  VAR_10[0] = "host";
  VAR_11[0] = VAR_4->hostname;
  VAR_10[1] = "port";
  VAR_11[1] = VAR_4->port;
  VAR_10[2] = "user";
  VAR_11[2] = VAR_4->username;
  VAR_10[3] = "password";
  VAR_11[3] = VAR_6 ? VAR_7 : ((void*)0);
  VAR_10[4] = "dbname";
  VAR_11[4] = VAR_4->dbname;
  VAR_10[5] = "fallback_application_name";
  VAR_11[5] = VAR_4->progname;
  VAR_10[6] = ((void*)0);
  VAR_11[6] = ((void*)0);

  VAR_8 = 0;
  VAR_5 = FUNC_1(VAR_10, VAR_11, 1);

  if (!VAR_5)
  {
   FUNC_9("could not connect to database %s",
       VAR_4->dbname);
   FUNC_8(1);
  }

  if (FUNC_7(VAR_5) == VAR_1 &&
   FUNC_2(VAR_5) &&
   !VAR_6)
  {
   FUNC_5(VAR_5);
   FUNC_10("Password: ", VAR_7, sizeof(VAR_7), 0);
   VAR_6 = 1;
   VAR_8 = 1;
  }
 } while (VAR_8);


 if (FUNC_7(VAR_5) == VAR_1)
 {
  FUNC_9("could not connect to database %s: %s",
      VAR_4->dbname, FUNC_3(VAR_5));
  FUNC_5(VAR_5);
  FUNC_8(1);
 }

 VAR_9 = FUNC_4(VAR_5, VAR_0);
 if (FUNC_6(VAR_9) != VAR_3)
 {
  FUNC_9("could not clear search_path: %s",
      FUNC_3(VAR_5));
  FUNC_0(VAR_9);
  FUNC_5(VAR_5);
  FUNC_8(-1);
 }
 FUNC_0(VAR_9);


 return VAR_5;
}
