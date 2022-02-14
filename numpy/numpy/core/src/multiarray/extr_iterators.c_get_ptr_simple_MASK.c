
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t npy_intp ;
struct TYPE_3__ {size_t const* strides; int ao; } ;
typedef TYPE_1__ PyArrayIterObject ;


 char* FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static char*
FUNC_2(PyArrayIterObject* VAR_0, const npy_intp *VAR_1)
{
    npy_intp VAR_2;
    char *VAR_3;

    VAR_3 = FUNC_0(VAR_0->ao);

    for(VAR_2 = 0; VAR_2 < FUNC_1(VAR_0->ao); ++VAR_2) {
            VAR_3 += VAR_1[VAR_2] * VAR_0->strides[VAR_2];
    }

    return VAR_3;
}
