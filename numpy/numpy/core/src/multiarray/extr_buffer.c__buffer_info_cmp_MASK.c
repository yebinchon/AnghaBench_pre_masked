
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ndim; scalar_t__* shape; scalar_t__* strides; int format; } ;
typedef TYPE_1__ _buffer_info_t ;
typedef scalar_t__ Py_ssize_t ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static Py_ssize_t
FUNC_1(_buffer_info_t *VAR_0, _buffer_info_t *VAR_1)
{
    Py_ssize_t VAR_2;
    int VAR_3;

    VAR_2 = FUNC_0(VAR_0->format, VAR_1->format);
    if (VAR_2 != 0) return VAR_2;

    VAR_2 = VAR_0->ndim - VAR_1->ndim;
    if (VAR_2 != 0) return VAR_2;

    for (VAR_3 = 0; VAR_3 < VAR_0->ndim; ++VAR_3) {
        VAR_2 = VAR_0->shape[VAR_3] - VAR_1->shape[VAR_3];
        if (VAR_2 != 0) return VAR_2;
        VAR_2 = VAR_0->strides[VAR_3] - VAR_1->strides[VAR_3];
        if (VAR_2 != 0) return VAR_2;
    }

    return 0;
}
