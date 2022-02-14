
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link_socket_info {int connection_established; scalar_t__ ipchange_command; int plugins; TYPE_1__* lsa; } ;
struct link_socket_actual {int dummy; } ;
struct gc_arena {int dummy; } ;
struct env_set {int dummy; } ;
struct buffer {int dummy; } ;
struct argv {int dummy; } ;
struct TYPE_2__ {struct link_socket_actual actual; } ;


 int FUNC_0 (struct buffer*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct buffer FUNC_1 (int,struct gc_arena*) ;
 struct argv FUNC_2 () ;
 int FUNC_3 (struct argv*) ;
 int FUNC_4 (struct buffer*,char*,char const*) ;
 int FUNC_5 (struct gc_arena*) ;
 struct gc_arena FUNC_6 () ;
 int FUNC_7 (int,struct argv*,struct link_socket_info*,struct gc_arena*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (struct argv*,struct env_set*,int ,char*) ;
 scalar_t__ FUNC_10 (int ,int ,struct argv*,int *,struct env_set*) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 char const* FUNC_12 (struct link_socket_actual*,struct gc_arena*) ;
 int FUNC_13 (struct env_set*,char*,char const*) ;
 int FUNC_14 (struct env_set*,struct link_socket_info*) ;

void
FUNC_15(const struct buffer *VAR_4,
                                 struct link_socket_info *VAR_5,
                                 const struct link_socket_actual *VAR_6,
                                 const char *VAR_7,
                                 struct env_set *VAR_8)
{
    struct gc_arena VAR_9 = FUNC_6();

    VAR_5->lsa->actual = *VAR_6;
    FUNC_14(VAR_8, VAR_5);
    VAR_5->connection_established = 1;


    {
        struct buffer VAR_10 = FUNC_1(256, &VAR_9);
        if (VAR_7)
        {
            FUNC_4(&VAR_10, "[%s] ", VAR_7);
        }
        FUNC_4(&VAR_10, "Peer Connection Initiated with %s", FUNC_12(&VAR_5->lsa->actual, &VAR_9));
        FUNC_8(VAR_0, "%s", FUNC_0(&VAR_10));
    }


    FUNC_13(VAR_8, "common_name", VAR_7);


    if (FUNC_11(VAR_5->plugins, VAR_3))
    {
        struct argv VAR_11 = FUNC_2();
        FUNC_7(0, &VAR_11, VAR_5, &VAR_9);
        if (FUNC_10(VAR_5->plugins, VAR_3, &VAR_11, ((void*)0), VAR_8) != VAR_2)
        {
            FUNC_8(VAR_1, "WARNING: ipchange plugin call failed");
        }
        FUNC_3(&VAR_11);
    }


    if (VAR_5->ipchange_command)
    {
        struct argv VAR_12 = FUNC_2();
        FUNC_13(VAR_8, "script_type", "ipchange");
        FUNC_7(1, &VAR_12, VAR_5, &VAR_9);
        FUNC_9(&VAR_12, VAR_8, 0, "--ipchange");
        FUNC_3(&VAR_12);
    }

    FUNC_5(&VAR_9);
}
