
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {char* key; int user; } ;
struct plugin {int dummy; } ;
struct openvpn_plugin_args_func_in {scalar_t__ per_client_context; scalar_t__ handle; } ;
typedef int file ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*,char*) ;

__attribute__((used)) static void
FUNC_3(struct openvpn_plugin_args_func_in const *VAR_1)
{
    struct plugin *VAR_2 = (struct plugin *)VAR_1->handle;
    struct session *VAR_3 = (struct session *)VAR_1->per_client_context;

    char VAR_4[VAR_0];
    FUNC_2(VAR_4, sizeof(VAR_4) - 1, "/tmp/openvpn_sso_%s", VAR_3->key);
    FUNC_1("app session file: %s", VAR_4);
    FUNC_0(VAR_4, VAR_3->user);
}
