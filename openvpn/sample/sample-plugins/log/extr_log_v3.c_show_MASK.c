
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

void
FUNC_1(const int VAR_0, const char *VAR_1[], const char *VAR_2[])
{
    size_t VAR_3;
    switch (VAR_0)
    {
        case 128:
            FUNC_0("OPENVPN_PLUGIN_UP\n");
            break;

        case 134:
            FUNC_0("OPENVPN_PLUGIN_DOWN\n");
            break;

        case 131:
            FUNC_0("OPENVPN_PLUGIN_ROUTE_UP\n");
            break;

        case 133:
            FUNC_0("OPENVPN_PLUGIN_IPCHANGE\n");
            break;

        case 129:
            FUNC_0("OPENVPN_PLUGIN_TLS_VERIFY\n");
            break;

        case 137:
            FUNC_0("OPENVPN_PLUGIN_AUTH_USER_PASS_VERIFY\n");
            break;

        case 136:
            FUNC_0("OPENVPN_PLUGIN_CLIENT_CONNECT_V2\n");
            break;

        case 135:
            FUNC_0("OPENVPN_PLUGIN_CLIENT_DISCONNECT\n");
            break;

        case 132:
            FUNC_0("OPENVPN_PLUGIN_LEARN_ADDRESS\n");
            break;

        case 130:
            FUNC_0("OPENVPN_PLUGIN_TLS_FINAL\n");
            break;

        default:
            FUNC_0("OPENVPN_PLUGIN_?\n");
            break;
    }

    FUNC_0("ARGV\n");
    for (VAR_3 = 0; VAR_1[VAR_3] != ((void*)0); ++VAR_3)
    {
        FUNC_0("%d '%s'\n", (int)VAR_3, VAR_1[VAR_3]);
    }

    FUNC_0("ENVP\n");
    for (VAR_3 = 0; VAR_2[VAR_3] != ((void*)0); ++VAR_3)
    {
        FUNC_0("%d '%s'\n", (int)VAR_3, VAR_2[VAR_3]);
    }
}
