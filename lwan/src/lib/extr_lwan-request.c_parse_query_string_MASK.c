
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_request_parser_helper {int query_params; int query_string; } ;
struct lwan_request {struct lwan_request_parser_helper* helper; } ;


 int FUNC_0 (struct lwan_request*,int *,int *,int ,char) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct lwan_request *VAR_1)
{
    struct lwan_request_parser_helper *VAR_2 = VAR_1->helper;

    FUNC_0(VAR_1, &VAR_2->query_string, &VAR_2->query_params,
                     VAR_0, '&');
}
