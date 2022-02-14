
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int headers; } ;
struct TYPE_5__ {TYPE_1__ request; } ;
typedef TYPE_2__ php_cli_server_client ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (int *,char*,int) ;

__attribute__((used)) static char *FUNC_2(void)
{
 php_cli_server_client *VAR_1 = FUNC_0(VAR_0);
 char *VAR_2;
 if (((void*)0) == (VAR_2 = FUNC_1(&VAR_1->request.headers, "cookie", sizeof("cookie")-1))) {
  return ((void*)0);
 }
 return VAR_2;
}
