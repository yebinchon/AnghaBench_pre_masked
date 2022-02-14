
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct buffer*,int const,char*,int ) ;
 int FUNC_1 (struct gc_arena*) ;
 char* FUNC_2 (int ,int,struct gc_arena*) ;
 struct gc_arena FUNC_3 () ;
 int FUNC_4 (int const,char*,char const*,char const*,char const*,char const*,char const*) ;
 char* FUNC_5 (char const*,struct gc_arena*) ;
 char const* FUNC_6 (char const*,struct gc_arena*) ;
 int FUNC_7 (char const*,char const*) ;
 scalar_t__ FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*,char*) ;

__attribute__((used)) static void
FUNC_10(const int VAR_1,
                           const int VAR_2,
                           const bool VAR_3,
                           const char *VAR_4,
                           const struct buffer *VAR_5,
                           const char *VAR_6,
                           const char *VAR_7)
{




    if (FUNC_9(VAR_4, "key-method ")
        || FUNC_9(VAR_4, "keydir ")
        || FUNC_9(VAR_4, "proto ")
        || FUNC_9(VAR_4, "tls-auth ")
        || FUNC_9(VAR_4, "tun-ipv6"))
    {
        return;
    }

    if (FUNC_8(VAR_4) > 0)
    {
        struct gc_arena VAR_8 = FUNC_3();
        struct buffer VAR_9 = *VAR_5;
        const char *VAR_10 = FUNC_5(VAR_4, &VAR_8);
        char *VAR_11 = FUNC_2(VAR_0, 0, &VAR_8);

        while (FUNC_0(&VAR_9, VAR_2, VAR_11, VAR_0))
        {
            if (FUNC_8(VAR_11))
            {
                const char *VAR_12 = FUNC_5(VAR_11, &VAR_8);

                if (!FUNC_7(VAR_4, VAR_11))
                {
                    goto done;
                }
                if (!FUNC_7(VAR_10, VAR_12))
                {
                    if (VAR_3)
                    {
                        FUNC_4(VAR_1, "WARNING: '%s' is used inconsistently, %s='%s', %s='%s'",
                            FUNC_6(VAR_10, &VAR_8),
                            VAR_6,
                            FUNC_6(VAR_4, &VAR_8),
                            VAR_7,
                            FUNC_6(VAR_11, &VAR_8));
                    }
                    goto done;
                }
            }
        }

        FUNC_4(VAR_1, "WARNING: '%s' is present in %s config but missing in %s config, %s='%s'",
            FUNC_6(VAR_10, &VAR_8),
            VAR_6,
            VAR_7,
            VAR_6,
            FUNC_6(VAR_4, &VAR_8));

done:
        FUNC_1(&VAR_8);
    }
}
