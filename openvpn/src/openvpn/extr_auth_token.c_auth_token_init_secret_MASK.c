
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_type {int dummy; } ;
struct key_ctx {int dummy; } ;
struct key {int dummy; } ;
struct buffer {int dummy; } ;
typedef int key ;


 int VAR_0 ;
 struct buffer FUNC_0 (int) ;
 struct key_type FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (struct buffer*,struct key*,int) ;
 int FUNC_3 (struct buffer*) ;
 int FUNC_4 (struct buffer*,int ) ;
 int FUNC_5 (struct key_ctx*,struct key*,struct key_type*,int,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct buffer*,int ,char const*,char const*) ;

void
FUNC_8(struct key_ctx *VAR_2, const char *VAR_3,
                       const char *VAR_4)
{
    struct key_type VAR_5 = FUNC_1();

    struct buffer VAR_6 = FUNC_0(2048);

    bool VAR_7 = 0;
    if (VAR_3)
    {
        VAR_7 = FUNC_7(&VAR_6,
                                       VAR_1,
                                       VAR_3, VAR_4);
    }
    else
    {
        VAR_7 = FUNC_4(&VAR_6,
                                            VAR_1);
    }

    if (!VAR_7)
    {
        FUNC_6(VAR_0, "ERROR: Cannot load auth-token secret");
    }

    struct key VAR_8;

    if (!FUNC_2(&VAR_6, &VAR_8, sizeof(VAR_8)))
    {
        FUNC_6(VAR_0, "ERROR: not enough data in auth-token secret");
    }
    FUNC_5(VAR_2, &VAR_8, &VAR_5, 0, "auth-token secret");

    FUNC_3(&VAR_6);
}
