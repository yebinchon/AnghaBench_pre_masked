
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* client_nonce; int iterations; int saltlen; int * salt; int * nonce; int * server_first_message; TYPE_2__* conn; } ;
typedef TYPE_1__ fe_scram_state ;
struct TYPE_5__ {int errorMessage; } ;
typedef TYPE_2__ PGconn ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,char*,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,scalar_t__,int *,int) ;
 int FUNC_5 (int *,int ) ;
 char* FUNC_6 (char**,char,int *) ;
 void* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (char*,char**,int) ;

__attribute__((used)) static bool
FUNC_10(fe_scram_state *VAR_0, char *VAR_1)
{
 PGconn *VAR_2 = VAR_0->conn;
 char *VAR_3;
 char *VAR_4;
 char *VAR_5;
 char *VAR_6;
 int VAR_7;

 VAR_0->server_first_message = FUNC_7(VAR_1);
 if (VAR_0->server_first_message == ((void*)0))
 {
  FUNC_5(&VAR_2->errorMessage,
        FUNC_0("out of memory\n"));
  return 0;
 }


 VAR_6 = FUNC_6(&VAR_1, 'r',
       &VAR_2->errorMessage);
 if (VAR_6 == ((void*)0))
 {

  return 0;
 }


 if (FUNC_8(VAR_6) < FUNC_8(VAR_0->client_nonce) ||
  FUNC_2(VAR_6, VAR_0->client_nonce, FUNC_8(VAR_0->client_nonce)) != 0)
 {
  FUNC_5(&VAR_2->errorMessage,
        FUNC_0("invalid SCRAM response (nonce mismatch)\n"));
  return 0;
 }

 VAR_0->nonce = FUNC_7(VAR_6);
 if (VAR_0->nonce == ((void*)0))
 {
  FUNC_5(&VAR_2->errorMessage,
        FUNC_0("out of memory\n"));
  return 0;
 }

 VAR_5 = FUNC_6(&VAR_1, 's', &VAR_2->errorMessage);
 if (VAR_5 == ((void*)0))
 {

  return 0;
 }
 VAR_7 = FUNC_3(FUNC_8(VAR_5));
 VAR_0->salt = FUNC_1(VAR_7);
 if (VAR_0->salt == ((void*)0))
 {
  FUNC_5(&VAR_2->errorMessage,
        FUNC_0("out of memory\n"));
  return 0;
 }
 VAR_0->saltlen = FUNC_4(VAR_5,
           FUNC_8(VAR_5),
           VAR_0->salt,
           VAR_7);
 if (VAR_0->saltlen < 0)
 {
  FUNC_5(&VAR_2->errorMessage,
        FUNC_0("malformed SCRAM message (invalid salt)\n"));
  return 0;
 }

 VAR_3 = FUNC_6(&VAR_1, 'i', &VAR_2->errorMessage);
 if (VAR_3 == ((void*)0))
 {

  return 0;
 }
 VAR_0->iterations = FUNC_9(VAR_3, &VAR_4, 10);
 if (*VAR_4 != '\0' || VAR_0->iterations < 1)
 {
  FUNC_5(&VAR_2->errorMessage,
        FUNC_0("malformed SCRAM message (invalid iteration count)\n"));
  return 0;
 }

 if (*VAR_1 != '\0')
  FUNC_5(&VAR_2->errorMessage,
        FUNC_0("malformed SCRAM message (garbage at end of server-first-message)\n"));

 return 1;
}
