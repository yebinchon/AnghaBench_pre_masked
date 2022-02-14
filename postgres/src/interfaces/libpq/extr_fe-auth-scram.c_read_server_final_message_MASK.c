
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ServerSignature; int server_final_message; TYPE_2__* conn; } ;
typedef TYPE_1__ fe_scram_state ;
struct TYPE_5__ {int errorMessage; } ;
typedef TYPE_2__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,char*,int) ;
 int FUNC_6 (int *,int ,...) ;
 char* FUNC_7 (char**,char,int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static bool
FUNC_10(fe_scram_state *VAR_1, char *VAR_2)
{
 PGconn *VAR_3 = VAR_1->conn;
 char *VAR_4;
 char *VAR_5;
 int VAR_6;

 VAR_1->server_final_message = FUNC_8(VAR_2);
 if (!VAR_1->server_final_message)
 {
  FUNC_6(&VAR_3->errorMessage,
        FUNC_1("out of memory\n"));
  return 0;
 }


 if (*VAR_2 == 'e')
 {
  char *VAR_7 = FUNC_7(&VAR_2, 'e',
            &VAR_3->errorMessage);

  FUNC_6(&VAR_3->errorMessage,
        FUNC_1("error received from server in SCRAM exchange: %s\n"),
        VAR_7);
  return 0;
 }


 VAR_4 = FUNC_7(&VAR_2, 'v',
              &VAR_3->errorMessage);
 if (VAR_4 == ((void*)0))
 {

  return 0;
 }

 if (*VAR_2 != '\0')
  FUNC_6(&VAR_3->errorMessage,
        FUNC_1("malformed SCRAM message (garbage at end of server-final-message)\n"));

 VAR_6 = FUNC_4(FUNC_9(VAR_4));
 VAR_5 = FUNC_2(VAR_6);
 if (!VAR_5)
 {
  FUNC_6(&VAR_3->errorMessage,
        FUNC_1("out of memory\n"));
  return 0;
 }

 VAR_6 = FUNC_5(VAR_4,
           FUNC_9(VAR_4),
           VAR_5,
           VAR_6);
 if (VAR_6 != VAR_0)
 {
  FUNC_0(VAR_5);
  FUNC_6(&VAR_3->errorMessage,
        FUNC_1("malformed SCRAM message (invalid server signature)\n"));
  return 0;
 }
 FUNC_3(VAR_1->ServerSignature, VAR_5, VAR_0);
 FUNC_0(VAR_5);

 return 1;
}
