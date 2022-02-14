
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double float4 ;
typedef double Selectivity ;
typedef int Oid ;
typedef int FmgrInfo ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static Selectivity
FUNC_4(Datum *VAR_0, float4 *VAR_1, int VAR_2,
      Datum *VAR_3, float4 *VAR_4, int VAR_5,
      Oid VAR_6)
{
 Selectivity VAR_7 = 0.0;
 FmgrInfo VAR_8;
 int VAR_9,
    VAR_10;

 FUNC_2(FUNC_3(VAR_6), &VAR_8);

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
 {
  for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
   if (FUNC_0(FUNC_1(&VAR_8,
             VAR_0[VAR_9],
             VAR_3[VAR_10])))
    VAR_7 += VAR_1[VAR_9] * VAR_4[VAR_10];
 }
 return VAR_7;
}
