
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct env_set {int dummy; } ;


 int FUNC_0 (struct env_set*) ;
 int VAR_0 ;
 char* FUNC_1 (char const*,char const*,struct gc_arena*) ;
 int FUNC_2 (struct env_set*,char const*) ;
 int FUNC_3 (struct env_set*,char const*) ;
 int FUNC_4 (struct gc_arena*) ;
 struct gc_arena FUNC_5 () ;
 int FUNC_6 (int ,char*,char const*) ;
 char* FUNC_7 (char const*,unsigned int const,unsigned int const,char const,struct gc_arena*) ;
 int FUNC_8 (char const*) ;

void
FUNC_9(struct env_set *VAR_1,
              const char *VAR_2,
              const char *VAR_3,
              const unsigned int VAR_4,
              const unsigned int VAR_5,
              const char VAR_6,
              const unsigned int VAR_7,
              const unsigned int VAR_8,
              const char VAR_9)
{
    struct gc_arena VAR_10 = FUNC_5();
    const char *VAR_11;
    const char *VAR_12 = ((void*)0);

    FUNC_0(VAR_2 && FUNC_8(VAR_2) > 1);

    VAR_11 = FUNC_7(VAR_2, VAR_4, VAR_5, VAR_6, &VAR_10);

    if (VAR_3)
    {
        VAR_12 = FUNC_7(VAR_3, VAR_7, VAR_8, VAR_9, &VAR_10);
    }

    FUNC_0(VAR_1);

    if (VAR_12)
    {
        const char *VAR_13 = FUNC_1(VAR_11, VAR_12, &VAR_10);
        FUNC_2(VAR_1, VAR_13);



    }
    else
    {
        FUNC_3(VAR_1, VAR_11);
    }

    FUNC_4(&VAR_10);
}
