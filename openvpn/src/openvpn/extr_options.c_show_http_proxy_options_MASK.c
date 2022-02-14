
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct http_proxy_options {TYPE_1__* custom_headers; } ;
struct TYPE_2__ {scalar_t__ name; scalar_t__ content; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_2(const struct http_proxy_options *VAR_8)
{
    int VAR_9;
    FUNC_1(VAR_0, "BEGIN http_proxy");
    FUNC_0(VAR_6);
    FUNC_0(VAR_5);
    FUNC_0(VAR_3);
    FUNC_0(VAR_2);
    FUNC_0(VAR_4);
    FUNC_0(VAR_7);
    for (VAR_9 = 0; VAR_9 < VAR_1 && VAR_8->custom_headers[VAR_9].name; VAR_9++)
    {
        if (VAR_8->custom_headers[VAR_9].content)
        {
            FUNC_1(VAR_0, "  custom_header[%d] = %s: %s", VAR_9,
                VAR_8->custom_headers[VAR_9].name, VAR_8->custom_headers[VAR_9].content);
        }
        else
        {
            FUNC_1(VAR_0, "  custom_header[%d] = %s", VAR_9,
                VAR_8->custom_headers[VAR_9].name);
        }
    }
    FUNC_1(VAR_0, "END http_proxy");
}
