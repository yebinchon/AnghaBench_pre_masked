
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct client_nat_option_list {int n; struct client_nat_entry* entries; } ;
struct client_nat_entry {int foreign_network; int netmask; int network; int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct gc_arena*) ;
 struct gc_arena FUNC_1 () ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ,int ,struct gc_arena*) ;

void
FUNC_4(const struct client_nat_option_list *VAR_1, int VAR_2)
{
    struct gc_arena VAR_3 = FUNC_1();
    int VAR_4;

    FUNC_2(VAR_2, "*** CNAT list");
    if (VAR_1)
    {
        for (VAR_4 = 0; VAR_4 < VAR_1->n; ++VAR_4)
        {
            const struct client_nat_entry *VAR_5 = &VAR_1->entries[VAR_4];
            FUNC_2(VAR_2, "  CNAT[%d] t=%d %s/%s/%s",
                VAR_4,
                VAR_5->type,
                FUNC_3(VAR_5->network, VAR_0, &VAR_3),
                FUNC_3(VAR_5->netmask, VAR_0, &VAR_3),
                FUNC_3(VAR_5->foreign_network, VAR_0, &VAR_3));
        }
    }
    FUNC_0(&VAR_3);
}
