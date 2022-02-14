
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_mode; } ;
typedef int sebuf ;
typedef int homedir ;
typedef int fnbuf ;
typedef int X509_STORE ;
struct TYPE_5__ {char* sslcert; char* sslkey; char* sslrootcert; char* sslcrl; char* sslmode; int ssl_in_use; int ssl; int * sslcompression; int errorMessage; int * engine; int sock; } ;
typedef int SSL_CTX ;
typedef TYPE_1__ PGconn ;
typedef int EVP_PKEY ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,char*,int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,int *) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,TYPE_1__*) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (int ,int *) ;
 int FUNC_21 (int ,char*,int ) ;
 int FUNC_22 (char*) ;
 char* FUNC_23 (int ) ;
 int FUNC_24 () ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_25 (int) ;
 char* VAR_14 ;
 char* VAR_15 ;
 int FUNC_26 (int *,char*,int *) ;
 int FUNC_27 (int *,int) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_28 (char*) ;
 int FUNC_29 (char*) ;
 int FUNC_30 (TYPE_1__*,int ) ;
 int FUNC_31 (char*,int) ;
 int FUNC_32 (int *,int ,...) ;
 int FUNC_33 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_34 (char*,struct stat*) ;
 char* FUNC_35 (char*,char) ;
 char* FUNC_36 (char*) ;
 char* FUNC_37 (scalar_t__,char*,int) ;
 int FUNC_38 (char*,char*,int) ;
 scalar_t__ FUNC_39 (char*) ;
 int VAR_19 ;

