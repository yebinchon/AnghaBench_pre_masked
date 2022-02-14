
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_long ;
struct TYPE_3__ {scalar_t__ router; scalar_t__ document_root; scalar_t__ host; int server_sock; int extension_mime_types; int clients; } ;
typedef TYPE_1__ php_cli_server ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int ,int*,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(php_cli_server *VAR_4)
{
 FUNC_8(&VAR_4->clients);
 FUNC_8(&VAR_4->extension_mime_types);
 if (FUNC_2(VAR_4->server_sock)) {
  FUNC_3(VAR_4->server_sock);
 }
 if (VAR_4->host) {
  FUNC_6(VAR_4->host, 1);
 }
 if (VAR_4->document_root) {
  FUNC_6(VAR_4->document_root, 1);
 }
 if (VAR_4->router) {
  FUNC_6(VAR_4->router, 1);
 }
}
