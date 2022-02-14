
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
typedef int WordEntry ;
struct TYPE_4__ {scalar_t__ prefix; } ;
typedef int TSVector ;
typedef int TSQuery ;
typedef TYPE_1__ QueryOperand ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ,int *,TYPE_1__*,int) ;

__attribute__((used)) static WordEntry *
FUNC_4(TSVector VAR_0, TSQuery VAR_1, QueryOperand *VAR_2, int32 *VAR_3)
{
 WordEntry *VAR_4 = FUNC_0(VAR_0);
 WordEntry *VAR_5 = (WordEntry *) FUNC_2(VAR_0);
 WordEntry *VAR_6 = VAR_5;
 int VAR_7;

 *VAR_3 = 0;


 while (VAR_4 < VAR_5)
 {
  VAR_6 = VAR_4 + (VAR_5 - VAR_4) / 2;
  VAR_7 = FUNC_3(FUNC_2(VAR_0), FUNC_1(VAR_1), VAR_6, VAR_2, 0);
  if (VAR_7 == 0)
  {
   VAR_5 = VAR_6;
   *VAR_3 = 1;
   break;
  }
  else if (VAR_7 > 0)
   VAR_4 = VAR_6 + 1;
  else
   VAR_5 = VAR_6;
 }

 if (VAR_2->prefix)
 {
  if (VAR_4 >= VAR_5)
   VAR_6 = VAR_5;

  *VAR_3 = 0;

  while (VAR_6 < (WordEntry *) FUNC_2(VAR_0) &&
      FUNC_3(FUNC_2(VAR_0), FUNC_1(VAR_1), VAR_6, VAR_2, 1) == 0)
  {
   (*VAR_3)++;
   VAR_6++;
  }
 }

 return (*VAR_3 > 0) ? VAR_5 : ((void*)0);
}
