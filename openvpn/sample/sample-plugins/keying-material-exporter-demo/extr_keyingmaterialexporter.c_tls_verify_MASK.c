
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int dummy; } ;
struct plugin {scalar_t__ type; } ;
struct openvpn_plugin_args_func_in {int current_cert; scalar_t__ per_client_context; scalar_t__ handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct session*,int ) ;

__attribute__((used)) static int
FUNC_2(struct openvpn_plugin_args_func_in const *VAR_3)
{
    struct plugin *VAR_4 = (struct plugin *)VAR_3->handle;
    struct session *VAR_5 = (struct session *)VAR_3->per_client_context;


    if (VAR_4->type != VAR_2)
    {
        return VAR_1;
    }

    if (!VAR_3->current_cert)
    {
        FUNC_0("this example plugin requires client certificate");
        return VAR_0;
    }

    FUNC_1(VAR_5, VAR_3->current_cert);

    return VAR_1;
}
