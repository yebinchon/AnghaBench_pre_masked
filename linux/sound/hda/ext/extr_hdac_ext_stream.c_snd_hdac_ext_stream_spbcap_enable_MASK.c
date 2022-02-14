
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdac_bus {int spbcap; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int,int) ;

void FUNC_2(struct hdac_bus *VAR_1,
     bool VAR_2, int VAR_3)
{
 u32 VAR_4 = 0;

 if (!VAR_1->spbcap) {
  FUNC_0(VAR_1->dev, "Address of SPB capability is NULL\n");
  return;
 }

 VAR_4 |= (1 << VAR_3);

 if (VAR_2)
  FUNC_1(VAR_1->spbcap, VAR_0, VAR_4, VAR_4);
 else
  FUNC_1(VAR_1->spbcap, VAR_0, VAR_4, 0);
}
