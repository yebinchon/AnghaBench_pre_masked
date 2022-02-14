
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {char* client_nonce; void* client_first_message_bare; int sasl_mechanism; TYPE_3__* conn; } ;
typedef TYPE_1__ fe_scram_state ;
struct TYPE_13__ {char* channel_binding; int errorMessage; scalar_t__ ssl_in_use; } ;
struct TYPE_12__ {int len; scalar_t__ data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef TYPE_3__ PGconn ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,char*,char*) ;
 int FUNC_3 (TYPE_2__*,char) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,char*,int) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 void* FUNC_13 (scalar_t__) ;
 int FUNC_14 (TYPE_2__*) ;

__attribute__((used)) static char *
FUNC_15(fe_scram_state *VAR_2)
{
 PGconn *VAR_3 = VAR_2->conn;
 char VAR_4[VAR_0 + 1];
 char *VAR_5;
 int VAR_6;
 int VAR_7;
 PQExpBufferData VAR_8;





 if (!FUNC_10(VAR_4, VAR_0))
 {
  FUNC_11(&VAR_3->errorMessage,
        FUNC_6("could not generate nonce\n"));
  return ((void*)0);
 }

 VAR_7 = FUNC_8(VAR_0);

 VAR_2->client_nonce = FUNC_7(VAR_7 + 1);
 if (VAR_2->client_nonce == ((void*)0))
 {
  FUNC_11(&VAR_3->errorMessage,
        FUNC_6("out of memory\n"));
  return ((void*)0);
 }
 VAR_7 = FUNC_9(VAR_4, VAR_0,
        VAR_2->client_nonce, VAR_7);
 if (VAR_7 < 0)
 {
  FUNC_11(&VAR_3->errorMessage,
        FUNC_6("could not encode nonce\n"));
  return ((void*)0);
 }
 VAR_2->client_nonce[VAR_7] = '\0';
 FUNC_5(&VAR_8);




 if (FUNC_12(VAR_2->sasl_mechanism, VAR_1) == 0)
 {
  FUNC_0(VAR_3->ssl_in_use);
  FUNC_4(&VAR_8, "p=tls-server-end-point");
 }
 else
 {



  FUNC_3(&VAR_8, 'n');
 }

 if (FUNC_1(VAR_8))
  goto oom_error;

 VAR_6 = VAR_8.len;

 FUNC_2(&VAR_8, ",,n=,r=%s", VAR_2->client_nonce);
 if (FUNC_1(VAR_8))
  goto oom_error;





 VAR_2->client_first_message_bare = FUNC_13(VAR_8.data + VAR_6 + 2);
 if (!VAR_2->client_first_message_bare)
  goto oom_error;

 VAR_5 = FUNC_13(VAR_8.data);
 if (VAR_5 == ((void*)0))
  goto oom_error;

 FUNC_14(&VAR_8);
 return VAR_5;

oom_error:
 FUNC_14(&VAR_8);
 FUNC_11(&VAR_3->errorMessage,
       FUNC_6("out of memory\n"));
 return ((void*)0);
}
