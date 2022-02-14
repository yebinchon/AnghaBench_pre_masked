
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct partition_group {int start; int length; } ;
typedef int ranctx ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long,struct partition_group*,unsigned long*) ;
 unsigned long FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(tree *VAR_0, unsigned long VAR_1, ranctx *VAR_2)
{
 unsigned long VAR_3, VAR_4;
 struct partition_group VAR_5[VAR_1];
 unsigned long VAR_6 = 0;
 unsigned long VAR_7;

 FUNC_1(VAR_0, VAR_1, (struct partition_group *)&VAR_5, &VAR_6);
 for (VAR_3 = VAR_6 - 1; VAR_3 > 0; VAR_3--) {
  struct partition_group VAR_8;
  VAR_7 = FUNC_2(VAR_2) % (VAR_3 + 1);
  VAR_8 = VAR_5[VAR_3];
  VAR_5[VAR_3] = VAR_5[VAR_7];
  VAR_5[VAR_7] = VAR_8;
 }

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  for (VAR_3 = VAR_5[VAR_4].start + VAR_5[VAR_4].length - 1; VAR_3 > VAR_5[VAR_4].start; VAR_3--) {
   tree VAR_9;
   if (FUNC_0(VAR_0[VAR_3]))
    continue;
   VAR_7 = FUNC_2(VAR_2) % (VAR_3 + 1);

   if (FUNC_0(VAR_0[VAR_7]))
    continue;
   VAR_9 = VAR_0[VAR_3];
   VAR_0[VAR_3] = VAR_0[VAR_7];
   VAR_0[VAR_7] = VAR_9;
  }
 }
}
