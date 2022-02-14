
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int typfunc; } ;
struct TYPE_6__ {TYPE_1__ scalar; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
typedef int PyObject ;
typedef TYPE_3__ PLyDatumToOb ;
typedef int Datum ;


 char* FUNC_0 (int *,int ) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static PyObject *
FUNC_3(PLyDatumToOb *VAR_0, Datum VAR_1)
{
 char *VAR_2 = FUNC_0(&VAR_0->u.scalar.typfunc, VAR_1);
 PyObject *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_2);
 return VAR_3;
}
