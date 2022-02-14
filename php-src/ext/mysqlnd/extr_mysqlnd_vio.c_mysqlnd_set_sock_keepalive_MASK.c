
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ abstract; } ;
typedef TYPE_1__ php_stream ;
struct TYPE_5__ {int socket; } ;
typedef TYPE_2__ php_netstream_data_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int ,int ,char*,int) ;

__attribute__((used)) static int
FUNC_3(php_stream * VAR_4)
{
 int VAR_5 = ((php_netstream_data_t*)VAR_4->abstract)->socket;
 int VAR_6 = VAR_3;
 int VAR_7 = 1;
 int VAR_8 = FUNC_2(VAR_5, VAR_1, VAR_2, (char *) &VAR_7, sizeof(int));

 FUNC_0("mysqlnd_set_sock_keepalive");

 if (VAR_8 == -1) {
  VAR_6 = VAR_0;
 }

 FUNC_1(VAR_6);
}
