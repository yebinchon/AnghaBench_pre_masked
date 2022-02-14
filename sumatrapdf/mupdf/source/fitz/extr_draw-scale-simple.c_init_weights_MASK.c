
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int new_line; int* index; scalar_t__ patch_l; } ;
typedef TYPE_1__ fz_weights ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(fz_weights *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_1 -= VAR_0->patch_l;
 FUNC_0(VAR_0->count == VAR_1-1);
 VAR_0->count++;
 VAR_0->new_line = 1;
 if (VAR_1 == 0)
  VAR_2 = VAR_0->index[0];
 else
 {
  VAR_2 = VAR_0->index[VAR_1-1];
  VAR_2 += 2 + VAR_0->index[VAR_2+1];
 }
 VAR_0->index[VAR_1] = VAR_2;
 VAR_0->index[VAR_2] = 0;
 VAR_0->index[VAR_2+1] = 0;
}
