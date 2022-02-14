
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* val; } ;
typedef TYPE_2__ zend_string ;
struct timeval {int tv_sec; int member_0; } ;
typedef int smart_str ;
struct TYPE_7__ {int headers; } ;
struct TYPE_9__ {TYPE_1__ request; } ;
typedef TYPE_3__ php_cli_server_client ;


 int FUNC_0 (struct timeval*,int *) ;
 TYPE_2__* FUNC_1 (char*,int,int ,int ) ;
 int FUNC_2 (int *,char*,int,int) ;
 int FUNC_3 (int *,char*,int) ;
 char* FUNC_4 (int *,char*,int) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_6(smart_str* VAR_0, php_cli_server_client *VAR_1, int VAR_2)
{
 char *VAR_3;
 struct timeval VAR_4 = {0};

 if (((void*)0) != (VAR_3 = FUNC_4(&VAR_1->request.headers, "host", sizeof("host")-1))) {
  FUNC_3(VAR_0, "Host: ", VAR_2);
  FUNC_3(VAR_0, VAR_3, VAR_2);
  FUNC_3(VAR_0, "\r\n", VAR_2);
 }

 if (!FUNC_0(&VAR_4, ((void*)0))) {
  zend_string *VAR_5 = FUNC_1("D, d M Y H:i:s", sizeof("D, d M Y H:i:s") - 1, VAR_4.tv_sec, 0);
  FUNC_3(VAR_0, "Date: ", VAR_2);
  FUNC_3(VAR_0, VAR_5->val, VAR_2);
  FUNC_3(VAR_0, " GMT\r\n", VAR_2);
  FUNC_5(VAR_5, 0);
 }

 FUNC_2(VAR_0, "Connection: close\r\n", sizeof("Connection: close\r\n") - 1, VAR_2);
}
