
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void** FUNC_0 (void**,int) ;

void FUNC_1(void ***VAR_0, int *VAR_1, void *VAR_2)
{
 int VAR_3, VAR_4;
 void **VAR_5;

 VAR_3 = *VAR_1;
 VAR_5 = *VAR_0;

 if ((VAR_3 & (VAR_3 - 1)) == 0) {
  if (!VAR_3) {
   VAR_4 = 1;
  } else {
   VAR_4 = VAR_3 * 2;
  }
  VAR_5 = FUNC_0 (VAR_5, VAR_4 * sizeof(void *));
  *VAR_0 = VAR_5;
 }
 VAR_5[VAR_3++] = VAR_2;
 *VAR_1 = VAR_3;
}
