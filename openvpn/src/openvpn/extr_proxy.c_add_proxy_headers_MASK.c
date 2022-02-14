
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char const* user_agent; TYPE_1__* custom_headers; } ;
struct http_proxy_info {TYPE_2__ options; } ;
typedef int socket_descriptor_t ;
typedef int buf ;
struct TYPE_3__ {char const* name; scalar_t__ content; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,int,char*,char const*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*,char*,int) ;

__attribute__((used)) static bool
FUNC_5(struct http_proxy_info *VAR_2,
                  socket_descriptor_t VAR_3,
                  const char *VAR_4,
                  const char *VAR_5
                  )
{
    char VAR_6[512];
    int VAR_7;
    bool VAR_8 = 0;






    for (VAR_7 = 0; VAR_7 < VAR_1 && VAR_2->options.custom_headers[VAR_7].name; VAR_7++)
    {
        if (VAR_2->options.custom_headers[VAR_7].content)
        {
            FUNC_1(VAR_6, sizeof(VAR_6), "%s: %s",
                             VAR_2->options.custom_headers[VAR_7].name,
                             VAR_2->options.custom_headers[VAR_7].content);
            if (!FUNC_3(VAR_2->options.custom_headers[VAR_7].name, "Host"))
            {
                VAR_8 = 1;
            }
        }
        else
        {
            FUNC_1(VAR_6, sizeof(VAR_6), "%s",
                             VAR_2->options.custom_headers[VAR_7].name);
            if (!FUNC_4(VAR_2->options.custom_headers[VAR_7].name, "Host:", 5))
            {
                VAR_8 = 1;
            }
        }

        FUNC_0(VAR_0, "Send to HTTP proxy: '%s'", VAR_6);
        if (!FUNC_2(VAR_3, VAR_6))
        {
            return 0;
        }
    }

    if (!VAR_8)
    {
        FUNC_1(VAR_6, sizeof(VAR_6), "Host: %s", VAR_4);
        FUNC_0(VAR_0, "Send to HTTP proxy: '%s'", VAR_6);
        if (!FUNC_2(VAR_3, VAR_6))
        {
            return 0;
        }
    }


    if (VAR_2->options.user_agent)
    {
        FUNC_1(VAR_6, sizeof(VAR_6), "User-Agent: %s",
                         VAR_2->options.user_agent);
        FUNC_0(VAR_0, "Send to HTTP proxy: '%s'", VAR_6);
        if (!FUNC_2(VAR_3, VAR_6))
        {
            return 0;
        }
    }

    return 1;
}
