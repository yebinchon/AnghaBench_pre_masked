
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ frameType; unsigned long long frameContentSize; } ;
typedef TYPE_1__ ZSTD_frameHeader ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long FUNC_0 (void const*,size_t) ;
 scalar_t__ FUNC_1 (TYPE_1__*,void const*,size_t) ;
 scalar_t__ FUNC_2 (void const*,size_t) ;
 scalar_t__ VAR_2 ;

unsigned long long FUNC_3(const void *VAR_3, size_t VAR_4)
{






    { ZSTD_frameHeader VAR_5;
        if (FUNC_1(&VAR_5, VAR_3, VAR_4) != 0)
            return VAR_0;
        if (VAR_5.frameType == VAR_2) {
            return 0;
        } else {
            return VAR_5.frameContentSize;
    } }
}
