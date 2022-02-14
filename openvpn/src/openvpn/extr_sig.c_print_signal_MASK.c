
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct signal_info {char* signal_text; int source; int signal_received; } ;


 int FUNC_0 (int ) ;







 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int,int) ;

void
FUNC_3(const struct signal_info *VAR_0, const char *VAR_1, int VAR_2)
{
    if (VAR_0)
    {
        const char *VAR_3 = (VAR_0->signal_text ? VAR_0->signal_text : "");
        const char *VAR_4 = (VAR_1 ? VAR_1 : "process");
        const char *VAR_5 = ((void*)0);
        switch (VAR_0->source)
        {
            case 128:
                VAR_5 = "soft";
                break;

            case 129:
                VAR_5 = "hard";
                break;

            case 130:
                VAR_5 = "connection failed(soft)";
                break;

            default:
                FUNC_0(0);
        }

        switch (VAR_0->signal_received)
        {
            case 133:
            case 132:
                FUNC_1(VAR_2, "%s[%s,%s] received, %s exiting",
                    FUNC_2(VAR_0->signal_received, 1), VAR_5, VAR_3, VAR_4);
                break;

            case 134:
            case 131:
                FUNC_1(VAR_2, "%s[%s,%s] received, %s restarting",
                    FUNC_2(VAR_0->signal_received, 1), VAR_5, VAR_3, VAR_4);
                break;

            default:
                FUNC_1(VAR_2, "Unknown signal %d [%s,%s] received by %s", VAR_0->signal_received, VAR_5, VAR_3, VAR_4);
                break;
        }
    }
    else
    {
        FUNC_1(VAR_2, "Unknown signal received");
    }
}
