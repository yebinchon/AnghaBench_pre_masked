
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WordEntry ;
typedef int TSVector ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(TSVector VAR_0)
{
 WordEntry *VAR_1 = FUNC_0(VAR_0),
      *VAR_2 = (WordEntry *) FUNC_2(VAR_0);
 int VAR_3 = 0;

 while (VAR_1 < VAR_2)
 {
  int VAR_4 = FUNC_1(VAR_0, VAR_1);

  if (VAR_4 == 0)
   VAR_3 += 1;
  else
   VAR_3 += VAR_4;

  VAR_1++;
 }

 return VAR_3;
}
