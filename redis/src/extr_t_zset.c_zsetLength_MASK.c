
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* zsl; } ;
typedef TYPE_2__ zset ;
struct TYPE_7__ {scalar_t__ encoding; scalar_t__ ptr; } ;
typedef TYPE_3__ robj ;
struct TYPE_5__ {unsigned long length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 unsigned long FUNC_1 (scalar_t__) ;

unsigned long FUNC_2(const robj *VAR_2) {
    unsigned long VAR_3 = 0;
    if (VAR_2->encoding == VAR_1) {
        VAR_3 = FUNC_1(VAR_2->ptr);
    } else if (VAR_2->encoding == VAR_0) {
        VAR_3 = ((const zset*)VAR_2->ptr)->zsl->length;
    } else {
        FUNC_0("Unknown sorted set encoding");
    }
    return VAR_3;
}
