
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client_nat_option_list {int dummy; } ;
struct client_nat_entry {void* foreign_network; void* netmask; void* network; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct client_nat_option_list*,struct client_nat_entry*) ;
 void* FUNC_1 (int ,char const*,int ,int*,int *) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (char const*,char*) ;

void
FUNC_4(struct client_nat_option_list *VAR_2,
                              const char *VAR_3,
                              const char *VAR_4,
                              const char *VAR_5,
                              const char *VAR_6,
                              int VAR_7)
{
    struct client_nat_entry VAR_8;
    bool VAR_9;

    if (!FUNC_3(VAR_3, "snat"))
    {
        VAR_8.type = VAR_1;
    }
    else if (!FUNC_3(VAR_3, "dnat"))
    {
        VAR_8.type = VAR_0;
    }
    else
    {
        FUNC_2(VAR_7, "client-nat: type must be 'snat' or 'dnat'");
        return;
    }

    VAR_8.network = FUNC_1(0, VAR_4, 0, &VAR_9, ((void*)0));
    if (!VAR_9)
    {
        FUNC_2(VAR_7, "client-nat: bad network: %s", VAR_4);
        return;
    }
    VAR_8.netmask = FUNC_1(0, VAR_5, 0, &VAR_9, ((void*)0));
    if (!VAR_9)
    {
        FUNC_2(VAR_7, "client-nat: bad netmask: %s", VAR_5);
        return;
    }
    VAR_8.foreign_network = FUNC_1(0, VAR_6, 0, &VAR_9, ((void*)0));
    if (!VAR_9)
    {
        FUNC_2(VAR_7, "client-nat: bad foreign network: %s", VAR_6);
        return;
    }

    FUNC_0(VAR_2, &VAR_8);
}
