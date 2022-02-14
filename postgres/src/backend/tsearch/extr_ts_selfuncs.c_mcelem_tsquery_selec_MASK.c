
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int text ;
typedef int float4 ;
struct TYPE_4__ {int frequency; int * element; } ;
typedef TYPE_1__ TextFreq ;
typedef int TSQuery ;
typedef int Selectivity ;
typedef int Datum ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ,TYPE_1__*,int,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static Selectivity
FUNC_10(TSQuery VAR_0, Datum *VAR_1, int VAR_2,
      float4 *VAR_3, int VAR_4)
{
 float4 VAR_5;
 TextFreq *VAR_6;
 Selectivity VAR_7;
 int VAR_8;
 if (VAR_4 != VAR_2 + 2)
  return FUNC_9(VAR_0);




 VAR_6 = (TextFreq *) FUNC_6(sizeof(TextFreq) * VAR_2);
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
 {




  FUNC_0(!FUNC_4(VAR_1[VAR_8]) && !FUNC_5(VAR_1[VAR_8]));
  VAR_6[VAR_8].element = (text *) FUNC_1(VAR_1[VAR_8]);
  VAR_6[VAR_8].frequency = VAR_3[VAR_8];
 }





 VAR_5 = VAR_3[VAR_4 - 2];

 VAR_7 = FUNC_8(FUNC_3(VAR_0), FUNC_2(VAR_0), VAR_6,
         VAR_2, VAR_5);

 FUNC_7(VAR_6);

 return VAR_7;
}
