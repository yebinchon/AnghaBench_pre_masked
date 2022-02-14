
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int log_source; int mail_socket; } ;
typedef TYPE_1__ php_win32_core_globals ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(void *VAR_2)
{
 php_win32_core_globals *VAR_3 = (php_win32_core_globals*)VAR_2;
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));

 VAR_3->mail_socket = VAR_1;

 VAR_3->log_source = VAR_0;
}
