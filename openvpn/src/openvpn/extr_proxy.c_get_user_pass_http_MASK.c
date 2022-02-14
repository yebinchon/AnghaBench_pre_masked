
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int defined; } ;
struct TYPE_4__ {int auth_file; scalar_t__ inline_creds; } ;
struct http_proxy_info {int queried_creds; TYPE_2__ up; TYPE_1__ options; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int ,int ,unsigned int) ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static void
FUNC_2(struct http_proxy_info *VAR_5, const bool VAR_6)
{




    if (VAR_6)
    {
        FUNC_0();
    }

    if (!VAR_4.defined)
    {
        unsigned int VAR_7 = VAR_1;
        if (VAR_5->queried_creds)
        {
            VAR_7 |= VAR_2;
        }
        if (VAR_5->options.inline_creds)
        {
            VAR_7 |= VAR_0;
        }
        FUNC_1(&VAR_4,
                      VAR_5->options.auth_file,
                      VAR_3,
                      VAR_7);
        VAR_5->queried_creds = 1;
        VAR_5->up = VAR_4;
    }
}
