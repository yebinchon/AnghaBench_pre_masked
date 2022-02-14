
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* index; int patch_l; int max_len; } ;
typedef TYPE_1__ fz_weights ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static void
FUNC_3(fz_weights *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = VAR_0->index[VAR_1 - VAR_0->patch_l];
 int VAR_4 = VAR_0->index[VAR_3++];
 int VAR_5 = VAR_0->index[VAR_3++];
 int VAR_6 = VAR_0->max_len;
 int VAR_7 = VAR_3+VAR_6;
 int VAR_8, VAR_9;


 FUNC_1(&VAR_0->index[VAR_7], &VAR_0->index[VAR_3], sizeof(int)*VAR_5);


 FUNC_0(VAR_5 <= VAR_6);
 FUNC_0(VAR_4+VAR_5 <= VAR_2);
 VAR_9 = 0;
 if (VAR_5 < VAR_6)
 {
  FUNC_2(&VAR_0->index[VAR_7+VAR_5], 0, sizeof(int)*(VAR_6-VAR_5));
  VAR_5 = VAR_6;
  if (VAR_4 + VAR_5 > VAR_2)
  {
   VAR_9 = VAR_4 + VAR_5 - VAR_2;
   VAR_4 = VAR_2 - VAR_5;
   VAR_0->index[VAR_3-2] = VAR_4;
  }
  VAR_0->index[VAR_3-1] = VAR_5;
 }


 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
 {
  VAR_0->index[VAR_3+((VAR_4+VAR_8+VAR_9) % VAR_6)] = VAR_0->index[VAR_7+VAR_8];
 }
}
