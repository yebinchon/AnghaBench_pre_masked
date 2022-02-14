
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int domain_info; TYPE_3__* base; } ;
struct TYPE_7__ {TYPE_1__ domain; } ;
struct TYPE_8__ {int mcxt; TYPE_2__ u; int typoid; int (* func ) (TYPE_3__*,int *,int*,int) ;} ;
typedef int PyObject ;
typedef TYPE_3__ PLyObToDatum ;
typedef int Datum ;


 int FUNC_0 (int ,int,int ,int *,int ) ;
 int FUNC_1 (TYPE_3__*,int *,int*,int) ;

__attribute__((used)) static Datum
FUNC_2(PLyObToDatum *VAR_0, PyObject *VAR_1,
       bool *VAR_2, bool VAR_3)
{
 Datum VAR_4;
 PLyObToDatum *VAR_5 = VAR_0->u.domain.base;

 VAR_4 = VAR_5->func(VAR_5, VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_4, *VAR_2, VAR_0->typoid,
     &VAR_0->u.domain.domain_info, VAR_0->mcxt);
 return VAR_4;
}
