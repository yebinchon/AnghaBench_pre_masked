
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ssl_in_use; char* peer_cn; int peer_cert_valid; int * peer; scalar_t__ ssl; int sock; int noblock; } ;
typedef TYPE_1__ Port ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 unsigned long FUNC_2 () ;
 char* FUNC_3 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;





 int FUNC_5 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_6 (scalar_t__,int) ;
 int * FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (unsigned long) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (int ,int,int ,int ,int ) ;
 int FUNC_11 (int ,int ,char*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 (char*,...) ;
 int VAR_10 ;
 int FUNC_17 (TYPE_1__*,int ) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*) ;

int
FUNC_20(Port *VAR_11)
{
 int VAR_12;
 int VAR_13;
 int VAR_14;
 unsigned long VAR_15;

 FUNC_0(!VAR_11->ssl);
 FUNC_0(!VAR_11->peer);

 if (!VAR_4)
 {
  FUNC_13(VAR_0,
    (FUNC_14(VAR_1),
     FUNC_16("could not initialize SSL connection: SSL context not set up")));
  return -1;
 }

 if (!(VAR_11->ssl = FUNC_8(VAR_4)))
 {
  FUNC_13(VAR_0,
    (FUNC_14(VAR_1),
     FUNC_16("could not initialize SSL connection: %s",
      FUNC_9(FUNC_2()))));
  return -1;
 }
 if (!FUNC_17(VAR_11, VAR_11->sock))
 {
  FUNC_13(VAR_0,
    (FUNC_14(VAR_1),
     FUNC_16("could not set SSL socket: %s",
      FUNC_9(FUNC_2()))));
  return -1;
 }
 VAR_11->ssl_in_use = 1;

aloop:
 FUNC_1();
 VAR_12 = FUNC_5(VAR_11->ssl);
 if (VAR_12 <= 0)
 {
  VAR_13 = FUNC_6(VAR_11->ssl, VAR_12);
  VAR_15 = FUNC_2();
  switch (VAR_13)
  {
   case 130:
   case 129:

    FUNC_0(!VAR_11->noblock);






    if (VAR_13 == 130)
     VAR_14 = VAR_8 | VAR_7;
    else
     VAR_14 = VAR_9 | VAR_7;

    (void) FUNC_10(VAR_2, VAR_14, VAR_11->sock, 0,
           VAR_6);
    goto aloop;
   case 131:
    if (VAR_12 < 0)
     FUNC_13(VAR_0,
       (FUNC_15(),
        FUNC_16("could not accept SSL connection: %m")));
    else
     FUNC_13(VAR_0,
       (FUNC_14(VAR_1),
        FUNC_16("could not accept SSL connection: EOF detected")));
    break;
   case 132:
    FUNC_13(VAR_0,
      (FUNC_14(VAR_1),
       FUNC_16("could not accept SSL connection: %s",
        FUNC_9(VAR_15))));
    break;
   case 128:
    FUNC_13(VAR_0,
      (FUNC_14(VAR_1),
       FUNC_16("could not accept SSL connection: EOF detected")));
    break;
   default:
    FUNC_13(VAR_0,
      (FUNC_14(VAR_1),
       FUNC_16("unrecognized SSL error code: %d",
        VAR_13)));
    break;
  }
  return -1;
 }


 VAR_11->peer = FUNC_7(VAR_11->ssl);


 VAR_11->peer_cn = ((void*)0);
 VAR_11->peer_cert_valid = 0;
 if (VAR_11->peer != ((void*)0))
 {
  int VAR_16;

  VAR_16 = FUNC_11(FUNC_12(VAR_11->peer),
          VAR_3, ((void*)0), 0);
  if (VAR_16 != -1)
  {
   char *VAR_17;

   VAR_17 = FUNC_3(VAR_5, VAR_16 + 1);
   VAR_12 = FUNC_11(FUNC_12(VAR_11->peer),
            VAR_3, VAR_17, VAR_16 + 1);
   VAR_17[VAR_16] = '\0';
   if (VAR_12 != VAR_16)
   {

    FUNC_18(VAR_17);
    return -1;
   }





   if (VAR_16 != FUNC_19(VAR_17))
   {
    FUNC_13(VAR_0,
      (FUNC_14(VAR_1),
       FUNC_16("SSL certificate's common name contains embedded null")));
    FUNC_18(VAR_17);
    return -1;
   }

   VAR_11->peer_cn = VAR_17;
  }
  VAR_11->peer_cert_valid = 1;
 }


 FUNC_4(VAR_4, VAR_10);

 return 0;
}
