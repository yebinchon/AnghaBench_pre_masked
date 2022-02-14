
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_url_map {char* prefix; int handler; } ;
struct lwan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct lwan*) ;
 int FUNC_1 (struct lwan*) ;
 int FUNC_2 (struct lwan*,struct lwan_url_map const*) ;
 int FUNC_3 (struct lwan*) ;

int FUNC_4(void)
{
    const struct lwan_url_map VAR_1[] = {
        {.prefix = "/", .handler = VAR_0},
        {.prefix = ((void*)0)}
    };
    struct lwan VAR_2;

    FUNC_0(&VAR_2);

    FUNC_2(&VAR_2, VAR_1);
    FUNC_1(&VAR_2);

    FUNC_3(&VAR_2);

    return 0;
}
