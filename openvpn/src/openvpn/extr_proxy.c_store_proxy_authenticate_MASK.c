
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_proxy_info {char* proxy_authenticate; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(struct http_proxy_info *VAR_0, char *VAR_1)
{
    if (VAR_0->proxy_authenticate)
    {
        FUNC_0(VAR_0->proxy_authenticate);
    }
    VAR_0->proxy_authenticate = VAR_1;
}
