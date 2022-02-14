
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_4__ {int err; } ;
typedef TYPE_1__ ngx_rtmp_bit_reader_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;

uint64_t
FUNC_1(ngx_rtmp_bit_reader_t *VAR_0)
{
    ngx_uint_t VAR_1;

    for (VAR_1 = 0; FUNC_0(VAR_0, 1) == 0 && !VAR_0->err; VAR_1++);

    return ((uint64_t) 1 << VAR_1) + FUNC_0(VAR_0, VAR_1) - 1;
}
