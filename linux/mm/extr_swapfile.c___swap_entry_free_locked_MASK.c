
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {unsigned char* swap_map; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct swap_info_struct*,unsigned long,unsigned char) ;

__attribute__((used)) static unsigned char FUNC_2(struct swap_info_struct *VAR_4,
           unsigned long VAR_5,
           unsigned char VAR_6)
{
 unsigned char VAR_7;
 unsigned char VAR_8;

 VAR_7 = VAR_4->swap_map[VAR_5];

 VAR_8 = VAR_7 & VAR_1;
 VAR_7 &= ~VAR_1;

 if (VAR_6 == VAR_1) {
  FUNC_0(!VAR_8);
  VAR_8 = 0;
 } else if (VAR_7 == VAR_3) {




  VAR_7 = 0;
 } else if ((VAR_7 & ~VAR_0) <= VAR_2) {
  if (VAR_7 == VAR_0) {
   if (FUNC_1(VAR_4, VAR_5, VAR_7))
    VAR_7 = VAR_2 | VAR_0;
   else
    VAR_7 = VAR_2;
  } else
   VAR_7--;
 }

 VAR_6 = VAR_7 | VAR_8;
 VAR_4->swap_map[VAR_5] = VAR_6 ? : VAR_1;

 return VAR_6;
}
