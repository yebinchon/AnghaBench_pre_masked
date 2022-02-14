
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
typedef int dsa_area ;
typedef scalar_t__ TupleDesc ;
struct TYPE_3__ {scalar_t__ local_tupdesc; int shared_tupdesc; } ;
struct TYPE_4__ {TYPE_1__ u; scalar_t__ shared; } ;
typedef TYPE_2__ SharedRecordTableKey ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static uint32
FUNC_2(const void *VAR_0, size_t VAR_1, void *VAR_2)
{
 dsa_area *VAR_3 = (dsa_area *) VAR_2;
 SharedRecordTableKey *VAR_4 = (SharedRecordTableKey *) VAR_0;
 TupleDesc VAR_5;

 if (VAR_4->shared)
  VAR_5 = (TupleDesc) FUNC_0(VAR_3, VAR_4->u.shared_tupdesc);
 else
  VAR_5 = VAR_4->u.local_tupdesc;

 return FUNC_1(VAR_5);
}
