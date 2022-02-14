
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t hash_size; int v1; } ;
typedef TYPE_1__ SIPHASH ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (size_t) ;

int FUNC_1(SIPHASH *VAR_2, size_t VAR_3)
{
    VAR_3 = FUNC_0(VAR_3);
    if (VAR_3 != VAR_1
        && VAR_3 != VAR_0)
        return 0;







    VAR_2->hash_size = FUNC_0(VAR_2->hash_size);


    if ((size_t)VAR_2->hash_size != VAR_3) {
        VAR_2->v1 ^= 0xee;
        VAR_2->hash_size = VAR_3;
    }
    return 1;
}
