
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int32 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_8__ {scalar_t__ atttypid; scalar_t__ atttypmod; scalar_t__ attcollation; scalar_t__ attisdropped; } ;
struct TYPE_7__ {int natts; } ;
typedef scalar_t__ Oid ;
typedef TYPE_2__* Form_pg_attribute ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 (scalar_t__,int,int) ;

__attribute__((used)) static bool
FUNC_3(Oid VAR_1, int VAR_2,
       Oid VAR_3, int32 VAR_4,
       Oid VAR_5)
{
 TupleDesc VAR_6;
 Form_pg_attribute VAR_7;


 if (VAR_1 == VAR_0)
  return 1;
 VAR_6 = FUNC_2(VAR_1, -1, 0);
 if (VAR_2 <= 0 || VAR_2 > VAR_6->natts)
 {
  FUNC_0(VAR_6);
  return 0;
 }
 VAR_7 = FUNC_1(VAR_6, VAR_2 - 1);
 if (VAR_7->attisdropped ||
  VAR_7->atttypid != VAR_3 ||
  VAR_7->atttypmod != VAR_4 ||
  VAR_7->attcollation != VAR_5)
 {
  FUNC_0(VAR_6);
  return 0;
 }
 FUNC_0(VAR_6);
 return 1;
}
