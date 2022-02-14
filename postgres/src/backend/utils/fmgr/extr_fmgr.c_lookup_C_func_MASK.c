
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ fn_xmin; int fn_tid; } ;
struct TYPE_8__ {int oid; } ;
struct TYPE_7__ {int t_self; int t_data; } ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_proc ;
typedef TYPE_3__ CFuncHashTabEntry ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *,int ,int *) ;

__attribute__((used)) static CFuncHashTabEntry *
FUNC_4(HeapTuple VAR_2)
{
 Oid VAR_3 = ((Form_pg_proc) FUNC_0(VAR_2))->oid;
 CFuncHashTabEntry *VAR_4;

 if (VAR_0 == ((void*)0))
  return ((void*)0);
 VAR_4 = (CFuncHashTabEntry *)
  FUNC_3(VAR_0,
     &VAR_3,
     VAR_1,
     ((void*)0));
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 if (VAR_4->fn_xmin == FUNC_1(VAR_2->t_data) &&
  FUNC_2(&VAR_4->fn_tid, &VAR_2->t_self))
  return VAR_4;
 return ((void*)0);
}
