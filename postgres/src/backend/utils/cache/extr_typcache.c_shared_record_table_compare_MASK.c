
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int dsa_area ;
typedef scalar_t__ TupleDesc ;
struct TYPE_3__ {scalar_t__ local_tupdesc; int shared_tupdesc; } ;
struct TYPE_4__ {TYPE_1__ u; scalar_t__ shared; } ;
typedef TYPE_2__ SharedRecordTableKey ;


 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1, size_t VAR_2,
       void *VAR_3)
{
 dsa_area *VAR_4 = (dsa_area *) VAR_3;
 SharedRecordTableKey *VAR_5 = (SharedRecordTableKey *) VAR_0;
 SharedRecordTableKey *VAR_6 = (SharedRecordTableKey *) VAR_1;
 TupleDesc VAR_7;
 TupleDesc VAR_8;

 if (VAR_5->shared)
  VAR_7 = (TupleDesc) FUNC_0(VAR_4, VAR_5->u.shared_tupdesc);
 else
  VAR_7 = VAR_5->u.local_tupdesc;

 if (VAR_6->shared)
  VAR_8 = (TupleDesc) FUNC_0(VAR_4, VAR_6->u.shared_tupdesc);
 else
  VAR_8 = VAR_6->u.local_tupdesc;

 return FUNC_1(VAR_7, VAR_8) ? 0 : 1;
}
