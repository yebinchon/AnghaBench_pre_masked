
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int float4 ;
struct TYPE_6__ {int typalign; int typbyval; int typlen; int type_id; } ;
typedef TYPE_1__ TypeCacheEntry ;
typedef double Selectivity ;
typedef int Oid ;
typedef int Datum ;
typedef int ArrayType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int**,int**,int*) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int ) ;
 double FUNC_2 (int*,int,int *,int,int*,int,int ,TYPE_1__*) ;
 double FUNC_3 (int*,int,int *,int,int*,int,int *,int,int ,TYPE_1__*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*,int,int,int ,TYPE_1__*) ;

__attribute__((used)) static Selectivity
FUNC_6(ArrayType *VAR_5, TypeCacheEntry *VAR_6,
       Datum *VAR_7, int VAR_8,
       float4 *VAR_9, int VAR_10,
       float4 *VAR_11, int VAR_12,
       Oid VAR_13)
{
 Selectivity VAR_14;
 int VAR_15;
 Datum *VAR_16;
 bool *VAR_17;
 bool VAR_18;
 int VAR_19;
 int VAR_20;





 FUNC_0(VAR_5,
       VAR_6->type_id,
       VAR_6->typlen,
       VAR_6->typbyval,
       VAR_6->typalign,
       &VAR_16, &VAR_17, &VAR_15);


 VAR_19 = 0;
 VAR_18 = 0;
 for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++)
 {
  if (VAR_17[VAR_20])
   VAR_18 = 1;
  else
   VAR_16[VAR_19++] = VAR_16[VAR_20];
 }





 if (VAR_18 && VAR_13 == VAR_2)
 {
  FUNC_4(VAR_16);
  FUNC_4(VAR_17);
  return (Selectivity) 0.0;
 }


 FUNC_5(VAR_16, VAR_19, sizeof(Datum),
     VAR_4, VAR_6);


 if (VAR_13 == VAR_2 || VAR_13 == VAR_3)
  VAR_14 = FUNC_2(VAR_7, VAR_8,
               VAR_9, VAR_10,
               VAR_16, VAR_19,
               VAR_13, VAR_6);
 else if (VAR_13 == VAR_1)
  VAR_14 = FUNC_3(VAR_7, VAR_8,
            VAR_9, VAR_10,
            VAR_16, VAR_19,
            VAR_11, VAR_12,
            VAR_13, VAR_6);
 else
 {
  FUNC_1(VAR_0, "arraycontsel called for unrecognized operator %u",
    VAR_13);
  VAR_14 = 0.0;
 }

 FUNC_4(VAR_16);
 FUNC_4(VAR_17);
 return VAR_14;
}
