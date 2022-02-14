
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plugin_list {int dummy; } ;
struct gc_arena {int dummy; } ;
struct env_set {int dummy; } ;
struct argv {int dummy; } ;
typedef int DWORD ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct argv*) ;
 struct argv FUNC_2 () ;
 int FUNC_3 (struct argv*,char const*) ;
 int FUNC_4 (struct argv*,char*,char const*,int,int,char const*,char const*,char const*) ;
 int FUNC_5 (struct argv*,char*,char const*,int,int,char const*,char const*,char const*) ;
 int FUNC_6 (struct argv*) ;
 int FUNC_7 (struct gc_arena*) ;
 struct gc_arena FUNC_8 () ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct argv*,struct env_set*,int ,char*) ;
 scalar_t__ FUNC_11 (struct plugin_list const*,int,struct argv*,int *,struct env_set*) ;
 scalar_t__ FUNC_12 (struct plugin_list const*,int) ;
 int FUNC_13 (struct env_set*,char*,int) ;
 int FUNC_14 (struct env_set*,char*,char const*) ;

__attribute__((used)) static void
FUNC_15(const char *VAR_4,
            const struct plugin_list *VAR_5,
            int VAR_6,
            const char *VAR_7,



            const char *VAR_8,
            int VAR_9,
            int VAR_10,
            const char *VAR_11,
            const char *VAR_12,
            const char *VAR_13,
            const char *VAR_14,
            const char *VAR_15,
            struct env_set *VAR_16)
{
    struct gc_arena VAR_17 = FUNC_8();

    if (VAR_14)
    {
        FUNC_14(VAR_16, "signal", VAR_14);
    }
    FUNC_14(VAR_16, "script_context", VAR_13);
    FUNC_13(VAR_16, "tun_mtu", VAR_9);
    FUNC_13(VAR_16, "link_mtu", VAR_10);
    FUNC_14(VAR_16, "dev", VAR_7);
    if (VAR_8)
    {
        FUNC_14(VAR_16, "dev_type", VAR_8);
    }




    if (!VAR_11)
    {
        VAR_11 = "";
    }
    if (!VAR_12)
    {
        VAR_12 = "";
    }
    if (!VAR_13)
    {
        VAR_13 = "";
    }

    if (FUNC_12(VAR_5, VAR_6))
    {
        struct argv VAR_18 = FUNC_2();
        FUNC_0(VAR_7);
        FUNC_4(&VAR_18,
                    "%s %d %d %s %s %s",
                    VAR_7,
                    VAR_9, VAR_10,
                    VAR_11, VAR_12,
                    VAR_13);

        if (FUNC_11(VAR_5, VAR_6, &VAR_18, ((void*)0), VAR_16) != VAR_2)
        {
            FUNC_9(VAR_0, "ERROR: up/down plugin call failed");
        }

        FUNC_6(&VAR_18);
    }

    if (VAR_4)
    {
        struct argv VAR_19 = FUNC_2();
        FUNC_0(VAR_7);
        FUNC_14(VAR_16, "script_type", VAR_15);
        FUNC_3(&VAR_19, VAR_4);
        FUNC_5(&VAR_19, "%s %d %d %s %s %s", VAR_7, VAR_9, VAR_10,
                        VAR_11, VAR_12, VAR_13);
        FUNC_1(VAR_1, &VAR_19);
        FUNC_10(&VAR_19, VAR_16, VAR_3, "--up/--down");
        FUNC_6(&VAR_19);
    }

    FUNC_7(&VAR_17);
}
