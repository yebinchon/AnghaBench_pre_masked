
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_response {char* mime_type; int buffer; } ;
typedef enum lwan_http_status { ____Placeholder_lwan_http_status } lwan_http_status ;
typedef int JsonNode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int *,size_t*) ;
 int FUNC_4 (int ,char*,size_t) ;

__attribute__((used)) static enum lwan_http_status
FUNC_5(struct lwan_response *VAR_2, JsonNode *VAR_3)
{
    size_t VAR_4;
    char *VAR_5;

    VAR_5 = FUNC_3(VAR_3, ((void*)0), &VAR_4);
    FUNC_2(VAR_3);
    if (FUNC_0(!VAR_5))
        return VAR_0;

    FUNC_4(VAR_2->buffer, VAR_5, VAR_4);
    FUNC_1(VAR_5);

    VAR_2->mime_type = "application/json";
    return VAR_1;
}
