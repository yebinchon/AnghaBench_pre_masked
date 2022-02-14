
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef scalar_t__ st32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int,int) ;

ut32 FUNC_1(ut32 VAR_4, ut32 VAR_5) {
 ut32 VAR_6 = 0;
 VAR_1 = 0;
 if (VAR_0) {
  FUNC_0 ("pos => 0x%x len => %d ins_buff_len => %d\n", VAR_4, VAR_5, VAR_3);
 }

 if ((st32)VAR_4 < 0 || VAR_4 >= VAR_3) {
  VAR_1 = 1;
  return VAR_6;
 }

 for (; VAR_5 > 0; --VAR_5) {
  VAR_6 <<= 8;
  if (VAR_4 >= VAR_3) {
   VAR_1 = 1;
  } else {
   VAR_6 |= VAR_2[VAR_4++];
  }
 }

 return VAR_6;
}
