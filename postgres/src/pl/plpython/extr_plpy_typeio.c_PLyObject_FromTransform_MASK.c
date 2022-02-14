
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int typtransform; } ;
struct TYPE_6__ {TYPE_1__ transform; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
typedef int PyObject ;
typedef TYPE_3__ PLyDatumToOb ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static PyObject *
FUNC_2(PLyDatumToOb *VAR_0, Datum VAR_1)
{
 Datum VAR_2;

 VAR_2 = FUNC_1(&VAR_0->u.transform.typtransform, VAR_1);
 return (PyObject *) FUNC_0(VAR_2);
}
