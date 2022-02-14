
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ intl_end; int bandwidth; int intl_bytes; int bytes; } ;
typedef TYPE_1__ ngx_rtmp_bandwidth_t ;
struct TYPE_5__ {scalar_t__ sec; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;

void
FUNC_0(ngx_rtmp_bandwidth_t *VAR_2, uint32_t VAR_3)
{
    if (VAR_1->sec > VAR_2->intl_end) {
        VAR_2->bandwidth = VAR_1->sec >
            VAR_2->intl_end + VAR_0
            ? 0
            : VAR_2->intl_bytes / VAR_0;
        VAR_2->intl_bytes = 0;
        VAR_2->intl_end = VAR_1->sec + VAR_0;
    }

    VAR_2->bytes += VAR_3;
    VAR_2->intl_bytes += VAR_3;
}
