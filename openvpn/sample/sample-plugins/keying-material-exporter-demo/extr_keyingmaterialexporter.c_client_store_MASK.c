
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int key; } ;
struct plugin {int dummy; } ;
struct openvpn_plugin_args_func_in {scalar_t__ per_client_context; scalar_t__ handle; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2(struct openvpn_plugin_args_func_in const *VAR_0)
{
    struct plugin *VAR_1 = (struct plugin *)VAR_0->handle;
    struct session *VAR_2 = (struct session *)VAR_0->per_client_context;

    char *VAR_3 = "/tmp/openvpn_sso_user";
    FUNC_1("app session file: %s", VAR_3);
    FUNC_0(VAR_3, VAR_2->key);
}
