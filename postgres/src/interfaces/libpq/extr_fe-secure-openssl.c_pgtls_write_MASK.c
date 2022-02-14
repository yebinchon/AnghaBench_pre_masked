
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int sebuf ;
struct TYPE_3__ {int errorMessage; int ssl; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,int) ;






 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,void const*,size_t) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (unsigned long) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,char*,...) ;

ssize_t
FUNC_10(PGconn *VAR_4, const void *VAR_5, size_t VAR_6)
{
 ssize_t VAR_7;
 int VAR_8 = 0;
 char VAR_9[VAR_2];
 int VAR_10;
 unsigned long VAR_11;

 FUNC_2(0);
 FUNC_0();
 VAR_7 = FUNC_5(VAR_4->ssl, VAR_5, VAR_6);
 VAR_10 = FUNC_4(VAR_4->ssl, VAR_7);
 VAR_11 = (VAR_10 != 133 || VAR_7 < 0) ? FUNC_1() : 0;
 switch (VAR_10)
 {
  case 133:
   if (VAR_7 < 0)
   {

    FUNC_9(&VAR_4->errorMessage,
          "SSL_write failed but did not provide error information\n");

    VAR_8 = VAR_0;
   }
   break;
  case 130:





   VAR_7 = 0;
   break;
  case 129:
   VAR_7 = 0;
   break;
  case 131:
   if (VAR_7 < 0)
   {
    VAR_8 = VAR_3;
    if (VAR_8 == VAR_1 || VAR_8 == VAR_0)
     FUNC_9(&VAR_4->errorMessage,
           FUNC_8(
             "server closed the connection unexpectedly\n"
             "\tThis probably means the server terminated abnormally\n"
             "\tbefore or while processing the request.\n"));
    else
     FUNC_9(&VAR_4->errorMessage,
           FUNC_8("SSL SYSCALL error: %s\n"),
           FUNC_3(VAR_8,
             VAR_9, sizeof(VAR_9)));
   }
   else
   {
    FUNC_9(&VAR_4->errorMessage,
          FUNC_8("SSL SYSCALL error: EOF detected\n"));

    VAR_8 = VAR_0;
    VAR_7 = -1;
   }
   break;
  case 132:
   {
    char *VAR_12 = FUNC_7(VAR_11);

    FUNC_9(&VAR_4->errorMessage,
          FUNC_8("SSL error: %s\n"), VAR_12);
    FUNC_6(VAR_12);

    VAR_8 = VAR_0;
    VAR_7 = -1;
    break;
   }
  case 128:






   FUNC_9(&VAR_4->errorMessage,
         FUNC_8("SSL connection has been closed unexpectedly\n"));
   VAR_8 = VAR_0;
   VAR_7 = -1;
   break;
  default:
   FUNC_9(&VAR_4->errorMessage,
         FUNC_8("unrecognized SSL error code: %d\n"),
         VAR_10);

   VAR_8 = VAR_0;
   VAR_7 = -1;
   break;
 }


 FUNC_2(VAR_8);

 return VAR_7;
}
