
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* index; int patch_l; } ;
typedef TYPE_1__ fz_weights ;



__attribute__((used)) static void
FUNC_0(fz_weights *VAR_0, int VAR_1, int VAR_2, float VAR_3, float VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7 = 0;
 int VAR_8 = -256;
 int VAR_9 = 0;
 int VAR_10;

 VAR_5 = VAR_0->index[VAR_1 - VAR_0->patch_l];
 VAR_5++;
 VAR_6 = VAR_0->index[VAR_5++];

 for(VAR_10=0; VAR_10 < VAR_6; VAR_10++)
 {
  int VAR_11 = VAR_0->index[VAR_5++];
  VAR_7 += VAR_11;
  if (VAR_11 > VAR_8)
  {
   VAR_8 = VAR_11;
   VAR_9 = VAR_5;
  }
 }


 if (((VAR_1 != 0) && (VAR_1 != VAR_2-1)) || (VAR_7 > 256))
  VAR_0->index[VAR_9-1] += 256-VAR_7;


 else if ((VAR_1 == 0) && (VAR_3 < 0.0001f) && (VAR_7 != 256))
  VAR_0->index[VAR_9-1] += 256-VAR_7;


 else if ((VAR_1 == VAR_2-1) && (VAR_2 - VAR_4 < 0.0001f) && (VAR_7 != 256))
  VAR_0->index[VAR_9-1] += 256-VAR_7;
}
