
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_bool ;
typedef int smart_str ;
typedef int php_stream_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

void FUNC_7(php_stream_context* VAR_1,
                          zend_bool VAR_2,
                          zend_bool VAR_3,
                          zend_bool VAR_4,
                          smart_str* VAR_5)
{
 zval *VAR_6;

 if (VAR_1 &&
  (VAR_6 = FUNC_3(VAR_1, "http", "header")) != ((void*)0) &&
  FUNC_2(VAR_6) == VAR_0 && FUNC_0(VAR_6)) {
  char *VAR_7 = FUNC_1(VAR_6);
  char *VAR_8;
  int VAR_9;

  while (*VAR_7) {

   while (*VAR_7 == ' ' || *VAR_7 == '\t' || *VAR_7 == '\r' || *VAR_7 == '\n') {
    VAR_7++;
   }

   VAR_8 = VAR_7;
   VAR_9 = -1;
   while (*VAR_8) {
    if (*VAR_8 == ':') {
     if (VAR_9 < 0) VAR_9 = VAR_8 - VAR_7;
     break;
    } else if (*VAR_8 == ' ' || *VAR_8 == '\t') {
     if (VAR_9 < 0) VAR_9 = VAR_8 - VAR_7;
    } else if (*VAR_8 == '\r' || *VAR_8 == '\n') {
     break;
    }
    VAR_8++;
   }
   if (*VAR_8 == ':') {

    while (*VAR_8 && *VAR_8 != '\r' && *VAR_8 != '\n') {
     VAR_8++;
    }

    if ((VAR_9 != sizeof("host")-1 ||
         FUNC_6(VAR_7, "host", sizeof("host")-1) != 0) &&
        (VAR_9 != sizeof("connection")-1 ||
         FUNC_6(VAR_7, "connection", sizeof("connection")-1) != 0) &&
        (VAR_9 != sizeof("user-agent")-1 ||
         FUNC_6(VAR_7, "user-agent", sizeof("user-agent")-1) != 0) &&
        (VAR_9 != sizeof("content-length")-1 ||
         FUNC_6(VAR_7, "content-length", sizeof("content-length")-1) != 0) &&
        (VAR_9 != sizeof("content-type")-1 ||
         FUNC_6(VAR_7, "content-type", sizeof("content-type")-1) != 0) &&
        (!VAR_4 ||
         VAR_9 != sizeof("cookie")-1 ||
         FUNC_6(VAR_7, "cookie", sizeof("cookie")-1) != 0) &&
        (!VAR_2 ||
         VAR_9 != sizeof("authorization")-1 ||
         FUNC_6(VAR_7, "authorization", sizeof("authorization")-1) != 0) &&
        (!VAR_3 ||
         VAR_9 != sizeof("proxy-authorization")-1 ||
         FUNC_6(VAR_7, "proxy-authorization", sizeof("proxy-authorization")-1) != 0)) {

     FUNC_5(VAR_5, VAR_7, VAR_8-VAR_7);
     FUNC_4(VAR_5, "\r\n");
    }
   }
   VAR_7 = (*VAR_8) ? (VAR_8 + 1) : VAR_8;
  }
 }
}
