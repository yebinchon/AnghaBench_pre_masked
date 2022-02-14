
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {int dirty_cnt; int length; int * g; int * p; } ;
typedef TYPE_1__ DH ;
typedef int BIGNUM ;


 TYPE_1__* FUNC_0 () ;
 int VAR_0 ;

__attribute__((used)) static DH *FUNC_1(const BIGNUM *VAR_1, int32_t VAR_2)
{
    DH *VAR_3 = FUNC_0();
    if (VAR_3 == ((void*)0))
        return ((void*)0);
    VAR_3->p = (BIGNUM *)VAR_1;
    VAR_3->g = (BIGNUM *)&VAR_0;
    VAR_3->length = VAR_2;
    VAR_3->dirty_cnt++;
    return VAR_3;
}
