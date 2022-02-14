
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sebuf ;
struct TYPE_5__ {int errorMessage; int * peer; int ssl; } ;
typedef int PostgresPollingStatusType ;
typedef TYPE_1__ PGconn ;


 int FUNC_0 () ;
 unsigned long FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_2 (int ,char*,int) ;




 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (unsigned long) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *,int ,...) ;

__attribute__((used)) static PostgresPollingStatusType
FUNC_12(PGconn *VAR_6)
{
 int VAR_7;

 FUNC_0();
 VAR_7 = FUNC_3(VAR_6->ssl);
 if (VAR_7 <= 0)
 {
  int VAR_8 = FUNC_4(VAR_6->ssl, VAR_7);
  unsigned long VAR_9;

  VAR_9 = FUNC_1();
  switch (VAR_8)
  {
   case 129:
    return VAR_2;

   case 128:
    return VAR_3;

   case 130:
    {
     char VAR_10[VAR_4];

     if (VAR_7 == -1)
      FUNC_11(&VAR_6->errorMessage,
            FUNC_8("SSL SYSCALL error: %s\n"),
            FUNC_2(VAR_5, VAR_10, sizeof(VAR_10)));
     else
      FUNC_11(&VAR_6->errorMessage,
            FUNC_8("SSL SYSCALL error: EOF detected\n"));
     FUNC_9(VAR_6);
     return VAR_0;
    }
   case 131:
    {
     char *VAR_11 = FUNC_7(VAR_9);

     FUNC_11(&VAR_6->errorMessage,
           FUNC_8("SSL error: %s\n"),
           VAR_11);
     FUNC_6(VAR_11);
     FUNC_9(VAR_6);
     return VAR_0;
    }

   default:
    FUNC_11(&VAR_6->errorMessage,
          FUNC_8("unrecognized SSL error code: %d\n"),
          VAR_8);
    FUNC_9(VAR_6);
    return VAR_0;
  }
 }







 VAR_6->peer = FUNC_5(VAR_6->ssl);
 if (VAR_6->peer == ((void*)0))
 {
  char *VAR_12;

  VAR_12 = FUNC_7(FUNC_1());

  FUNC_11(&VAR_6->errorMessage,
        FUNC_8("certificate could not be obtained: %s\n"),
        VAR_12);
  FUNC_6(VAR_12);
  FUNC_9(VAR_6);
  return VAR_0;
 }

 if (!FUNC_10(VAR_6))
 {
  FUNC_9(VAR_6);
  return VAR_0;
 }


 return VAR_1;
}
