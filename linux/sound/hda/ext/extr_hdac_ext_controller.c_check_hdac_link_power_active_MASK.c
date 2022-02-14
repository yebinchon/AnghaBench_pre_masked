
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdac_ext_link {scalar_t__ ml_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct hdac_ext_link *VAR_3, bool VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 int VAR_7 = (1 << VAR_0);

 FUNC_1(3);
 VAR_5 = 150;

 do {
  VAR_6 = FUNC_0(VAR_3->ml_addr + VAR_1);
  if (VAR_4) {
   if (((VAR_6 & VAR_7) >> VAR_0))
    return 0;
  } else {
   if (!((VAR_6 & VAR_7) >> VAR_0))
    return 0;
  }
  FUNC_1(3);
 } while (--VAR_5);

 return -VAR_2;
}
