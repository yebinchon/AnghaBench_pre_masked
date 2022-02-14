
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct partition_group {scalar_t__ tree_start; unsigned long start; unsigned long length; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct partition_group*,int ,int) ;

__attribute__((used)) static void FUNC_4(tree *VAR_2, unsigned long VAR_3, struct partition_group *VAR_4, unsigned long *VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7 = 0;
 unsigned long VAR_8 = 0;
 unsigned long VAR_9 = 0;

 FUNC_1(VAR_3 < VAR_0);

 FUNC_3(VAR_4, 0, sizeof(struct partition_group) * VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_4[VAR_9].tree_start == VAR_1) {
   VAR_4[VAR_9].tree_start = VAR_2[VAR_6];
   VAR_4[VAR_9].start = VAR_6;
   VAR_8 = 0;
   VAR_7 = 0;
  }
  VAR_7 += (unsigned long)FUNC_2(FUNC_0(VAR_2[VAR_6]));
  VAR_8++;
  if (VAR_7 >= 64) {
   VAR_4[VAR_9].length = VAR_8;
   VAR_8 = 0;
   VAR_9++;
  }
 }

 if (VAR_4[VAR_9].tree_start != VAR_1 &&
     !VAR_4[VAR_9].length) {
  VAR_4[VAR_9].length = VAR_8;
  VAR_9++;
 }

 *VAR_5 = VAR_9;
}
