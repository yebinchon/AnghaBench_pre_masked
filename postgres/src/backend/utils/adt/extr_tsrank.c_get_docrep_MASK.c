
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_14__ ;


typedef size_t int32 ;
typedef scalar_t__ WordEntryPos ;
struct TYPE_24__ {scalar_t__ haspos; } ;
typedef TYPE_4__ WordEntry ;
struct TYPE_22__ {int nitem; TYPE_7__** items; } ;
struct TYPE_21__ {scalar_t__ entry; TYPE_7__* item; } ;
struct TYPE_23__ {TYPE_2__ query; TYPE_1__ map; } ;
struct TYPE_28__ {scalar_t__ pos; TYPE_3__ data; } ;
struct TYPE_26__ {int weight; } ;
struct TYPE_27__ {scalar_t__ type; TYPE_6__ qoperand; } ;
struct TYPE_25__ {TYPE_14__* query; } ;
struct TYPE_20__ {int size; } ;
typedef int TSVector ;
typedef TYPE_5__ QueryRepresentation ;
typedef TYPE_6__ QueryOperand ;
typedef TYPE_7__ QueryItem ;
typedef TYPE_8__ DocRepresentation ;


 TYPE_7__* FUNC_0 (TYPE_14__*) ;
 size_t FUNC_1 (int ,TYPE_4__*) ;
 scalar_t__* FUNC_2 (int ,TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 TYPE_4__* FUNC_4 (int ,TYPE_14__*,TYPE_6__*,size_t*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (void*,int,int,int ) ;
 scalar_t__ FUNC_8 (TYPE_8__*,int) ;

__attribute__((used)) static DocRepresentation *
FUNC_9(TSVector VAR_2, QueryRepresentation *VAR_3, int *VAR_4)
{
 QueryItem *VAR_5 = FUNC_0(VAR_3->query);
 WordEntry *VAR_6,
      *VAR_7;
 WordEntryPos *VAR_8;
 int32 VAR_9,
    VAR_10,
    VAR_11,
    VAR_12;
 int VAR_13 = VAR_3->query->size * 4,
    VAR_14 = 0;
 DocRepresentation *VAR_15;

 VAR_15 = (DocRepresentation *) FUNC_5(sizeof(DocRepresentation) * VAR_13);





 for (VAR_11 = 0; VAR_11 < VAR_3->query->size; VAR_11++)
 {
  QueryOperand *VAR_16;

  if (VAR_5[VAR_11].type != VAR_0)
   continue;

  VAR_16 = &VAR_5[VAR_11].qoperand;

  VAR_7 = VAR_6 = FUNC_4(VAR_2, VAR_3->query, VAR_16, &VAR_12);
  if (!VAR_6)
   continue;


  while (VAR_6 - VAR_7 < VAR_12)
  {
   if (VAR_6->haspos)
   {
    VAR_9 = FUNC_1(VAR_2, VAR_6);
    VAR_8 = FUNC_2(VAR_2, VAR_6);
   }
   else
   {

    VAR_6++;
    continue;
   }

   while (VAR_14 + VAR_9 >= VAR_13)
   {
    VAR_13 *= 2;
    VAR_15 = (DocRepresentation *) FUNC_8(VAR_15, sizeof(DocRepresentation) * VAR_13);
   }


   for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
   {
    if (VAR_16->weight == 0 ||
     VAR_16->weight & (1 << FUNC_3(VAR_8[VAR_10])))
    {
     VAR_15[VAR_14].pos = VAR_8[VAR_10];
     VAR_15[VAR_14].data.map.entry = VAR_6;
     VAR_15[VAR_14].data.map.item = (QueryItem *) VAR_16;
     VAR_14++;
    }
   }

   VAR_6++;
  }
 }

 if (VAR_14 > 0)
 {
  DocRepresentation *VAR_17 = VAR_15 + 1,
       *VAR_18 = VAR_15,
     VAR_19;




  FUNC_7((void *) VAR_15, VAR_14, sizeof(DocRepresentation), VAR_1);




  VAR_19.pos = VAR_15->pos;
  VAR_19.data.query.items = FUNC_5(sizeof(QueryItem *) * VAR_3->query->size);
  VAR_19.data.query.items[0] = VAR_15->data.map.item;
  VAR_19.data.query.nitem = 1;

  while (VAR_17 - VAR_15 < VAR_14)
  {
   if (VAR_17->pos == (VAR_17 - 1)->pos &&
    VAR_17->data.map.entry == (VAR_17 - 1)->data.map.entry)
   {
    VAR_19.data.query.items[VAR_19.data.query.nitem] = VAR_17->data.map.item;
    VAR_19.data.query.nitem++;
   }
   else
   {
    *VAR_18 = VAR_19;
    VAR_18++;
    VAR_19.pos = VAR_17->pos;
    VAR_19.data.query.items = FUNC_5(sizeof(QueryItem *) * VAR_3->query->size);
    VAR_19.data.query.items[0] = VAR_17->data.map.item;
    VAR_19.data.query.nitem = 1;
   }

   VAR_17++;
  }

  *VAR_18 = VAR_19;
  VAR_18++;

  *VAR_4 = VAR_18 - VAR_15;
  return VAR_15;
 }

 FUNC_6(VAR_15);
 return ((void*)0);
}
