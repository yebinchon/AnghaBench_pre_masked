
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_9__ {int ndigits; int weight; scalar_t__ sign; int * digits; } ;
typedef TYPE_1__ NumericVar ;
typedef int NumericDigit ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__ const*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static bool
FUNC_9(const NumericVar *VAR_3, int64 *VAR_4)
{
 NumericDigit *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int64 VAR_9;
 bool VAR_10;
 NumericVar VAR_11;


 FUNC_2(&VAR_11);
 FUNC_6(VAR_3, &VAR_11);
 FUNC_5(&VAR_11, 0);


 FUNC_7(&VAR_11);
 VAR_6 = VAR_11.ndigits;
 if (VAR_6 == 0)
 {
  *VAR_4 = 0;
  FUNC_1(&VAR_11);
  return 1;
 }





 VAR_7 = VAR_11.weight;
 FUNC_0(VAR_7 >= 0 && VAR_6 <= VAR_7 + 1);






 VAR_5 = VAR_11.digits;
 VAR_10 = (VAR_11.sign == VAR_1);
 VAR_9 = -VAR_5[0];
 for (VAR_8 = 1; VAR_8 <= VAR_7; VAR_8++)
 {
  if (FUNC_8(FUNC_3(VAR_9, VAR_0, &VAR_9)))
  {
   FUNC_1(&VAR_11);
   return 0;
  }

  if (VAR_8 < VAR_6)
  {
   if (FUNC_8(FUNC_4(VAR_9, VAR_5[VAR_8], &VAR_9)))
   {
    FUNC_1(&VAR_11);
    return 0;
   }
  }
 }

 FUNC_1(&VAR_11);

 if (!VAR_10)
 {
  if (FUNC_8(VAR_9 == VAR_2))
   return 0;
  VAR_9 = -VAR_9;
 }
 *VAR_4 = VAR_9;

 return 1;
}
