
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
 int * FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static PyObject *
FUNC_4(BufferObject *VAR_1, PyInt VAR_2, PyInt VAR_3, PyInt VAR_4)
{
    if (FUNC_0(VAR_1))
 return ((void*)0);

    if (VAR_4 == -1)
 VAR_4 = VAR_1->buf->b_ml.ml_line_count;

    if (VAR_2 < 0)
 VAR_2 += VAR_4 - VAR_3 + 1;

    if (VAR_2 < 0 || VAR_2 > VAR_4 - VAR_3)
    {
 FUNC_3(VAR_0, FUNC_2("line number out of range"));
 return ((void*)0);
    }

    return FUNC_1(VAR_1->buf, VAR_2+VAR_3);
}
