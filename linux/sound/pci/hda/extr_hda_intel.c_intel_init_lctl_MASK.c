
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
 int VAR_6 ;
 struct hdac_bus* FUNC_0 (struct azx*) ;
 int FUNC_1 (struct azx*) ;
 int FUNC_2 (struct azx*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct azx *VAR_7)
{
 struct hdac_bus *VAR_8 = FUNC_0(VAR_7);
 u32 VAR_9;
 int VAR_10;


 VAR_9 = FUNC_3(VAR_8->mlcap + VAR_4 + VAR_5);

 if ((VAR_9 & VAR_6) != 0)
  return;





 if (((VAR_9 & VAR_2) >> VAR_3) !=
  ((VAR_9 & VAR_0) >> VAR_1))
  return;


 VAR_10 = FUNC_2(VAR_7, 0);
 FUNC_4(100);
 if (VAR_10)
  goto set_spa;


 VAR_9 &= ~VAR_6;
 VAR_9 |= FUNC_1(VAR_7);
 FUNC_5(VAR_9, VAR_8->mlcap + VAR_4 + VAR_5);

set_spa:

 FUNC_2(VAR_7, 1);
 FUNC_4(100);
}
