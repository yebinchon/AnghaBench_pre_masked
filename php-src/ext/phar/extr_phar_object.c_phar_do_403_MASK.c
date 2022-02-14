
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int response_code; int line_len; char* line; int member_0; } ;
typedef TYPE_1__ sapi_header_line ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(char *VAR_1, size_t VAR_2)
{
 sapi_header_line VAR_3 = {0};

 VAR_3.response_code = 403;
 VAR_3.line_len = sizeof("HTTP/1.0 403 Access Denied")-1;
 VAR_3.line = "HTTP/1.0 403 Access Denied";
 FUNC_1(VAR_0, &VAR_3);
 FUNC_2();
 FUNC_0("<html>\n <head>\n  <title>Access Denied</title>\n </head>\n <body>\n  <h1>403 - File ", sizeof("<html>\n <head>\n  <title>Access Denied</title>\n </head>\n <body>\n  <h1>403 - File ") - 1);
 FUNC_0("Access Denied</h1>\n </body>\n</html>", sizeof("Access Denied</h1>\n </body>\n</html>") - 1);
}
