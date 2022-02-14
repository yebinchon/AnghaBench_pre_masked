
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ml_line_count; } ;
struct TYPE_8__ {TYPE_1__ b_ml; } ;
struct TYPE_7__ {TYPE_4__* buf; } ;
typedef int PyObject ;
typedef int PyInt ;
typedef TYPE_2__ BufferObject ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (TYPE_4__*,int,int) ;

__attribute__((used)) static PyObject *
FUNC_2(BufferObject *VAR_0, PyInt VAR_1, PyInt VAR_2, PyInt VAR_3, PyInt VAR_4)
{
    PyInt VAR_5;

    if (FUNC_0(VAR_0))
 return ((void*)0);

    if (VAR_4 == -1)
 VAR_4 = VAR_0->buf->b_ml.ml_line_count;

    VAR_5 = VAR_4 - VAR_3 + 1;

    if (VAR_1 < 0)
 VAR_1 = 0;
    else if (VAR_1 > VAR_5)
 VAR_1 = VAR_5;
    if (VAR_2 < 0)
 VAR_2 = 0;
    if (VAR_2 < VAR_1)
 VAR_2 = VAR_1;
    else if (VAR_2 > VAR_5)
 VAR_2 = VAR_5;

    return FUNC_1(VAR_0->buf, VAR_1+VAR_3, VAR_2+VAR_3);
}
