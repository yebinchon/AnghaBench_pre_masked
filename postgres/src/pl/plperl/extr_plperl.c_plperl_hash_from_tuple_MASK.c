
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* TupleDesc ;
struct TYPE_12__ {TYPE_1__* prodesc; } ;
struct TYPE_11__ {int atttypid; int attname; scalar_t__ attgenerated; scalar_t__ attisdropped; } ;
struct TYPE_10__ {int natts; } ;
struct TYPE_9__ {int trftypes; int lang_oid; } ;
typedef int SV ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int HV ;
typedef TYPE_3__* Form_pg_attribute ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 char* FUNC_4 (int ,int ) ;
 TYPE_3__* FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 () ;
 int * FUNC_7 (char*) ;
 TYPE_6__* VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (int ,int *,int*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int,TYPE_2__*,int*) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,char*,int *) ;
 int * FUNC_14 () ;
 int * FUNC_15 (int *) ;
 int * FUNC_16 (int ) ;
 int FUNC_17 (char*) ;
 int * FUNC_18 (int ) ;
 int * FUNC_19 (int ,int ) ;
 scalar_t__ FUNC_20 (int ) ;

__attribute__((used)) static SV *
FUNC_21(HeapTuple VAR_2, TupleDesc VAR_3, bool VAR_4)
{
 VAR_1;
 HV *VAR_5;
 int VAR_6;


 FUNC_6();

 VAR_5 = FUNC_14();
 FUNC_12(VAR_5, VAR_3->natts);

 for (VAR_6 = 0; VAR_6 < VAR_3->natts; VAR_6++)
 {
  Datum VAR_7;
  bool VAR_8,
     VAR_9;
  char *VAR_10;
  Oid VAR_11;
  Form_pg_attribute VAR_12 = FUNC_5(VAR_3, VAR_6);

  if (VAR_12->attisdropped)
   continue;

  if (VAR_12->attgenerated)
  {

   if (!VAR_4)
    continue;
  }

  VAR_10 = FUNC_1(VAR_12->attname);
  VAR_7 = FUNC_11(VAR_2, VAR_6 + 1, VAR_3, &VAR_8);

  if (VAR_8)
  {





   FUNC_13(VAR_5, VAR_10, FUNC_16(0));
   continue;
  }

  if (FUNC_20(VAR_12->atttypid))
  {
   SV *VAR_13 = FUNC_18(VAR_7);

   FUNC_13(VAR_5, VAR_10, VAR_13);
  }
  else
  {
   SV *VAR_14;
   Oid VAR_15;

   if (FUNC_3(FUNC_9(VAR_12->atttypid)))
    VAR_14 = FUNC_19(VAR_7, VAR_12->atttypid);
   else if ((VAR_15 = FUNC_10(VAR_12->atttypid, VAR_0->prodesc->lang_oid, VAR_0->prodesc->trftypes)))
    VAR_14 = (SV *) FUNC_0(FUNC_2(VAR_15, VAR_7));
   else
   {
    char *VAR_16;


    FUNC_8(VAR_12->atttypid, &VAR_11, &VAR_9);

    VAR_16 = FUNC_4(VAR_11, VAR_7);
    VAR_14 = FUNC_7(VAR_16);
    FUNC_17(VAR_16);
   }

   FUNC_13(VAR_5, VAR_10, VAR_14);
  }
 }
 return FUNC_15((SV *) VAR_5);
}
