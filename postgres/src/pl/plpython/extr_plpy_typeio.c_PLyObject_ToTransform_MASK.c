
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
typedef TYPE_3__ PLyObToDatum ;
typedef int Datum ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int * VAR_0 ;

__attribute__((used)) static Datum
FUNC_2(PLyObToDatum *VAR_1, PyObject *VAR_2,
       bool *VAR_3, bool VAR_4)
{
 if (VAR_2 == VAR_0)
 {
  *VAR_3 = 1;
  return (Datum) 0;
 }
 *VAR_3 = 0;
 return FUNC_0(&VAR_1->u.transform.typtransform, FUNC_1(VAR_2));
}
