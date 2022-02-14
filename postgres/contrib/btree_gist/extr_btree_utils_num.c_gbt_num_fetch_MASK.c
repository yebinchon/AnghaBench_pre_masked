
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64 ;
typedef int int32 ;
typedef int int16 ;
struct TYPE_8__ {int indexsize; int size; int t; } ;
typedef TYPE_1__ gbtree_ninfo ;
typedef int float8 ;
typedef int float4 ;
typedef int Timestamp ;
typedef int TimeADT ;
struct TYPE_9__ {int offset; int page; int rel; scalar_t__ key; } ;
typedef int Oid ;
typedef TYPE_2__ GISTENTRY ;
typedef int Datum ;
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
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__,int ,int ,int ,int ,int) ;
 TYPE_2__* FUNC_13 (int) ;

GISTENTRY *
FUNC_14(GISTENTRY *VAR_0, const gbtree_ninfo *VAR_1)
{
 GISTENTRY *VAR_2;
 Datum VAR_3;

 FUNC_0(VAR_1->indexsize >= 2 * VAR_1->size);






 switch (VAR_1->t)
 {
  case 133:
   VAR_3 = FUNC_5(*(int16 *) VAR_0->key);
   break;
  case 132:
   VAR_3 = FUNC_6(*(int32 *) VAR_0->key);
   break;
  case 131:
   VAR_3 = FUNC_7(*(int64 *) VAR_0->key);
   break;
  case 130:
  case 136:
   VAR_3 = FUNC_8(*(Oid *) VAR_0->key);
   break;
  case 135:
   VAR_3 = FUNC_3(*(float4 *) VAR_0->key);
   break;
  case 134:
   VAR_3 = FUNC_4(*(float8 *) VAR_0->key);
   break;
  case 137:
   VAR_3 = FUNC_2(*(DateADT *) VAR_0->key);
   break;
  case 129:
   VAR_3 = FUNC_10(*(TimeADT *) VAR_0->key);
   break;
  case 128:
   VAR_3 = FUNC_11(*(Timestamp *) VAR_0->key);
   break;
  case 138:
   VAR_3 = FUNC_1(*(Cash *) VAR_0->key);
   break;
  default:
   VAR_3 = FUNC_9(VAR_0->key);
 }

 VAR_2 = FUNC_13(sizeof(GISTENTRY));
 FUNC_12(*VAR_2, VAR_3, VAR_0->rel, VAR_0->page, VAR_0->offset,
      0);
 return VAR_2;
}
