
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lwan_request_parser_helper {int urls_rewritten; } ;
struct TYPE_2__ {scalar_t__ len; scalar_t__ value; } ;
struct lwan_request {TYPE_1__ url; int flags; struct lwan_request_parser_helper* helper; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct lwan_request*,int ) ;
 int FUNC_2 (struct lwan_request*,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct lwan_request *VAR_2)
{
    struct lwan_request_parser_helper *VAR_3 = VAR_2->helper;

    VAR_2->flags &= ~VAR_1;

    FUNC_2(VAR_2, VAR_2->url.value + VAR_2->url.len);

    VAR_3->urls_rewritten++;
    if (FUNC_0(VAR_3->urls_rewritten > 4)) {
        FUNC_1(VAR_2, VAR_0);
        return 0;
    }

    return 1;
}
