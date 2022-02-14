
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int passbuf ;
struct TYPE_10__ {char* savedPassword; scalar_t__ promptPassword; int connection; } ;
struct TYPE_9__ {char* data; } ;
typedef TYPE_1__ PQExpBufferData ;
typedef int PGconn ;
typedef TYPE_2__ ArchiveHandle ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (char const**,char const**,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int *) ;
 scalar_t__ FUNC_10 (int *) ;
 char* FUNC_11 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_1__*,char const*) ;
 int FUNC_14 (TYPE_1__*,char*) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_19 (char*,char const*,char const*) ;
 char* FUNC_20 (int ) ;
 char* VAR_4 ;
 int FUNC_21 (char*,char*,int,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_22 (char const*) ;
 int FUNC_23 (TYPE_1__*) ;

__attribute__((used)) static PGconn *
FUNC_24(ArchiveHandle *VAR_6, const char *VAR_7, const char *VAR_8)
{
 PQExpBufferData VAR_9;
 PGconn *VAR_10;
 const char *VAR_11;
 const char *VAR_12;
 char *VAR_13;
 char VAR_14[100];
 bool VAR_15;

 if (!VAR_7)
  VAR_11 = FUNC_3(VAR_6->connection);
 else
  VAR_11 = VAR_7;

 if (!VAR_8 || FUNC_22(VAR_8) == 0)
  VAR_12 = FUNC_11(VAR_6->connection);
 else
  VAR_12 = VAR_8;

 FUNC_19("connecting to database \"%s\" as user \"%s\"",
    VAR_11, VAR_12);

 VAR_13 = VAR_6->savedPassword;

 if (VAR_6->promptPassword == VAR_2 && VAR_13 == ((void*)0))
 {
  FUNC_21("Password: ", VAR_14, sizeof(VAR_14), 0);
  VAR_13 = VAR_14;
 }

 FUNC_18(&VAR_9);
 FUNC_14(&VAR_9, "dbname=");
 FUNC_13(&VAR_9, VAR_11);

 do
 {
  const char *VAR_16[7];
  const char *VAR_17[7];

  VAR_16[0] = "host";
  VAR_17[0] = FUNC_6(VAR_6->connection);
  VAR_16[1] = "port";
  VAR_17[1] = FUNC_8(VAR_6->connection);
  VAR_16[2] = "user";
  VAR_17[2] = VAR_12;
  VAR_16[3] = "password";
  VAR_17[3] = VAR_13;
  VAR_16[4] = "dbname";
  VAR_17[4] = VAR_9.data;
  VAR_16[5] = "fallback_application_name";
  VAR_17[5] = VAR_4;
  VAR_16[6] = ((void*)0);
  VAR_17[6] = ((void*)0);

  VAR_15 = 0;
  VAR_10 = FUNC_0(VAR_16, VAR_17, 1);

  if (!VAR_10)
   FUNC_15("could not reconnect to database");

  if (FUNC_10(VAR_10) == VAR_0)
  {
   if (!FUNC_1(VAR_10))
    FUNC_15("could not reconnect to database: %s",
       FUNC_4(VAR_10));
   FUNC_5(VAR_10);

   if (VAR_13)
    FUNC_16(VAR_5, "Password incorrect\n");

   FUNC_16(VAR_5, "Connecting to %s as %s\n",
     VAR_11, VAR_12);

   if (VAR_6->promptPassword != VAR_1)
   {
    FUNC_21("Password: ", VAR_14, sizeof(VAR_14), 0);
    VAR_13 = VAR_14;
   }
   else
    FUNC_15("connection needs password");

   VAR_15 = 1;
  }
 } while (VAR_15);





 if (FUNC_2(VAR_10))
 {
  if (VAR_6->savedPassword)
   FUNC_17(VAR_6->savedPassword);
  VAR_6->savedPassword = FUNC_20(FUNC_7(VAR_10));
 }

 FUNC_23(&VAR_9);


 FUNC_12(VAR_6);

 FUNC_9(VAR_10, VAR_3, ((void*)0));

 return VAR_10;
}
