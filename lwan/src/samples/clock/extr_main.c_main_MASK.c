
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_url_map {char* prefix; int member_1; struct index* data; int handler; } ;
struct lwan {int dummy; } ;
struct index {char* title; char* variant; int width; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct lwan*) ;
 int FUNC_3 (struct lwan*) ;
 int FUNC_4 (struct lwan*,struct lwan_url_map const*) ;
 int FUNC_5 (struct lwan*) ;
 int VAR_3 ;

int FUNC_6(void)
{
    struct index VAR_4 = {
        .title = "Lwan Sample Clock",
        .variant = "clock",
        .width = 200,
    };
    struct index VAR_5 = {
        .title = "Lwan Dali Clock",
        .variant = "dali",
        .width = 320,
    };
    struct index VAR_6 = {
        .title = "Lwan Blocks Clock",
        .variant = "blocks",
        .width = 320,
    };
    const struct lwan_url_map VAR_7[] = {
        {
            .prefix = "/clock.gif",
            .handler = FUNC_0(VAR_1),
        },
        {
            .prefix = "/dali.gif",
            .handler = FUNC_0(VAR_2),
        },
        {
            .prefix = "/blocks.gif",
            .handler = FUNC_0(VAR_0),
        },
        {
            .prefix = "/clock",
            .handler = FUNC_0(VAR_3),
            .data = &VAR_4,
        },
        {
            .prefix = "/dali",
            .handler = FUNC_0(VAR_3),
            .data = &VAR_5,
        },
        {
            .prefix = "/blocks",
            .handler = FUNC_0(VAR_3),
            .data = &VAR_6,
        },
        {
            .prefix = "/",
            FUNC_1("/clock"),
        },
        {},
    };
    struct lwan VAR_8;

    FUNC_2(&VAR_8);

    FUNC_4(&VAR_8, VAR_7);
    FUNC_3(&VAR_8);

    FUNC_5(&VAR_8);

    return 0;
}
