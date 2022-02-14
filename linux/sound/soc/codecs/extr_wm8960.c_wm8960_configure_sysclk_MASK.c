
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8960_priv {int bclk; int lrclk; } ;


 int FUNC_0 (int*) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static
int FUNC_1(struct wm8960_priv *VAR_3, int VAR_4,
       int *VAR_5, int *VAR_6, int *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15 = VAR_4;


 *VAR_7 = -1;

 VAR_9 = VAR_3->bclk;
 VAR_10 = VAR_3->lrclk;


 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_2); ++VAR_11) {
  if (VAR_2[VAR_11] == -1)
   continue;
  VAR_8 = VAR_4 / VAR_2[VAR_11];
  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_1); ++VAR_12) {
   if (VAR_8 != VAR_1[VAR_12] * VAR_10)
    continue;
   for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_0); ++VAR_13) {
    VAR_14 = VAR_8 - VAR_9 * VAR_0[VAR_13] / 10;
    if (VAR_14 == 0) {
     *VAR_5 = VAR_11;
     *VAR_6 = VAR_12;
     *VAR_7 = VAR_13;
     break;
    }
    if (VAR_14 > 0 && VAR_15 > VAR_14) {
     *VAR_5 = VAR_11;
     *VAR_6 = VAR_12;
     *VAR_7 = VAR_13;
     VAR_15 = VAR_14;
    }
   }
   if (VAR_13 != FUNC_0(VAR_0))
    break;
  }
  if (VAR_12 != FUNC_0(VAR_1))
   break;
 }
 return *VAR_7;
}
