
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mail_socket; int * registry_directories; int * registry_event; int * registry_key; } ;
typedef TYPE_1__ php_win32_core_globals ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(void *VAR_1)
{
 php_win32_core_globals *VAR_2 = (php_win32_core_globals*)VAR_1;

 if (VAR_2->registry_key) {
  FUNC_1(VAR_2->registry_key);
  VAR_2->registry_key = ((void*)0);
 }
 if (VAR_2->registry_event) {
  FUNC_0(VAR_2->registry_event);
  VAR_2->registry_event = ((void*)0);
 }
 if (VAR_2->registry_directories) {
  FUNC_4(VAR_2->registry_directories);
  FUNC_3(VAR_2->registry_directories);
  VAR_2->registry_directories = ((void*)0);
 }

 if (VAR_0 != VAR_2->mail_socket) {
  FUNC_2(VAR_2->mail_socket);
  VAR_2->mail_socket = VAR_0;
 }
}
