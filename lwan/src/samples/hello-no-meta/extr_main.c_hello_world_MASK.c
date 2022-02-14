
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_response {char* mime_type; int buffer; } ;
struct lwan_request {int dummy; } ;
typedef int message ;
typedef enum lwan_http_status { ____Placeholder_lwan_http_status } lwan_http_status ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int) ;

__attribute__((used)) static enum lwan_http_status FUNC_1(struct lwan_request *VAR_1
                                         __attribute__((unused)),
                                         struct lwan_response *VAR_2,
                                         void *VAR_3 __attribute__((unused)))
{
    static const char VAR_4[] = "Hello, World!";

    VAR_2->mime_type = "text/plain";
    FUNC_0(VAR_2->buffer, VAR_4, sizeof(VAR_4) - 1);

    return VAR_0;
}
