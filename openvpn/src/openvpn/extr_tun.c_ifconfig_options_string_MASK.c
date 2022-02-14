
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap {scalar_t__ type; scalar_t__ topology; int local; int remote_netmask; scalar_t__ did_ifconfig_setup; } ;
struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;


 char const* FUNC_0 (struct buffer*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct buffer FUNC_1 (int,struct gc_arena*) ;
 int FUNC_2 (struct buffer*,char*,...) ;
 char* FUNC_3 (int,int ,struct gc_arena*) ;

const char *
FUNC_4(const struct tuntap *VAR_3, bool VAR_4, bool VAR_5, struct gc_arena *VAR_6)
{
    struct buffer VAR_7 = FUNC_1(256, VAR_6);
    if (VAR_3->did_ifconfig_setup && !VAR_5)
    {
        if (VAR_3->type == VAR_0 || (VAR_3->type == VAR_1 && VAR_3->topology == VAR_2))
        {
            FUNC_2(&VAR_7, "%s %s",
                       FUNC_3(VAR_3->local & VAR_3->remote_netmask, 0, VAR_6),
                       FUNC_3(VAR_3->remote_netmask, 0, VAR_6));
        }
        else if (VAR_3->type == VAR_1)
        {
            const char *VAR_8, *VAR_9;
            if (VAR_4)
            {
                VAR_9 = FUNC_3(VAR_3->local, 0, VAR_6);
                VAR_8 = FUNC_3(VAR_3->remote_netmask, 0, VAR_6);
            }
            else
            {
                VAR_8 = FUNC_3(VAR_3->local, 0, VAR_6);
                VAR_9 = FUNC_3(VAR_3->remote_netmask, 0, VAR_6);
            }
            FUNC_2(&VAR_7, "%s %s", VAR_9, VAR_8);
        }
        else
        {
            FUNC_2(&VAR_7, "[undef]");
        }
    }
    return FUNC_0(&VAR_7);
}
