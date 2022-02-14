
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
typedef int in_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gc_arena*) ;
 struct gc_arena FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 (int,int ,struct gc_arena*) ;

__attribute__((used)) static void
FUNC_4(bool VAR_4, in_addr_t VAR_5, int VAR_6)
{
    struct gc_arena VAR_7 = FUNC_1();
    const bool VAR_8 = ((VAR_5 & 0xFF000000) == 0xFF000000);
    if (VAR_4)
    {
        if (VAR_8 && (VAR_6 == VAR_1 || VAR_6 == VAR_2))
        {
            FUNC_2(VAR_0, "WARNING: Since you are using --dev tun with a point-to-point topology, the second argument to --ifconfig must be an IP address.  You are using something (%s) that looks more like a netmask. %s",
                FUNC_3(VAR_5, 0, &VAR_7),
                VAR_3);
        }
    }
    else
    {
        if (!VAR_8)
        {
            FUNC_2(VAR_0, "WARNING: Since you are using --dev tap, the second argument to --ifconfig must be a netmask, for example something like 255.255.255.0. %s",
                VAR_3);
        }
    }
    FUNC_0(&VAR_7);
}
