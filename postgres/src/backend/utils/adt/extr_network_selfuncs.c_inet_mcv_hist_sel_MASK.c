
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double float4 ;
typedef double Selectivity ;
typedef int Datum ;


 double FUNC_0 (int *,int,int ,int) ;

__attribute__((used)) static Selectivity
FUNC_1(Datum *VAR_0, float4 *VAR_1, int VAR_2,
      Datum *VAR_3, int VAR_4,
      int VAR_5)
{
 Selectivity VAR_6 = 0.0;
 int VAR_7;





 VAR_5 = -VAR_5;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
 {
  VAR_6 += VAR_1[VAR_7] *
   FUNC_0(VAR_3, VAR_4, VAR_0[VAR_7],
        VAR_5);
 }
 return VAR_6;
}
