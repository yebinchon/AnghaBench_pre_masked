
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t len; TYPE_1__* zsl; } ;
typedef TYPE_2__ zset ;
struct TYPE_10__ {scalar_t__ type; scalar_t__ encoding; TYPE_2__* ptr; } ;
typedef TYPE_3__ robj ;
typedef TYPE_2__ quicklist ;
typedef TYPE_2__ dict ;
struct TYPE_8__ {size_t length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t FUNC_0 (TYPE_2__*) ;

size_t FUNC_1(robj *VAR_6) {
    if (VAR_6->type == VAR_3) {
        quicklist *VAR_7 = VAR_6->ptr;
        return VAR_7->len;
    } else if (VAR_6->type == VAR_4 && VAR_6->encoding == VAR_0) {
        dict *VAR_8 = VAR_6->ptr;
        return FUNC_0(VAR_8);
    } else if (VAR_6->type == VAR_5 && VAR_6->encoding == VAR_1){
        zset *VAR_9 = VAR_6->ptr;
        return VAR_9->zsl->length;
    } else if (VAR_6->type == VAR_2 && VAR_6->encoding == VAR_0) {
        dict *VAR_10 = VAR_6->ptr;
        return FUNC_0(VAR_10);
    } else {
        return 1;
    }
}
