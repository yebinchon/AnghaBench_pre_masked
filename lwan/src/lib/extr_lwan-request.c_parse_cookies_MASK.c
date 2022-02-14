
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lwan_value {char* value; int len; } ;
struct lwan_request {TYPE_1__* helper; } ;
struct TYPE_2__ {int cookies; } ;


 int VAR_0 ;
 char* FUNC_0 (struct lwan_request*,char*) ;
 int FUNC_1 (struct lwan_request*,struct lwan_value*,int *,int ,char) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(struct lwan_request *VAR_1)
{
    const char *VAR_2 = FUNC_0(VAR_1, "Cookie");

    if (!VAR_2)
        return;

    struct lwan_value VAR_3 = {.value = (char *)VAR_2,
                                .len = FUNC_2(VAR_2)};
    FUNC_1(VAR_1, &VAR_3, &VAR_1->helper->cookies,
                     VAR_0, ';');
}
