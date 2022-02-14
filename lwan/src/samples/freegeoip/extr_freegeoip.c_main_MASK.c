
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct template_mime {int tpl; } ;
struct lwan_url_map {char* prefix; int member_1; struct template_mime* data; int handler; } ;
struct lwan {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int ) ;
 struct template_mime FUNC_4 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct lwan*) ;
 int FUNC_6 (struct lwan*) ;
 int FUNC_7 (struct lwan*,struct lwan_url_map const*) ;
 int FUNC_8 (struct lwan*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ) ;
 int VAR_11 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,int *,int ,int *) ;
 int VAR_12 ;
 int VAR_13 ;

int FUNC_15(void)
{
    struct lwan VAR_14;

    FUNC_5(&VAR_14);

    struct template_mime VAR_15 =
        FUNC_4(VAR_10, "application/json; charset=UTF-8");
    struct template_mime VAR_16 =
        FUNC_4(VAR_6, "application/csv; charset=UTF-8");
    struct template_mime VAR_17 =
        FUNC_4(VAR_13, "text/plain; charset=UTF-8");

    int VAR_18 =
        FUNC_14("./db/ipdb.sqlite", &VAR_7, VAR_2, ((void*)0));
    if (VAR_18 != VAR_1)
        FUNC_9("Could not open database: %s", FUNC_13(VAR_7));
    VAR_3 = FUNC_2(VAR_4, VAR_8, ((void*)0), 10);







    FUNC_10("Rate-limiting disabled");


    const struct lwan_url_map VAR_19[] = {
        {.prefix = "/json/",
         .handler = FUNC_0(VAR_12),
         .data = &VAR_15},
        {.prefix = "/xml/",
         .handler = FUNC_0(VAR_12),
         .data = &VAR_17},
        {.prefix = "/csv/",
         .handler = FUNC_0(VAR_12),
         .data = &VAR_16},
        {.prefix = "/", FUNC_1("./static")},
        {.prefix = ((void*)0)},
    };

    FUNC_7(&VAR_14, VAR_19);
    FUNC_6(&VAR_14);
    FUNC_8(&VAR_14);

    FUNC_11(VAR_15.tpl);
    FUNC_11(VAR_17.tpl);
    FUNC_11(VAR_16.tpl);



    FUNC_3(VAR_3);
    FUNC_12(VAR_7);

    return 0;
}