__attribute__((used)) static int
FUNC_40(PGconn *VAR_20)
{
 SSL_CTX *VAR_21;
 struct stat VAR_22;
 char VAR_23[VAR_2];
 char VAR_24[VAR_2];
 char VAR_25[VAR_3];
 bool VAR_26;
 bool VAR_27;
 bool VAR_28;
 EVP_PKEY *VAR_29 = ((void*)0);






 if (!(VAR_20->sslcert && FUNC_39(VAR_20->sslcert) > 0) ||
  !(VAR_20->sslkey && FUNC_39(VAR_20->sslkey) > 0) ||
  !(VAR_20->sslrootcert && FUNC_39(VAR_20->sslrootcert) > 0) ||
  !(VAR_20->sslcrl && FUNC_39(VAR_20->sslcrl) > 0))
  VAR_26 = FUNC_31(VAR_23, sizeof(VAR_23));
 else
  VAR_26 = 0;
 VAR_21 = FUNC_10(FUNC_24());
 if (!VAR_21)
 {
  char *VAR_30 = FUNC_23(FUNC_6());

  FUNC_32(&VAR_20->errorMessage,
        FUNC_29("could not create SSL context: %s\n"),
        VAR_30);
  FUNC_22(VAR_30);
  return -1;
 }


 FUNC_12(VAR_21, VAR_9 | VAR_10);





 FUNC_11(VAR_21, VAR_7);






 if (VAR_20->sslrootcert && FUNC_39(VAR_20->sslrootcert) > 0)
  FUNC_38(VAR_24, VAR_20->sslrootcert, sizeof(VAR_24));
 else if (VAR_26)
  FUNC_33(VAR_24, sizeof(VAR_24), "%s/%s", VAR_23, VAR_4);
 else
  VAR_24[0] = '\0';

 if (VAR_24[0] != '\0' &&
  FUNC_34(VAR_24, &VAR_22) == 0)
 {
  X509_STORE *VAR_31;

  if (FUNC_9(VAR_21, VAR_24, ((void*)0)) != 1)
  {
   char *VAR_32 = FUNC_23(FUNC_6());

   FUNC_32(&VAR_20->errorMessage,
         FUNC_29("could not read root certificate file \"%s\": %s\n"),
         VAR_24, VAR_32);
   FUNC_22(VAR_32);
   FUNC_7(VAR_21);
   return -1;
  }

  if ((VAR_31 = FUNC_8(VAR_21)) != ((void*)0))
  {
   if (VAR_20->sslcrl && FUNC_39(VAR_20->sslcrl) > 0)
    FUNC_38(VAR_24, VAR_20->sslcrl, sizeof(VAR_24));
   else if (VAR_26)
    FUNC_33(VAR_24, sizeof(VAR_24), "%s/%s", VAR_23, VAR_5);
   else
    VAR_24[0] = '\0';


   if (VAR_24[0] != '\0' &&
    FUNC_26(VAR_31, VAR_24, ((void*)0)) == 1)
   {
    FUNC_27(VAR_31,
          VAR_16 | VAR_17);
   }

   FUNC_5();
  }
  VAR_28 = 1;
 }
 else
 {





  if (VAR_20->sslmode[0] == 'v')
  {





   if (VAR_24[0] == '\0')
    FUNC_32(&VAR_20->errorMessage,
          FUNC_29("could not get home directory to locate root certificate file\n"
            "Either provide the file or change sslmode to disable server certificate verification.\n"));
   else
    FUNC_32(&VAR_20->errorMessage,
          FUNC_29("root certificate file \"%s\" does not exist\n"
            "Either provide the file or change sslmode to disable server certificate verification.\n"), VAR_24);
   FUNC_7(VAR_21);
   return -1;
  }
  VAR_28 = 0;
 }


 if (VAR_20->sslcert && FUNC_39(VAR_20->sslcert) > 0)
  FUNC_38(VAR_24, VAR_20->sslcert, sizeof(VAR_24));
 else if (VAR_26)
  FUNC_33(VAR_24, sizeof(VAR_24), "%s/%s", VAR_23, VAR_14);
 else
  VAR_24[0] = '\0';

 if (VAR_24[0] == '\0')
 {

  VAR_27 = 0;
 }
 else if (FUNC_34(VAR_24, &VAR_22) != 0)
 {





  if (VAR_18 != VAR_0 && VAR_18 != VAR_1)
  {
   FUNC_32(&VAR_20->errorMessage,
         FUNC_29("could not open certificate file \"%s\": %s\n"),
         VAR_24, FUNC_37(VAR_18, VAR_25, sizeof(VAR_25)));
   FUNC_7(VAR_21);
   return -1;
  }
  VAR_27 = 0;
 }
 else
 {





  if (FUNC_13(VAR_21, VAR_24) != 1)
  {
   char *VAR_33 = FUNC_23(FUNC_6());

   FUNC_32(&VAR_20->errorMessage,
         FUNC_29("could not read certificate file \"%s\": %s\n"),
         VAR_24, VAR_33);
   FUNC_22(VAR_33);
   FUNC_7(VAR_21);
   return -1;
  }


  VAR_27 = 1;
 }
 if (!(VAR_20->ssl = FUNC_16(VAR_21)) ||
  !FUNC_17(VAR_20->ssl, VAR_20) ||
  !FUNC_30(VAR_20, VAR_20->sock))
 {
  char *VAR_34 = FUNC_23(FUNC_6());

  FUNC_32(&VAR_20->errorMessage,
        FUNC_29("could not establish SSL connection: %s\n"),
        VAR_34);
  FUNC_22(VAR_34);
  FUNC_7(VAR_21);
  return -1;
 }
 VAR_20->ssl_in_use = 1;






 FUNC_7(VAR_21);
 VAR_21 = ((void*)0);







 if (VAR_27 && VAR_20->sslkey && FUNC_39(VAR_20->sslkey) > 0)
 {
  {

   FUNC_38(VAR_24, VAR_20->sslkey, sizeof(VAR_24));
  }
 }
 else if (VAR_26)
 {

  FUNC_33(VAR_24, sizeof(VAR_24), "%s/%s", VAR_23, VAR_15);
 }
 else
  VAR_24[0] = '\0';

 if (VAR_27 && VAR_24[0] != '\0')
 {


  if (FUNC_34(VAR_24, &VAR_22) != 0)
  {
   FUNC_32(&VAR_20->errorMessage,
         FUNC_29("certificate present, but not private key file \"%s\"\n"),
         VAR_24);
   return -1;
  }

  if (!FUNC_25(VAR_22.st_mode) || VAR_22.st_mode & (VAR_12 | VAR_13))
  {
   FUNC_32(&VAR_20->errorMessage,
         FUNC_29("private key file \"%s\" has group or world access; permissions should be u=rw (0600) or less\n"),
         VAR_24);
   return -1;
  }


  if (FUNC_21(VAR_20->ssl, VAR_24, VAR_6) != 1)
  {
   char *VAR_35 = FUNC_23(FUNC_6());

   FUNC_32(&VAR_20->errorMessage,
         FUNC_29("could not load private key file \"%s\": %s\n"),
         VAR_24, VAR_35);
   FUNC_22(VAR_35);
   return -1;
  }
 }


 if (VAR_27 &&
  FUNC_14(VAR_20->ssl) != 1)
 {
  char *VAR_36 = FUNC_23(FUNC_6());

  FUNC_32(&VAR_20->errorMessage,
        FUNC_29("certificate does not match private key file \"%s\": %s\n"),
        VAR_24, VAR_36);
  FUNC_22(VAR_36);
  return -1;
 }





 if (VAR_28)
  FUNC_19(VAR_20->ssl, VAR_11, VAR_19);
 return 0;
}
