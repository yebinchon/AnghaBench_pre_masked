
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int user; int key; } ;
struct plugin {int type; } ;
struct openvpn_plugin_args_func_return {int dummy; } ;
struct openvpn_plugin_args_func_in {int envp; scalar_t__ per_client_context; scalar_t__ handle; } ;



 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct openvpn_plugin_args_func_in const*) ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct openvpn_plugin_args_func_in const*) ;
 int FUNC_4 (int ,int,char*,char const*) ;

__attribute__((used)) static int
FUNC_5(struct openvpn_plugin_args_func_in const *VAR_2,
          struct openvpn_plugin_args_func_return *VAR_3)
{
    struct plugin *VAR_4 = (struct plugin *)VAR_2->handle;
    struct session *VAR_5 = (struct session *)VAR_2->per_client_context;

    const char *VAR_6;
    if (!(VAR_6 = FUNC_1("exported_keying_material", VAR_2->envp)))
    {
        return VAR_0;
    }

    FUNC_4(VAR_5->key, sizeof(VAR_5->key) - 1, "%s", VAR_6);
    FUNC_2("app session key:  %s", VAR_5->key);

    switch (VAR_4->type)
    {
        case 128:
            FUNC_3(VAR_2);
            break;

        case 129:
            FUNC_0(VAR_2);
            return VAR_1;
    }

    FUNC_2("app session user: %s", VAR_5->user);
    return VAR_1;
}
