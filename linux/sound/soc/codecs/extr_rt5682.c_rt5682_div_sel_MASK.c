
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5682_priv {int sysclk; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int const) ;

__attribute__((used)) static int FUNC_2(struct rt5682_priv *VAR_0,
     int VAR_1, const int VAR_2[], int VAR_3)
{
 int VAR_4;

 if (VAR_0->sysclk < VAR_1) {
  FUNC_0("sysclk rate %d is too low\n",
   VAR_0->sysclk);
  return 0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3 - 1; VAR_4++) {
  FUNC_1("div[%d]=%d\n", VAR_4, VAR_2[VAR_4]);
  if (VAR_1 * VAR_2[VAR_4] == VAR_0->sysclk)
   return VAR_4;
  if (VAR_1 * VAR_2[VAR_4 + 1] > VAR_0->sysclk) {
   FUNC_0("can't find div for sysclk %d\n",
    VAR_0->sysclk);
   return VAR_4;
  }
 }

 if (VAR_1 * VAR_2[VAR_4] < VAR_0->sysclk)
  FUNC_0("sysclk rate %d is too high\n",
   VAR_0->sysclk);

 return VAR_3 - 1;

}
