
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_bool ;
struct TYPE_5__ {int request_uri; } ;
struct TYPE_6__ {TYPE_1__ request; int addr_str; } ;
typedef TYPE_2__ php_cli_server_client ;
struct TYPE_7__ {int request_method; } ;


 scalar_t__ FUNC_0 (int) ;





 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_4__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_6 ;
 int FUNC_6 (char**,int ,char*,...) ;

__attribute__((used)) static void FUNC_7(php_cli_server_client *VAR_7, int VAR_8, const char *VAR_9)
{
 int VAR_10 = 0, VAR_11 = VAR_8;
 char *VAR_12, *VAR_13 = "", *VAR_14 = "";
 zend_bool VAR_15 = 0;

 if (FUNC_1(VAR_4)) {
  switch (FUNC_1(VAR_5)) {
   case 130:
   case 131:
   case 132:
   case 128:
   case 129:
    if (VAR_8 == 200) {

     VAR_11 = 500;
    }

    VAR_15 = 1;
    break;
  }
 }
 FUNC_6(&VAR_12, 0, "%s [%d]: %s %s", VAR_7->addr_str, VAR_8, FUNC_2(VAR_6).request_method, VAR_7->request.request_uri);
 if (!VAR_12) {
  return;
 }


 if (VAR_9) {
  FUNC_6(&VAR_13, 0, " - %s", VAR_9);
  if (!VAR_13) {
   FUNC_3(VAR_12);
   return;
  }
 }


 if (VAR_15) {
  FUNC_6(&VAR_14, 0, " - %s in %s on line %d", FUNC_1(VAR_4), FUNC_1(VAR_2), FUNC_1(VAR_3));
  if (!VAR_14) {
   FUNC_3(VAR_12);
   if (VAR_9) {
    FUNC_3(VAR_13);
   }
   return;
  }
 }

 if (VAR_10) {
  FUNC_5(VAR_1, "\x1b[3%dm%s%s%s\x1b[0m", VAR_10, VAR_12, VAR_13, VAR_14);
 } else {
  FUNC_5(VAR_1, "%s%s%s", VAR_12, VAR_13, VAR_14);
 }

 FUNC_3(VAR_12);
 if (VAR_9) {
  FUNC_3(VAR_13);
 }
 if (VAR_15) {
  FUNC_3(VAR_14);
 }
}
