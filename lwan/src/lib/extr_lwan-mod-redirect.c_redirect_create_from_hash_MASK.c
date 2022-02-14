
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_redirect_settings {int code; int to; } ;
struct hash {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hash const*,char*) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (char const*,struct lwan_redirect_settings*) ;

__attribute__((used)) static void *FUNC_3(const char *VAR_1,
                                       const struct hash *VAR_2)
{
    struct lwan_redirect_settings VAR_3 = {
        .to = FUNC_0(VAR_2, "to"),
        .code =
            FUNC_1(FUNC_0(VAR_2, "code"), VAR_0),
    };

    return FUNC_2(VAR_1, &VAR_3);
}
