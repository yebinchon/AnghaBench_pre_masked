
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum lwan_http_status { ____Placeholder_lwan_http_status } lwan_http_status ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static enum lwan_http_status FUNC_3(const char *VAR_0,
                                             enum lwan_http_status VAR_1)
{
    const char *VAR_2;
    int VAR_3;

    if (!VAR_0)
        return VAR_1;

    VAR_3 = FUNC_1(VAR_0, 999);
    if (VAR_3 == 999)
        return VAR_1;

    VAR_2 = FUNC_0((enum lwan_http_status)VAR_3);
    if (!FUNC_2(VAR_2, "999", 3))
        return VAR_1;

    return (enum lwan_http_status)VAR_3;
}
