
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64 ;
typedef int int32 ;
typedef int int16 ;
struct TYPE_8__ {int indexsize; int t; int size; } ;
typedef TYPE_1__ gbtree_ninfo ;
typedef int float8 ;
typedef int float4 ;
typedef int Timestamp ;
typedef int TimeADT ;
struct TYPE_9__ {int offset; int page; int rel; int key; scalar_t__ leafkey; } ;
typedef TYPE_2__ GISTENTRY ;
typedef int GBT_NUMKEY ;
typedef int DateADT ;
typedef int Cash ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__,int ,int ,int ,int ,int) ;
 int FUNC_14 (void*,void*,int) ;
 TYPE_2__* FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int) ;

GISTENTRY *
FUNC_17(GISTENTRY *VAR_0, const gbtree_ninfo *VAR_1)
{
 GISTENTRY *VAR_2;

 if (VAR_0->leafkey)
 {
  union
  {
   int16 i2;
   int32 i4;
   int64 i8;
   float4 f4;
   float8 f8;
   DateADT dt;
   TimeADT tm;
   Timestamp ts;
   Cash ch;
  } VAR_3;

  GBT_NUMKEY *VAR_4 = (GBT_NUMKEY *) FUNC_16(VAR_1->indexsize);
  void *VAR_5 = ((void*)0);

  switch (VAR_1->t)
  {
   case 133:
    VAR_3.i2 = FUNC_5(VAR_0->key);
    VAR_5 = &VAR_3.i2;
    break;
   case 132:
    VAR_3.i4 = FUNC_6(VAR_0->key);
    VAR_5 = &VAR_3.i4;
    break;
   case 131:
    VAR_3.i8 = FUNC_7(VAR_0->key);
    VAR_5 = &VAR_3.i8;
    break;
   case 130:
   case 136:
    VAR_3.i4 = FUNC_8(VAR_0->key);
    VAR_5 = &VAR_3.i4;
    break;
   case 135:
    VAR_3.f4 = FUNC_3(VAR_0->key);
    VAR_5 = &VAR_3.f4;
    break;
   case 134:
    VAR_3.f8 = FUNC_4(VAR_0->key);
    VAR_5 = &VAR_3.f8;
    break;
   case 137:
    VAR_3.dt = FUNC_2(VAR_0->key);
    VAR_5 = &VAR_3.dt;
    break;
   case 129:
    VAR_3.tm = FUNC_10(VAR_0->key);
    VAR_5 = &VAR_3.tm;
    break;
   case 128:
    VAR_3.ts = FUNC_11(VAR_0->key);
    VAR_5 = &VAR_3.ts;
    break;
   case 138:
    VAR_3.ch = FUNC_1(VAR_0->key);
    VAR_5 = &VAR_3.ch;
    break;
   default:
    VAR_5 = FUNC_9(VAR_0->key);
  }

  FUNC_0(VAR_1->indexsize >= 2 * VAR_1->size);

  FUNC_14((void *) &VAR_4[0], VAR_5, VAR_1->size);
  FUNC_14((void *) &VAR_4[VAR_1->size], VAR_5, VAR_1->size);
  VAR_2 = FUNC_15(sizeof(GISTENTRY));
  FUNC_13(*VAR_2, FUNC_12(VAR_4), VAR_0->rel, VAR_0->page,
       VAR_0->offset, 0);
 }
 else
  VAR_2 = VAR_0;

 return VAR_2;
}
