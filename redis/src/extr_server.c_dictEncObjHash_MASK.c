
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int sds ;
struct TYPE_6__ {unsigned char* ptr; scalar_t__ encoding; } ;
typedef TYPE_1__ robj ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (unsigned char*,int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int,long) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;

uint64_t FUNC_6(const void *VAR_1) {
    robj *VAR_2 = (robj*) VAR_1;

    if (FUNC_4(VAR_2)) {
        return FUNC_1(VAR_2->ptr, FUNC_5((sds)VAR_2->ptr));
    } else {
        if (VAR_2->encoding == VAR_0) {
            char VAR_3[32];
            int VAR_4;

            VAR_4 = FUNC_3(VAR_3,32,(long)VAR_2->ptr);
            return FUNC_1((unsigned char*)VAR_3, VAR_4);
        } else {
            uint64_t VAR_5;

            VAR_2 = FUNC_2(VAR_2);
            VAR_5 = FUNC_1(VAR_2->ptr, FUNC_5((sds)VAR_2->ptr));
            FUNC_0(VAR_2);
            return VAR_5;
        }
    }
}
