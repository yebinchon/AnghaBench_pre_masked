
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_10__ {int atttypid; } ;
struct TYPE_9__ {int atttypid; } ;
struct TYPE_8__ {int typname; } ;
struct TYPE_7__ {int natts; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,int ) ;
 TYPE_5__* FUNC_6 (int) ;
 int VAR_4 ;
 TYPE_3__* FUNC_7 (TYPE_1__*,int) ;
 char* FUNC_8 (int ) ;

char *
FUNC_9(TupleDesc VAR_5, int VAR_6)
{
 Oid VAR_7;
 HeapTuple VAR_8;
 char *VAR_9;

 VAR_3 = 0;

 if (VAR_6 > VAR_5->natts || VAR_6 == 0 ||
  VAR_6 <= VAR_0)
 {
  VAR_3 = VAR_1;
  return ((void*)0);
 }

 if (VAR_6 > 0)
  VAR_7 = FUNC_7(VAR_5, VAR_6 - 1)->atttypid;
 else
  VAR_7 = (FUNC_6(VAR_6))->atttypid;

 VAR_8 = FUNC_5(VAR_4, FUNC_3(VAR_7));

 if (!FUNC_1(VAR_8))
 {
  VAR_3 = VAR_2;
  return ((void*)0);
 }

 VAR_9 = FUNC_8(FUNC_2(((Form_pg_type) FUNC_0(VAR_8))->typname));
 FUNC_4(VAR_8);
 return VAR_9;
}
