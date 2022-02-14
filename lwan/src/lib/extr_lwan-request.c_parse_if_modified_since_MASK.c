
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_3__ {size_t const len; int value; } ;
struct TYPE_4__ {int parsed; TYPE_1__ raw; } ;
struct lwan_request_parser_helper {TYPE_2__ if_modified_since; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct lwan_request_parser_helper *VAR_0)
{
    static const size_t VAR_1 =
        sizeof("Wed, 17 Apr 2019 13:59:27 GMT") - 1;
    time_t VAR_2;

    if (FUNC_0(VAR_0->if_modified_since.raw.len != VAR_1))
        return;

    if (FUNC_0(FUNC_1(VAR_0->if_modified_since.raw.value,
                                     &VAR_2) < 0))
        return;

    VAR_0->if_modified_since.parsed = VAR_2;
}
