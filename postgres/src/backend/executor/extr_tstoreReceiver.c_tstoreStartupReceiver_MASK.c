
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* TupleDesc ;
struct TYPE_11__ {int attlen; scalar_t__ attisdropped; } ;
struct TYPE_8__ {int receiveSlot; } ;
struct TYPE_10__ {int * tofree; int * outvalues; TYPE_1__ pub; int cxt; scalar_t__ detoast; } ;
struct TYPE_9__ {int natts; } ;
typedef TYPE_3__ TStoreState ;
typedef TYPE_4__* Form_pg_attribute ;
typedef int DestReceiver ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ,int) ;
 TYPE_4__* FUNC_1 (TYPE_2__*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(DestReceiver *VAR_2, int VAR_3, TupleDesc VAR_4)
{
 TStoreState *VAR_5 = (TStoreState *) VAR_2;
 bool VAR_6 = 0;
 int VAR_7 = VAR_4->natts;
 int VAR_8;


 if (VAR_5->detoast)
 {
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  {
   Form_pg_attribute VAR_9 = FUNC_1(VAR_4, VAR_8);

   if (VAR_9->attisdropped)
    continue;
   if (VAR_9->attlen == -1)
   {
    VAR_6 = 1;
    break;
   }
  }
 }


 if (VAR_6)
 {
  VAR_5->pub.receiveSlot = VAR_0;

  VAR_5->outvalues = (Datum *)
   FUNC_0(VAR_5->cxt, VAR_7 * sizeof(Datum));
  VAR_5->tofree = (Datum *)
   FUNC_0(VAR_5->cxt, VAR_7 * sizeof(Datum));
 }
 else
 {
  VAR_5->pub.receiveSlot = VAR_1;
  VAR_5->outvalues = ((void*)0);
  VAR_5->tofree = ((void*)0);
 }
}
