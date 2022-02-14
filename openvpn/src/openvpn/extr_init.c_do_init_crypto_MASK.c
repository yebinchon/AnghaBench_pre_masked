
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tls_client; scalar_t__ tls_server; scalar_t__ shared_secret_file; } ;
struct context {TYPE_1__ options; } ;


 int FUNC_0 (struct context*) ;
 int FUNC_1 (struct context*,unsigned int const) ;
 int FUNC_2 (struct context*,unsigned int const) ;

__attribute__((used)) static void
FUNC_3(struct context *VAR_0, const unsigned int VAR_1)
{
    if (VAR_0->options.shared_secret_file)
    {
        FUNC_1(VAR_0, VAR_1);
    }
    else if (VAR_0->options.tls_server || VAR_0->options.tls_client)
    {
        FUNC_2(VAR_0, VAR_1);
    }
    else
    {
        FUNC_0(VAR_0);
    }
}
