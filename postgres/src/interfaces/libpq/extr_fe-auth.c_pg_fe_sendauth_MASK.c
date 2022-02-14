
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int len; } ;
struct TYPE_15__ {int password_needed; size_t whichhost; char* pgpass; TYPE_3__ errorMessage; int * sasl_state; TYPE_1__* connhost; int usesspi; int gsslib; } ;
struct TYPE_14__ {char* password; } ;
typedef TYPE_2__ PGconn ;
typedef int AuthRequest ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,TYPE_2__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,char*,int) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_3__*,char*,...) ;

int
FUNC_14(AuthRequest VAR_3, int VAR_4, PGconn *VAR_5)
{
 if (!FUNC_0(VAR_3, VAR_5))
  return VAR_1;

 switch (VAR_3)
 {
  case 134:
   break;

  case 137:
   FUNC_13(&VAR_5->errorMessage,
         FUNC_1("Kerberos 4 authentication not supported\n"));
   return VAR_1;

  case 136:
   FUNC_13(&VAR_5->errorMessage,
         FUNC_1("Kerberos 5 authentication not supported\n"));
   return VAR_1;
  case 139:
  case 138:
   FUNC_13(&VAR_5->errorMessage,
         FUNC_1("GSSAPI authentication not supported\n"));
   return VAR_1;
  case 128:
   FUNC_13(&VAR_5->errorMessage,
         FUNC_1("SSPI authentication not supported\n"));
   return VAR_1;




  case 140:
   FUNC_13(&VAR_5->errorMessage,
         FUNC_1("Crypt authentication not supported\n"));
   return VAR_1;

  case 135:
  case 133:
   {
    char *VAR_6;

    VAR_5->password_needed = 1;
    VAR_6 = VAR_5->connhost[VAR_5->whichhost].password;
    if (VAR_6 == ((void*)0))
     VAR_6 = VAR_5->pgpass;
    if (VAR_6 == ((void*)0) || VAR_6[0] == '\0')
    {
     FUNC_13(&VAR_5->errorMessage,
           VAR_0);
     return VAR_1;
    }
    if (FUNC_9(VAR_5, VAR_6, VAR_3) != VAR_2)
    {
     FUNC_13(&VAR_5->errorMessage,
           "fe_sendauth: error sending password authentication\n");
     return VAR_1;
    }
    break;
   }

  case 132:





   if (FUNC_5(VAR_5, VAR_4) != VAR_2)
   {

    return VAR_1;
   }
   break;

  case 131:
  case 130:
   if (VAR_5->sasl_state == ((void*)0))
   {
    FUNC_13(&VAR_5->errorMessage,
          "fe_sendauth: invalid authentication request from server: AUTH_REQ_SASL_CONT without AUTH_REQ_SASL\n");
    return VAR_1;
   }
   if (FUNC_4(VAR_5, VAR_4,
         (VAR_3 == 130)) != VAR_2)
   {

    if (VAR_5->errorMessage.len == 0)
     FUNC_13(&VAR_5->errorMessage,
           "fe_sendauth: error in SASL authentication\n");
    return VAR_1;
   }
   break;

  case 129:
   if (FUNC_8(VAR_5) != VAR_2)
    return VAR_1;
   break;

  default:
   FUNC_13(&VAR_5->errorMessage,
         FUNC_1("authentication method %u not supported\n"), VAR_3);
   return VAR_1;
 }

 return VAR_2;
}
