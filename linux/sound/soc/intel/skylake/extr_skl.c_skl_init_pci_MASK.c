
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_dev {int pci; } ;
struct hdac_bus {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct hdac_bus* FUNC_1 (struct skl_dev*) ;
 int FUNC_2 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct skl_dev *VAR_1)
{
 struct hdac_bus *VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_2->dev, "Clearing TCSEL\n");
 FUNC_2(VAR_1->pci, VAR_0, 0x07, 0);
}
