
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_11__ {int * atttypmods; int * attioparams; int * attinfuncs; int tupdesc; } ;
struct TYPE_10__ {int atttypmod; int atttypid; int attisdropped; } ;
struct TYPE_9__ {int natts; } ;
typedef int Oid ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int FmgrInfo ;
typedef TYPE_3__ AttInMetadata ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *,int *) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;

AttInMetadata *
FUNC_6(TupleDesc VAR_0)
{
 int VAR_1 = VAR_0->natts;
 int VAR_2;
 Oid VAR_3;
 Oid VAR_4;
 FmgrInfo *VAR_5;
 Oid *VAR_6;
 int32 *VAR_7;
 AttInMetadata *VAR_8;

 VAR_8 = (AttInMetadata *) FUNC_4(sizeof(AttInMetadata));


 VAR_8->tupdesc = FUNC_0(VAR_0);




 VAR_5 = (FmgrInfo *) FUNC_5(VAR_1 * sizeof(FmgrInfo));
 VAR_6 = (Oid *) FUNC_5(VAR_1 * sizeof(Oid));
 VAR_7 = (int32 *) FUNC_5(VAR_1 * sizeof(int32));

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
 {
  Form_pg_attribute VAR_9 = FUNC_1(VAR_0, VAR_2);


  if (!VAR_9->attisdropped)
  {
   VAR_3 = VAR_9->atttypid;
   FUNC_3(VAR_3, &VAR_4, &VAR_6[VAR_2]);
   FUNC_2(VAR_4, &VAR_5[VAR_2]);
   VAR_7[VAR_2] = VAR_9->atttypmod;
  }
 }
 VAR_8->attinfuncs = VAR_5;
 VAR_8->attioparams = VAR_6;
 VAR_8->atttypmods = VAR_7;

 return VAR_8;
}
