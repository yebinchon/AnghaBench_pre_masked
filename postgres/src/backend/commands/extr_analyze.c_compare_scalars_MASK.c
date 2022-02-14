
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* tupnoLink; int ssup; } ;
struct TYPE_3__ {int tupno; int value; } ;
typedef TYPE_1__ ScalarItem ;
typedef int Datum ;
typedef TYPE_2__ CompareScalarsContext ;


 int FUNC_0 (int ,int,int ,int,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 Datum VAR_3 = ((const ScalarItem *) VAR_0)->value;
 int VAR_4 = ((const ScalarItem *) VAR_0)->tupno;
 Datum VAR_5 = ((const ScalarItem *) VAR_1)->value;
 int VAR_6 = ((const ScalarItem *) VAR_1)->tupno;
 CompareScalarsContext *VAR_7 = (CompareScalarsContext *) VAR_2;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_3, 0, VAR_5, 0, VAR_7->ssup);
 if (VAR_8 != 0)
  return VAR_8;




 if (VAR_7->tupnoLink[VAR_4] < VAR_6)
  VAR_7->tupnoLink[VAR_4] = VAR_6;
 if (VAR_7->tupnoLink[VAR_6] < VAR_4)
  VAR_7->tupnoLink[VAR_6] = VAR_4;




 return VAR_4 - VAR_6;
}
