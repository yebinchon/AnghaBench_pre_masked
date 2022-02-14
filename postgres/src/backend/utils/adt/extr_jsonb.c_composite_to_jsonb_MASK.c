
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int int32 ;
typedef TYPE_3__* TupleDesc ;
struct TYPE_23__ {int atttypid; int attname; scalar_t__ attisdropped; } ;
struct TYPE_22__ {int t_data; int t_len; } ;
struct TYPE_21__ {int parseState; void* res; } ;
struct TYPE_17__ {char* val; int len; } ;
struct TYPE_18__ {TYPE_1__ string; } ;
struct TYPE_20__ {TYPE_2__ val; int type; } ;
struct TYPE_19__ {int natts; } ;
typedef int Oid ;
typedef TYPE_4__ JsonbValue ;
typedef int JsonbTypeCategory ;
typedef TYPE_5__ JsonbInState ;
typedef int HeapTupleHeader ;
typedef TYPE_6__ HeapTupleData ;
typedef TYPE_7__* Form_pg_attribute ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_7__* FUNC_6 (TYPE_3__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ,int,TYPE_5__*,int ,int ,int) ;
 int FUNC_8 (TYPE_6__*,int,TYPE_3__*,int*) ;
 int VAR_5 ;
 int FUNC_9 (int ,int *,int *) ;
 TYPE_3__* FUNC_10 (int ,int ) ;
 void* FUNC_11 (int *,int ,TYPE_4__*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void
FUNC_13(Datum VAR_6, JsonbInState *VAR_7)
{
 HeapTupleHeader VAR_8;
 Oid VAR_9;
 int32 VAR_10;
 TupleDesc VAR_11;
 HeapTupleData VAR_12,
      *VAR_13;
 int VAR_14;

 VAR_8 = FUNC_0(VAR_6);


 VAR_9 = FUNC_3(VAR_8);
 VAR_10 = FUNC_2(VAR_8);
 VAR_11 = FUNC_10(VAR_9, VAR_10);


 VAR_12.t_len = FUNC_1(VAR_8);
 VAR_12.t_data = VAR_8;
 VAR_13 = &VAR_12;

 VAR_7->res = FUNC_11(&VAR_7->parseState, VAR_2, ((void*)0));

 for (VAR_14 = 0; VAR_14 < VAR_11->natts; VAR_14++)
 {
  Datum VAR_15;
  bool VAR_16;
  char *VAR_17;
  JsonbTypeCategory VAR_18;
  Oid VAR_19;
  JsonbValue VAR_20;
  Form_pg_attribute VAR_21 = FUNC_6(VAR_11, VAR_14);

  if (VAR_21->attisdropped)
   continue;

  VAR_17 = FUNC_4(VAR_21->attname);

  VAR_20.type = VAR_5;

  VAR_20.val.string.len = FUNC_12(VAR_17);
  VAR_20.val.string.val = VAR_17;

  VAR_7->res = FUNC_11(&VAR_7->parseState, VAR_4, &VAR_20);

  VAR_15 = FUNC_8(VAR_13, VAR_14 + 1, VAR_11, &VAR_16);

  if (VAR_16)
  {
   VAR_18 = VAR_1;
   VAR_19 = VAR_0;
  }
  else
   FUNC_9(VAR_21->atttypid, &VAR_18, &VAR_19);

  FUNC_7(VAR_15, VAR_16, VAR_7, VAR_18, VAR_19, 0);
 }

 VAR_7->res = FUNC_11(&VAR_7->parseState, VAR_3, ((void*)0));
 FUNC_5(VAR_11);
}
