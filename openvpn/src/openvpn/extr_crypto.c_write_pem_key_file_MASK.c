
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int member_0; } ;
struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;
typedef int server_key ;


 char* FUNC_0 (struct buffer*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct buffer*) ;
 int FUNC_2 (struct buffer*,void*,int) ;
 int FUNC_3 (char const*,struct buffer*) ;
 struct buffer FUNC_4 () ;
 int FUNC_5 (char const*,struct buffer*,struct buffer*,struct gc_arena*) ;
 int FUNC_6 (struct gc_arena*) ;
 struct gc_arena FUNC_7 () ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (void*,int) ;
 int FUNC_11 (struct key*,int) ;
 scalar_t__ FUNC_12 (char const*,char*) ;

void
FUNC_13(const char *VAR_3, const char *VAR_4)
{
    struct gc_arena VAR_5 = FUNC_7();
    struct key VAR_6 = { 0 };
    struct buffer VAR_7 = FUNC_4();
    struct buffer VAR_8 = FUNC_4();

    if (!FUNC_10((void *)&VAR_6, sizeof(VAR_6)))
    {
        FUNC_8(VAR_1, "ERROR: could not generate random key");
        goto cleanup;
    }
    FUNC_2(&VAR_7, (void *)&VAR_6, sizeof(VAR_6));
    if (!FUNC_5(VAR_4, &VAR_8,
                           &VAR_7, &VAR_5))
    {
        FUNC_8(VAR_2, "ERROR: could not PEM-encode key");
        goto cleanup;
    }

    if (!VAR_3 || FUNC_12(VAR_3, "")==0)
    {
        FUNC_9("%s\n", FUNC_0(&VAR_8));
    }
    else if (!FUNC_3(VAR_3, &VAR_8))
    {
        FUNC_8(VAR_0, "ERROR: could not write key file");
        goto cleanup;
    }

cleanup:
    FUNC_11(&VAR_6, sizeof(VAR_6));
    FUNC_1(&VAR_8);
    FUNC_6(&VAR_5);
    return;
}
