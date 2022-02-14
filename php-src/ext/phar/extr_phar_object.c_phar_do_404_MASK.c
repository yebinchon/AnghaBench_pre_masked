
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int response_code; int line_len; char* line; int member_0; } ;
typedef TYPE_1__ sapi_header_line ;
typedef int phar_entry_info ;
typedef int phar_archive_data ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,char*,int ,char*,size_t,char*,int *,int *,int ) ;
 int * FUNC_2 (int *,char*,size_t,int *,int) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(phar_archive_data *VAR_2, char *VAR_3, size_t VAR_4, char *VAR_5, size_t VAR_6, char *VAR_7, size_t VAR_8)
{
 sapi_header_line VAR_9 = {0};
 phar_entry_info *VAR_10;

 if (VAR_2 && VAR_6) {
  VAR_10 = FUNC_2(VAR_2, VAR_5, VAR_6, ((void*)0), 1);

  if (VAR_10) {
   FUNC_1(VAR_2, VAR_10, "text/html", VAR_0, VAR_5, VAR_6, VAR_3, ((void*)0), ((void*)0), 0);
   return;
  }
 }

 VAR_9.response_code = 404;
 VAR_9.line_len = sizeof("HTTP/1.0 404 Not Found")-1;
 VAR_9.line = "HTTP/1.0 404 Not Found";
 FUNC_3(VAR_1, &VAR_9);
 FUNC_4();
 FUNC_0("<html>\n <head>\n  <title>File Not Found</title>\n </head>\n <body>\n  <h1>404 - File ", sizeof("<html>\n <head>\n  <title>File Not Found</title>\n </head>\n <body>\n  <h1>404 - File ") - 1);
 FUNC_0("Not Found</h1>\n </body>\n</html>", sizeof("Not Found</h1>\n </body>\n</html>") - 1);
}
