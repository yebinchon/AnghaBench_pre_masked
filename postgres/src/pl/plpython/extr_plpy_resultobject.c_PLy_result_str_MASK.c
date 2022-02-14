
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int tp_name; } ;
struct TYPE_6__ {int rows; int nrows; int status; TYPE_1__* ob_type; } ;
struct TYPE_5__ {int tp_name; } ;
typedef int PyObject ;
typedef TYPE_2__ PLyResultObject ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*,int ,int ,int ,int ) ;
 int * FUNC_4 (char*,int ,int ,int ,int ) ;
 TYPE_3__* FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static PyObject *
FUNC_6(PyObject *VAR_0)
{
 PLyResultObject *VAR_1 = (PLyResultObject *) VAR_0;
 return FUNC_3("<%s status=%ld nrows=%ld rows=%s>",
          VAR_1->ob_type->tp_name,
          FUNC_0(VAR_1->status),
          FUNC_0(VAR_1->nrows),
          FUNC_2(FUNC_1(VAR_1->rows)));

}
