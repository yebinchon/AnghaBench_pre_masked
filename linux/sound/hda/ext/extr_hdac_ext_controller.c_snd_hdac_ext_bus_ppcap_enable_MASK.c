
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_bus {int ppcap; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

void FUNC_2(struct hdac_bus *VAR_2, bool VAR_3)
{

 if (!VAR_2->ppcap) {
  FUNC_0(VAR_2->dev, "Address of PP capability is NULL");
  return;
 }

 if (VAR_3)
  FUNC_1(VAR_2->ppcap, VAR_1,
     VAR_0, VAR_0);
 else
  FUNC_1(VAR_2->ppcap, VAR_1,
     VAR_0, 0);
}
