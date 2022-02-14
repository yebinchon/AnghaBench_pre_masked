
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ trivalue ;
typedef int passbuf ;
struct TYPE_4__ {char* savedPassword; scalar_t__ connection; scalar_t__ promptPassword; } ;
typedef TYPE_1__ ArchiveHandle ;
typedef int Archive ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const**,char const**,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,int ,int *) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*) ;
 int VAR_4 ;
 char* FUNC_14 (int ) ;
 char* VAR_5 ;
 int FUNC_15 (TYPE_1__*,scalar_t__) ;
 int FUNC_16 (char*,char*,int,int) ;

void
FUNC_17(Archive *VAR_6,
    const char *VAR_7,
    const char *VAR_8,
    const char *VAR_9,
    const char *VAR_10,
    trivalue VAR_11)
{
 ArchiveHandle *VAR_12 = (ArchiveHandle *) VAR_6;
 char *VAR_13;
 char VAR_14[100];
 bool VAR_15;

 if (VAR_12->connection)
  FUNC_12("already connected to a database");

 VAR_13 = VAR_12->savedPassword;

 if (VAR_11 == VAR_3 && VAR_13 == ((void*)0))
 {
  FUNC_16("Password: ", VAR_14, sizeof(VAR_14), 0);
  VAR_13 = VAR_14;
 }
 VAR_12->promptPassword = VAR_11;





 do
 {
  const char *VAR_16[7];
  const char *VAR_17[7];

  VAR_16[0] = "host";
  VAR_17[0] = VAR_8;
  VAR_16[1] = "port";
  VAR_17[1] = VAR_9;
  VAR_16[2] = "user";
  VAR_17[2] = VAR_10;
  VAR_16[3] = "password";
  VAR_17[3] = VAR_13;
  VAR_16[4] = "dbname";
  VAR_17[4] = VAR_7;
  VAR_16[5] = "fallback_application_name";
  VAR_17[5] = VAR_5;
  VAR_16[6] = ((void*)0);
  VAR_17[6] = ((void*)0);

  VAR_15 = 0;
  VAR_12->connection = FUNC_2(VAR_16, VAR_17, 1);

  if (!VAR_12->connection)
   FUNC_12("could not connect to database");

  if (FUNC_10(VAR_12->connection) == VAR_1 &&
   FUNC_3(VAR_12->connection) &&
   VAR_13 == ((void*)0) &&
   VAR_11 != VAR_2)
  {
   FUNC_7(VAR_12->connection);
   FUNC_16("Password: ", VAR_14, sizeof(VAR_14), 0);
   VAR_13 = VAR_14;
   VAR_15 = 1;
  }
 } while (VAR_15);


 if (FUNC_10(VAR_12->connection) == VAR_1)
  FUNC_12("connection to database \"%s\" failed: %s",
     FUNC_5(VAR_12->connection) ? FUNC_5(VAR_12->connection) : "",
     FUNC_6(VAR_12->connection));


 FUNC_1(FUNC_0((Archive *) VAR_12,
          VAR_0));





 if (FUNC_4(VAR_12->connection))
 {
  if (VAR_12->savedPassword)
   FUNC_13(VAR_12->savedPassword);
  VAR_12->savedPassword = FUNC_14(FUNC_8(VAR_12->connection));
 }


 FUNC_11(VAR_12);

 FUNC_9(VAR_12->connection, VAR_4, ((void*)0));


 FUNC_15(VAR_12, VAR_12->connection);
}
