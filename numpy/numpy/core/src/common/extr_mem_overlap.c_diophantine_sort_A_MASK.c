
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ npy_int64 ;
struct TYPE_2__ {scalar_t__ a; } ;
typedef TYPE_1__ diophantine_term_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
    npy_int64 VAR_2 = ((diophantine_term_t*)VAR_0)->a;
    npy_int64 VAR_3 = ((diophantine_term_t*)VAR_1)->a;

    if (VAR_2 < VAR_3) {
        return 1;
    }
    else if (VAR_3 < VAR_2) {
        return -1;
    }
    else {
        return 0;
    }
}
