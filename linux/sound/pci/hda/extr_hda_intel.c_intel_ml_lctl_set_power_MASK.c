
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdac_bus {scalar_t__ mlcap; } ;
struct azx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct hdac_bus* FUNC_0 (struct azx*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct azx *VAR_6, int VAR_7)
{
 struct hdac_bus *VAR_8 = FUNC_0(VAR_6);
 u32 VAR_9;
 int VAR_10;





 VAR_9 = FUNC_1(VAR_8->mlcap + VAR_4 + VAR_5);
 VAR_9 &= ~VAR_2;
 VAR_9 |= VAR_7 << VAR_3;
 FUNC_3(VAR_9, VAR_8->mlcap + VAR_4 + VAR_5);

 VAR_10 = 50;
 while (VAR_10) {
  if (((FUNC_1(VAR_8->mlcap + VAR_4 + VAR_5)) &
      VAR_0) == (VAR_7 << VAR_1))
   return 0;
  VAR_10--;
  FUNC_2(10);
 }

 return -1;
}
