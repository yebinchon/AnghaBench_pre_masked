
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct rrdeng_page_descr {int page_length; TYPE_1__* pg_cache_descr; } ;
typedef scalar_t__ storage_number ;
struct TYPE_2__ {scalar_t__* page; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct rrdeng_page_descr *VAR_1)
{
    unsigned VAR_2;
    uint8_t VAR_3 = 1;
    storage_number *VAR_4;

    VAR_4 = VAR_1->pg_cache_descr->page;
    for (VAR_2 = 0 ; VAR_2 < VAR_1->page_length / sizeof(storage_number); ++VAR_2) {
        if (VAR_0 != VAR_4[VAR_2]) {
            VAR_3 = 0;
            break;
        }
    }
    return VAR_3;
}
