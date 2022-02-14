
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef double float4 ;
struct TYPE_8__ {int statsTuple; } ;
typedef TYPE_1__ VariableStatData ;
typedef int TypeCacheEntry ;
struct TYPE_10__ {int nnumbers; double* numbers; } ;
struct TYPE_9__ {double stanullfrac; } ;
typedef int RangeType ;
typedef int Oid ;
typedef TYPE_2__* Form_pg_statistic ;
typedef TYPE_3__ AttStatsSlot ;


 int VAR_0 ;
 int FUNC_0 (double) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int const*) ;
 int VAR_3 ;
 double FUNC_4 (int *,TYPE_1__*,int const*,int) ;
 double FUNC_5 (int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int ,int ,int ,int ) ;

__attribute__((used)) static double
FUNC_9(TypeCacheEntry *VAR_4, VariableStatData *VAR_5,
     const RangeType *VAR_6, Oid VAR_7)
{
 double VAR_8;
 double VAR_9;
 float4 VAR_10,
    VAR_11;




 if (FUNC_2(VAR_5->statsTuple))
 {
  Form_pg_statistic VAR_12;
  AttStatsSlot VAR_13;

  VAR_12 = (Form_pg_statistic) FUNC_1(VAR_5->statsTuple);
  VAR_11 = VAR_12->stanullfrac;


  if (FUNC_8(&VAR_13, VAR_5->statsTuple,
        VAR_3,
        VAR_2,
        VAR_0))
  {
   if (VAR_13.nnumbers != 1)
    FUNC_6(VAR_1, "invalid empty fraction statistic");
   VAR_10 = VAR_13.numbers[0];
   FUNC_7(&VAR_13);
  }
  else
  {

   VAR_10 = 0.0;
  }
 }
 else
 {






  VAR_11 = 0.0;
  VAR_10 = 0.0;
 }

 if (FUNC_3(VAR_6))
 {




  switch (VAR_7)
  {

   case 129:
   case 131:
   case 130:
   case 134:
   case 128:

   case 132:
    VAR_9 = 0.0;
    break;


   case 139:

   case 133:
    VAR_9 = VAR_10;
    break;


   case 137:

   case 136:
    VAR_9 = 1.0;
    break;


   case 135:
    VAR_9 = 1.0 - VAR_10;
    break;


   case 138:
   default:
    FUNC_6(VAR_1, "unexpected operator %u", VAR_7);
    VAR_9 = 0.0;
    break;
  }
 }
 else
 {
  VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_6,
             VAR_7);
  if (VAR_8 < 0.0)
   VAR_8 = FUNC_5(VAR_7);






  if (VAR_7 == 139)
  {

   VAR_9 = (1.0 - VAR_10) * VAR_8 + VAR_10;
  }
  else
  {

   VAR_9 = (1.0 - VAR_10) * VAR_8;
  }
 }


 VAR_9 *= (1.0 - VAR_11);


 FUNC_0(VAR_9);

 return VAR_9;
}
