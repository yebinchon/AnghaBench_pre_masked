
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int sebuf ;
struct TYPE_3__ {int errorMessage; int sock; } ;
typedef TYPE_1__ PGconn ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,...) ;
 scalar_t__ FUNC_4 (int ,void*,size_t,int ) ;

ssize_t
FUNC_5(PGconn *VAR_2, void *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5;
 int VAR_6 = 0;
 char VAR_7[VAR_0];

 VAR_5 = FUNC_4(VAR_2->sock, VAR_3, VAR_4, 0);

 if (VAR_5 < 0)
 {
  VAR_6 = VAR_1;


  switch (VAR_6)
  {

   case 131:


   case 128:

   case 129:

    break;


   case 130:
    FUNC_3(&VAR_2->errorMessage,
          FUNC_2(
            "server closed the connection unexpectedly\n"
            "\tThis probably means the server terminated abnormally\n"
            "\tbefore or while processing the request.\n"));
    break;


   default:
    FUNC_3(&VAR_2->errorMessage,
          FUNC_2("could not receive data from server: %s\n"),
          FUNC_1(VAR_6,
            VAR_7, sizeof(VAR_7)));
    break;
  }
 }


 FUNC_0(VAR_6);

 return VAR_5;
}
