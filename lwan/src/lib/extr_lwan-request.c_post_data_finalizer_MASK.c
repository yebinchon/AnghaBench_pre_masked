
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_request_parser_helper {scalar_t__ error_when_time; int error_when_n_packets; } ;
struct lwan_request {struct lwan_request_parser_helper* helper; } ;
typedef enum lwan_read_finalizer { ____Placeholder_lwan_read_finalizer } lwan_read_finalizer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static enum lwan_read_finalizer
FUNC_2(size_t VAR_3,
                    size_t VAR_4,
                    struct lwan_request *VAR_5,
                    int VAR_6)
{
    struct lwan_request_parser_helper *VAR_7 = VAR_5->helper;

    if (VAR_4 == VAR_3)
        return VAR_0;




    if (FUNC_0(FUNC_1(((void*)0)) > VAR_7->error_when_time))
        return VAR_1;



    if (FUNC_0(VAR_6 > VAR_7->error_when_n_packets))
        return VAR_1;

    return VAR_2;
}
