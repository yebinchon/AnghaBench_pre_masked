
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct radix_tree_root*,char*,int) ;
 int FUNC_2 (struct radix_tree_root*,unsigned long) ;
 int FUNC_3 (struct radix_tree_root*,unsigned long) ;
 int FUNC_4 (struct radix_tree_root*,unsigned long) ;
 int FUNC_5 (struct radix_tree_root*,unsigned long) ;
 scalar_t__ FUNC_6 (struct radix_tree_root*,unsigned long) ;
 int FUNC_7 (struct radix_tree_root*,unsigned long,int) ;
 int FUNC_8 (struct radix_tree_root*,unsigned long,int) ;
 int FUNC_9 (struct radix_tree_root*,unsigned long,int) ;
 int FUNC_10 (int,char*,int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(struct radix_tree_root *VAR_2, char *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;

 for (VAR_5 = 1; VAR_5 < VAR_1; VAR_5 *= VAR_0)
 for (VAR_6 = 1; VAR_6 < VAR_1; VAR_6 *= VAR_0)
 for (VAR_7 = 1; VAR_7 < VAR_1; VAR_7 *= VAR_0)
 for (VAR_8 = 1; VAR_8 < VAR_1; VAR_8 *= VAR_0) {
  int VAR_11;
  unsigned long VAR_12;
  int VAR_13 = 0;
  int VAR_14 = 0;
  int VAR_15 = 0;
  int VAR_16 = 0;
  int VAR_17;
  int VAR_18;

  for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
   VAR_12 = FUNC_11() % VAR_1;
   if (VAR_3[VAR_12] != 130)
    continue;
   FUNC_2(VAR_2, VAR_12);
   FUNC_5(VAR_2, VAR_12);
   FUNC_0(VAR_3[VAR_12] != 129);
   VAR_3[VAR_12] = 129;
   VAR_13++;
   VAR_10++;
  }

  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
   VAR_12 = FUNC_11() % VAR_1;
   if (VAR_3[VAR_12] == 130)
    continue;
   FUNC_3(VAR_2, VAR_12);
   if (FUNC_8(VAR_2, VAR_12, VAR_4)) {
    FUNC_0(VAR_3[VAR_12] == 128);
    VAR_9--;
   } else {
    FUNC_0(VAR_3[VAR_12] == 129);
   }
   FUNC_4(VAR_2, VAR_12);
   FUNC_0(VAR_3[VAR_12] != 130);
   VAR_3[VAR_12] = 130;
   VAR_14++;
   VAR_10--;
  }

  for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
   VAR_12 = FUNC_11() % VAR_1;
   if (VAR_3[VAR_12] != 129) {
    if (FUNC_6(VAR_2, VAR_12))
     FUNC_0(FUNC_8(VAR_2, VAR_12, VAR_4));
    continue;
   }
   FUNC_9(VAR_2, VAR_12, VAR_4);
   FUNC_9(VAR_2, VAR_12, VAR_4);
   FUNC_0(VAR_3[VAR_12] != 128);
   VAR_3[VAR_12] = 128;
   VAR_15++;
   VAR_9++;
  }

  for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
   VAR_12 = FUNC_11() % VAR_1;
   if (VAR_3[VAR_12] != 128)
    continue;
   FUNC_3(VAR_2, VAR_12);
   FUNC_0(FUNC_8(VAR_2, VAR_12, VAR_4));
   FUNC_7(VAR_2, VAR_12, VAR_4);
   FUNC_7(VAR_2, VAR_12, VAR_4);
   FUNC_0(VAR_3[VAR_12] != 129);
   VAR_3[VAR_12] = 129;
   VAR_16++;
   VAR_9--;
  }

  VAR_17 = 0;
  VAR_18 = 0;
  for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
   switch (VAR_3[VAR_12]) {
   case 130:
    FUNC_2(VAR_2, VAR_12);
    break;
   case 129:
    FUNC_3(VAR_2, VAR_12);
    FUNC_0(!FUNC_8(VAR_2, VAR_12, VAR_4));
    VAR_18++;
    break;
   case 128:
    FUNC_3(VAR_2, VAR_12);
    FUNC_0(FUNC_8(VAR_2, VAR_12, VAR_4));
    VAR_18++;
    VAR_17++;
    break;
   }
  }

  FUNC_1(VAR_2, VAR_3, VAR_4);

  FUNC_10(2, "%d(%d) %d(%d) %d(%d) %d(%d) / "
    "%d(%d) present, %d(%d) tagged\n",
   VAR_5, VAR_13,
   VAR_6, VAR_14,
   VAR_7, VAR_15,
   VAR_8, VAR_16,
   VAR_10, VAR_18,
   VAR_9, VAR_17);
 }
}
