
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int32 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_12__ {scalar_t__ attnum; int attname; } ;
struct TYPE_11__ {int * t_data; int t_tableOid; int t_self; int t_len; } ;
struct TYPE_10__ {int natts; } ;
typedef int Oid ;
typedef int * HeapTupleHeader ;
typedef TYPE_2__ HeapTupleData ;
typedef TYPE_3__* Form_pg_attribute ;
typedef int Datum ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_3__* FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (TYPE_2__*,scalar_t__,TYPE_1__*,int*) ;
 TYPE_1__* FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int *,char const*) ;

Datum
FUNC_10(HeapTupleHeader VAR_3, const char *VAR_4, bool *VAR_5)
{
 AttrNumber VAR_6;
 Datum VAR_7;
 Oid VAR_8;
 int32 VAR_9;
 TupleDesc VAR_10;
 HeapTupleData VAR_11;
 int VAR_12;

 if (VAR_4 == ((void*)0))
  FUNC_6(VAR_0, "invalid attribute name");

 if (VAR_5 == ((void*)0))
  FUNC_6(VAR_0, "a NULL isNull pointer was passed");

 if (VAR_3 == ((void*)0))
 {

  *VAR_5 = 1;
  return (Datum) 0;
 }

 VAR_8 = FUNC_2(VAR_3);
 VAR_9 = FUNC_1(VAR_3);
 VAR_10 = FUNC_8(VAR_8, VAR_9);

 VAR_6 = VAR_1;
 for (VAR_12 = 0; VAR_12 < VAR_10->natts; VAR_12++)
 {
  Form_pg_attribute VAR_13 = FUNC_5(VAR_10, VAR_12);

  if (FUNC_9(&(VAR_13->attname), VAR_4) == 0)
  {
   VAR_6 = VAR_13->attnum;
   break;
  }
 }

 if (VAR_6 == VAR_1)
  FUNC_6(VAR_0, "attribute \"%s\" does not exist", VAR_4);






 VAR_11.t_len = FUNC_0(VAR_3);
 FUNC_3(&(VAR_11.t_self));
 VAR_11.t_tableOid = VAR_2;
 VAR_11.t_data = VAR_3;

 VAR_7 = FUNC_7(&VAR_11,
        VAR_6,
        VAR_10,
        VAR_5);

 FUNC_4(VAR_10);

 return VAR_7;
}
