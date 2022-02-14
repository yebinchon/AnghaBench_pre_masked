
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int typioparam; int typfunc; } ;
struct TYPE_6__ {TYPE_1__ scalar; } ;
struct TYPE_7__ {int typmod; TYPE_2__ u; } ;
typedef int PyObject ;
typedef TYPE_3__ PLyObToDatum ;
typedef int Datum ;


 int FUNC_0 (int *,char*,int ,int ) ;
 char* FUNC_1 (int *) ;
 int * VAR_0 ;

__attribute__((used)) static Datum
FUNC_2(PLyObToDatum *VAR_1, PyObject *VAR_2,
       bool *VAR_3, bool VAR_4)
{
 char *VAR_5;

 if (VAR_2 == VAR_0)
 {
  *VAR_3 = 1;
  return (Datum) 0;
 }
 *VAR_3 = 0;

 VAR_5 = FUNC_1(VAR_2);

 return FUNC_0(&VAR_1->u.scalar.typfunc,
        VAR_5,
        VAR_1->u.scalar.typioparam,
        VAR_1->typmod);
}
