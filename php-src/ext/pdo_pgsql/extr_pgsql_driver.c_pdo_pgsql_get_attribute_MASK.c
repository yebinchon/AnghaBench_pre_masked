
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_long ;
struct TYPE_4__ {int server; int disable_prepares; int emulate_prepares; } ;
typedef TYPE_1__ pdo_pgsql_db_handle ;
struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef int PGresult ;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,char*,int) ;
 int * FUNC_12 (int ,char*,int,char*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_13(pdo_dbh_t *VAR_2, zend_long VAR_3, zval *VAR_4)
{
 pdo_pgsql_db_handle *VAR_5 = (pdo_pgsql_db_handle *)VAR_2->driver_data;

 switch (VAR_3) {
  case 131:
   FUNC_8(VAR_4, VAR_5->emulate_prepares);
   break;

  case 128:
   FUNC_8(VAR_4, VAR_5->disable_prepares);
   break;

  case 133:
   FUNC_10(VAR_4, VAR_1);
   break;

  case 129:
   if (FUNC_5(VAR_5->server) >= 3) {
    FUNC_10(VAR_4, (char*)FUNC_4(VAR_5->server, "server_version"));
   } else
   {
    PGresult *VAR_6 = FUNC_2(VAR_5->server, "SELECT VERSION()");
    if (VAR_6 && FUNC_6(VAR_6) == VAR_0) {
     FUNC_10(VAR_4, (char *)FUNC_3(VAR_6, 0, 0));
    }

    if (VAR_6) {
     FUNC_1(VAR_6);
    }
   }
   break;

  case 132:
   switch (FUNC_7(VAR_5->server)) {
    case 134:
     FUNC_11(VAR_4, "Waiting for connection to be made.", sizeof("Waiting for connection to be made.")-1);
     break;

    case 138:
    case 137:
     FUNC_11(VAR_4, "Connection OK; waiting to send.", sizeof("Connection OK; waiting to send.")-1);
     break;

    case 140:
     FUNC_11(VAR_4, "Waiting for a response from the server.", sizeof("Waiting for a response from the server.")-1);
     break;

    case 141:
     FUNC_11(VAR_4, "Received authentication; waiting for backend start-up to finish.", sizeof("Received authentication; waiting for backend start-up to finish.")-1);
     break;

    case 135:
     FUNC_11(VAR_4, "Negotiating SSL encryption.", sizeof("Negotiating SSL encryption.")-1);
     break;

    case 136:
     FUNC_11(VAR_4, "Negotiating environment-driven parameter settings.", sizeof("Negotiating environment-driven parameter settings.")-1);
     break;

    case 139:
    default:
     FUNC_11(VAR_4, "Bad connection.", sizeof("Bad connection.")-1);
     break;
   }
   break;

  case 130: {
   int VAR_7 = FUNC_0(VAR_5->server);


   zend_string *VAR_8 =
    FUNC_12(0,
     "PID: %d; Client Encoding: %s; Is Superuser: %s; Session Authorization: %s; Date Style: %s",
     VAR_7,
     (char*)FUNC_4(VAR_5->server, "client_encoding"),
     (char*)FUNC_4(VAR_5->server, "is_superuser"),
     (char*)FUNC_4(VAR_5->server, "session_authorization"),
     (char*)FUNC_4(VAR_5->server, "DateStyle"));

   FUNC_9(VAR_4, VAR_8);
  }
   break;

  default:
   return 0;
 }

 return 1;
}
