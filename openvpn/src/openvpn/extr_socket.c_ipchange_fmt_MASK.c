
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct link_socket_info {int ipchange_command; TYPE_4__* lsa; } ;
struct gc_arena {int dummy; } ;
struct argv {int dummy; } ;
struct TYPE_5__ {int sa; } ;
struct TYPE_6__ {TYPE_1__ addr; } ;
struct TYPE_7__ {TYPE_2__ dest; } ;
struct TYPE_8__ {TYPE_3__ actual; } ;


 int VAR_0 ;
 int FUNC_0 (struct argv*,int ) ;
 int FUNC_1 (struct argv*,char*,char const*) ;
 int FUNC_2 (struct argv*,char*,char const*) ;
 char* FUNC_3 (int *,char*,int ,struct gc_arena*) ;

__attribute__((used)) static void
FUNC_4(const bool VAR_1, struct argv *VAR_2, const struct link_socket_info *VAR_3, struct gc_arena *VAR_4)
{
    const char *VAR_5 = FUNC_3(&VAR_3->lsa->actual.dest.addr.sa, " ", VAR_0, VAR_4);
    if (VAR_1)
    {
        FUNC_0(VAR_2, VAR_3->ipchange_command);
        FUNC_2(VAR_2, "%s", VAR_5);
    }
    else
    {
        FUNC_1(VAR_2, "%s", VAR_5);
    }

}
