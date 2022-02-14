
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ encoding; int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_8__ {scalar_t__ hash_max_ziplist_value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__ VAR_2 ;

void FUNC_3(robj *VAR_3, robj **VAR_4, int VAR_5, int VAR_6) {
    int VAR_7;

    if (VAR_3->encoding != VAR_1) return;

    for (VAR_7 = VAR_5; VAR_7 <= VAR_6; VAR_7++) {
        if (FUNC_1(VAR_4[VAR_7]) &&
            FUNC_2(VAR_4[VAR_7]->ptr) > VAR_2.hash_max_ziplist_value)
        {
            FUNC_0(VAR_3, VAR_0);
            break;
        }
    }
}
