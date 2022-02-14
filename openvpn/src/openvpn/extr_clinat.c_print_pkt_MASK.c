
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct openvpn_iphdr {int daddr; int saddr; } ;
struct gc_arena {int dummy; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gc_arena*) ;
 struct gc_arena FUNC_1 () ;
 int FUNC_2 (int const,char*,char*,char const*,int ,int ) ;
 int FUNC_3 (int ,int ,struct gc_arena*) ;

__attribute__((used)) static void
FUNC_4(struct openvpn_iphdr *VAR_3, const char *VAR_4, const int VAR_5, const int VAR_6)
{
    struct gc_arena VAR_7 = FUNC_1();

    char *VAR_8 = "???";
    if (VAR_5 == VAR_1)
    {
        VAR_8 = "OUT";
    }
    else if (VAR_5 == VAR_0)
    {
        VAR_8 = "IN";
    }

    FUNC_2(VAR_6, "** CNAT %s %s %s -> %s",
        VAR_8,
        VAR_4,
        FUNC_3(VAR_3->saddr, VAR_2, &VAR_7),
        FUNC_3(VAR_3->daddr, VAR_2, &VAR_7));

    FUNC_0(&VAR_7);
}
