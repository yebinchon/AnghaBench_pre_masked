
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
typedef int in_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gc_arena*) ;
 struct gc_arena FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int,int ,struct gc_arena*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_5,
                 int VAR_6,
                 in_addr_t VAR_7,
                 in_addr_t VAR_8,
                 in_addr_t VAR_9)
{
    struct gc_arena VAR_10 = FUNC_1();
    if (VAR_7)
    {
        if (VAR_6 == VAR_1)
        {
            const in_addr_t VAR_11 = 0xFFFFFF00;
            const in_addr_t VAR_12 = VAR_7 & VAR_11;
            const in_addr_t VAR_13 = VAR_8 & VAR_11;
            const in_addr_t VAR_14 = VAR_9 & VAR_11;

            if (VAR_7 == VAR_8 || VAR_7 == VAR_9)
            {
                FUNC_2(VAR_3,
                    "WARNING: --%s address [%s] conflicts with --ifconfig address pair [%s, %s]. %s",
                    VAR_5,
                    FUNC_3(VAR_7, 0, &VAR_10),
                    FUNC_3(VAR_8, 0, &VAR_10),
                    FUNC_3(VAR_9, 0, &VAR_10),
                    VAR_4);
            }

            if (VAR_12 == VAR_13 || VAR_12 == VAR_14)
            {
                FUNC_2(VAR_3,
                    "WARNING: potential conflict between --%s address [%s] and --ifconfig address pair [%s, %s] -- this is a warning only that is triggered when local/remote addresses exist within the same /24 subnet as --ifconfig endpoints. %s",
                    VAR_5,
                    FUNC_3(VAR_7, 0, &VAR_10),
                    FUNC_3(VAR_8, 0, &VAR_10),
                    FUNC_3(VAR_9, 0, &VAR_10),
                    VAR_4);
            }
        }
        else if (VAR_6 == VAR_0)
        {
            const in_addr_t VAR_15 = VAR_7 & VAR_9;
            const in_addr_t VAR_16 = VAR_8 & VAR_9;
            if (VAR_15 == VAR_16)
            {
                FUNC_2(VAR_3,
                    "WARNING: --%s address [%s] conflicts with --ifconfig subnet [%s, %s] -- local and remote addresses cannot be inside of the --ifconfig subnet. %s",
                    VAR_5,
                    FUNC_3(VAR_7, 0, &VAR_10),
                    FUNC_3(VAR_8, 0, &VAR_10),
                    FUNC_3(VAR_9, 0, &VAR_10),
                    VAR_4);
            }
        }
    }
    FUNC_0(&VAR_10);
}
