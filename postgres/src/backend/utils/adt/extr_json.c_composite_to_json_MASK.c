
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int32 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_12__ {int atttypid; int attname; scalar_t__ attisdropped; } ;
struct TYPE_11__ {int t_data; int t_len; } ;
struct TYPE_10__ {int natts; } ;
typedef int StringInfo ;
typedef int Oid ;
typedef int JsonTypeCategory ;
typedef int HeapTupleHeader ;
typedef TYPE_2__ HeapTupleData ;
typedef TYPE_3__* Form_pg_attribute ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_3__* FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int ,char) ;
 int FUNC_8 (int ,char const*) ;
 int FUNC_9 (int ,int,int ,int ,int ,int) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (TYPE_2__*,int,TYPE_1__*,int*) ;
 int FUNC_12 (int ,int *,int *) ;
 TYPE_1__* FUNC_13 (int ,int ) ;

__attribute__((used)) static void
FUNC_14(Datum VAR_2, StringInfo VAR_3, bool VAR_4)
{
 HeapTupleHeader VAR_5;
 Oid VAR_6;
 int32 VAR_7;
 TupleDesc VAR_8;
 HeapTupleData VAR_9,
      *VAR_10;
 int VAR_11;
 bool VAR_12 = 0;
 const char *VAR_13;

 VAR_13 = VAR_4 ? ",\n " : ",";

 VAR_5 = FUNC_0(VAR_2);


 VAR_6 = FUNC_3(VAR_5);
 VAR_7 = FUNC_2(VAR_5);
 VAR_8 = FUNC_13(VAR_6, VAR_7);


 VAR_9.t_len = FUNC_1(VAR_5);
 VAR_9.t_data = VAR_5;
 VAR_10 = &VAR_9;

 FUNC_7(VAR_3, '{');

 for (VAR_11 = 0; VAR_11 < VAR_8->natts; VAR_11++)
 {
  Datum VAR_14;
  bool VAR_15;
  char *VAR_16;
  JsonTypeCategory VAR_17;
  Oid VAR_18;
  Form_pg_attribute VAR_19 = FUNC_6(VAR_8, VAR_11);

  if (VAR_19->attisdropped)
   continue;

  if (VAR_12)
   FUNC_8(VAR_3, VAR_13);
  VAR_12 = 1;

  VAR_16 = FUNC_4(VAR_19->attname);
  FUNC_10(VAR_3, VAR_16);
  FUNC_7(VAR_3, ':');

  VAR_14 = FUNC_11(VAR_10, VAR_11 + 1, VAR_8, &VAR_15);

  if (VAR_15)
  {
   VAR_17 = VAR_1;
   VAR_18 = VAR_0;
  }
  else
   FUNC_12(VAR_19->atttypid, &VAR_17, &VAR_18);

  FUNC_9(VAR_14, VAR_15, VAR_3, VAR_17, VAR_18, 0);
 }

 FUNC_7(VAR_3, '}');
 FUNC_5(VAR_8);
}
