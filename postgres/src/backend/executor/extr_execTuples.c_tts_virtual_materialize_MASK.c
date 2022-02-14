
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* data; } ;
typedef TYPE_1__ VirtualTupleTableSlot ;
struct TYPE_10__ {void** tts_values; scalar_t__* tts_isnull; int tts_flags; int tts_mcxt; TYPE_3__* tts_tupleDescriptor; } ;
typedef TYPE_2__ TupleTableSlot ;
typedef TYPE_3__* TupleDesc ;
struct TYPE_12__ {int attlen; int attalign; scalar_t__ attbyval; } ;
struct TYPE_11__ {int natts; } ;
typedef scalar_t__ Size ;
typedef TYPE_4__* Form_pg_attribute ;
typedef int ExpandedObjectHeader ;
typedef void* Datum ;


 int * FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 char* FUNC_4 (int ,scalar_t__) ;
 void* FUNC_5 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 TYPE_4__* FUNC_7 (TYPE_3__*,int) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (scalar_t__,int,void*) ;
 scalar_t__ FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_12(TupleTableSlot *VAR_1)
{
 VirtualTupleTableSlot *VAR_2 = (VirtualTupleTableSlot *) VAR_1;
 TupleDesc VAR_3 = VAR_1->tts_tupleDescriptor;
 Size VAR_4 = 0;
 char *VAR_5;


 if (FUNC_6(VAR_1))
  return;


 for (int VAR_6 = 0; VAR_6 < VAR_3->natts; VAR_6++)
 {
  Form_pg_attribute VAR_7 = FUNC_7(VAR_3, VAR_6);
  Datum VAR_8;

  if (VAR_7->attbyval || VAR_1->tts_isnull[VAR_6])
   continue;

  VAR_8 = VAR_1->tts_values[VAR_6];

  if (VAR_7->attlen == -1 &&
   FUNC_8(FUNC_1(VAR_8)))
  {




   VAR_4 = FUNC_10(VAR_4, VAR_7->attalign);
   VAR_4 += FUNC_3(FUNC_0(VAR_8));
  }
  else
  {
   VAR_4 = FUNC_10(VAR_4, VAR_7->attalign);
   VAR_4 = FUNC_9(VAR_4, VAR_7->attlen, VAR_8);
  }
 }


 if (VAR_4 == 0)
  return;


 VAR_2->data = VAR_5 = FUNC_4(VAR_1->tts_mcxt, VAR_4);
 VAR_1->tts_flags |= VAR_0;


 for (int VAR_9 = 0; VAR_9 < VAR_3->natts; VAR_9++)
 {
  Form_pg_attribute VAR_10 = FUNC_7(VAR_3, VAR_9);
  Datum VAR_11;

  if (VAR_10->attbyval || VAR_1->tts_isnull[VAR_9])
   continue;

  VAR_11 = VAR_1->tts_values[VAR_9];

  if (VAR_10->attlen == -1 &&
   FUNC_8(FUNC_1(VAR_11)))
  {
   Size VAR_12;





   ExpandedObjectHeader *VAR_13 = FUNC_0(VAR_11);

   VAR_5 = (char *) FUNC_10(VAR_5,
             VAR_10->attalign);
   VAR_12 = FUNC_3(VAR_13);
   FUNC_2(VAR_13, VAR_5, VAR_12);

   VAR_1->tts_values[VAR_9] = FUNC_5(VAR_5);
   VAR_5 += VAR_12;
  }
  else
  {
   Size VAR_14 = 0;

   VAR_5 = (char *) FUNC_10(VAR_5, VAR_10->attalign);
   VAR_14 = FUNC_9(VAR_14, VAR_10->attlen, VAR_11);

   FUNC_11(VAR_5, FUNC_1(VAR_11), VAR_14);

   VAR_1->tts_values[VAR_9] = FUNC_5(VAR_5);
   VAR_5 += VAR_14;
  }
 }
}
