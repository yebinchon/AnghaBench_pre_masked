
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {char* channel_binding; int password_needed; size_t whichhost; char* pgpass; int errorMessage; int sasl_state; TYPE_1__* connhost; scalar_t__ ssl_in_use; } ;
struct TYPE_18__ {char* data; } ;
struct TYPE_17__ {char* password; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef TYPE_3__ PGconn ;


 scalar_t__ FUNC_0 (TYPE_2__) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int ,int *,int,char**,int*,int*,int*) ;
 int FUNC_5 (TYPE_3__*,char*,char const*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_8 (int,int,TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (char,int,TYPE_3__*) ;
 scalar_t__ FUNC_11 (char*,int,TYPE_3__*) ;
 scalar_t__ FUNC_12 (char const*,TYPE_3__*) ;
 int FUNC_13 (int *,char*) ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 int FUNC_15 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_16(PGconn *VAR_5, int VAR_6)
{
 char *VAR_7 = ((void*)0);
 int VAR_8;
 bool VAR_9;
 bool VAR_10;
 const char *VAR_11;
 PQExpBufferData VAR_12;
 char *VAR_13;

 FUNC_2(&VAR_12);

 if (VAR_5->channel_binding[0] == 'r' &&
  !VAR_5->ssl_in_use)
 {
  FUNC_13(&VAR_5->errorMessage,
        FUNC_3("Channel binding required, but SSL not in use\n"));
  goto error;
 }

 if (VAR_5->sasl_state)
 {
  FUNC_13(&VAR_5->errorMessage,
        FUNC_3("duplicate SASL authentication request\n"));
  goto error;
 }







 VAR_11 = ((void*)0);
 for (;;)
 {
  if (FUNC_7(&VAR_12, VAR_5))
  {
   FUNC_13(&VAR_5->errorMessage,
         "fe_sendauth: invalid authentication request from server: invalid list of authentication mechanisms\n");
   goto error;
  }
  if (FUNC_0(VAR_12))
   goto oom_error;


  if (VAR_12.data[0] == '\0')
   break;
  if (FUNC_14(VAR_12.data, VAR_2) == 0)
  {
   if (VAR_5->ssl_in_use)
   {
    if (VAR_5->channel_binding[0] == 'r')
    {
     FUNC_13(&VAR_5->errorMessage,
           FUNC_3("channel binding is required, but client does not support it\n"));
     goto error;
    }

   }
   else
   {
    FUNC_13(&VAR_5->errorMessage,
          FUNC_3("server offered SCRAM-SHA-256-PLUS authentication over a non-SSL connection\n"));
    goto error;
   }
  }
  else if (FUNC_14(VAR_12.data, VAR_1) == 0 &&
     !VAR_11)
   VAR_11 = VAR_1;
 }

 if (!VAR_11)
 {
  FUNC_13(&VAR_5->errorMessage,
        FUNC_3("none of the server's SASL authentication mechanisms are supported\n"));
  goto error;
 }

 if (VAR_5->channel_binding[0] == 'r' &&
  FUNC_14(VAR_11, VAR_2) != 0)
 {
  FUNC_13(&VAR_5->errorMessage,
        FUNC_3("channel binding is required, but server did not offer an authentication method that supports channel binding\n"));
  goto error;
 }
 VAR_5->password_needed = 1;
 VAR_13 = VAR_5->connhost[VAR_5->whichhost].password;
 if (VAR_13 == ((void*)0))
  VAR_13 = VAR_5->pgpass;
 if (VAR_13 == ((void*)0) || VAR_13[0] == '\0')
 {
  FUNC_13(&VAR_5->errorMessage,
        VAR_0);
  goto error;
 }







 VAR_5->sasl_state = FUNC_5(VAR_5,
          VAR_13,
          VAR_11);
 if (!VAR_5->sasl_state)
  goto oom_error;


 FUNC_4(VAR_5->sasl_state,
       ((void*)0), -1,
       &VAR_7, &VAR_8,
       &VAR_9, &VAR_10);

 if (VAR_9 && !VAR_10)
  goto error;




 if (FUNC_10('p', 1, VAR_5))
  goto error;
 if (FUNC_12(VAR_11, VAR_5))
  goto error;
 if (VAR_7)
 {
  if (FUNC_8(VAR_8, 4, VAR_5))
   goto error;
  if (FUNC_11(VAR_7, VAR_8, VAR_5))
   goto error;
 }
 if (FUNC_9(VAR_5))
  goto error;
 if (FUNC_6(VAR_5))
  goto error;

 FUNC_15(&VAR_12);
 if (VAR_7)
  FUNC_1(VAR_7);

 return VAR_4;

error:
 FUNC_15(&VAR_12);
 if (VAR_7)
  FUNC_1(VAR_7);
 return VAR_3;

oom_error:
 FUNC_15(&VAR_12);
 if (VAR_7)
  FUNC_1(VAR_7);
 FUNC_13(&VAR_5->errorMessage,
       FUNC_3("out of memory\n"));
 return VAR_3;
}
