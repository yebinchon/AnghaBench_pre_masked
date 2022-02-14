
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_bus {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct hdac_bus*) ;
 int FUNC_2 (struct hdac_bus*,int ) ;
 int FUNC_3 (struct hdac_bus*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct hdac_bus *VAR_4)
{

 if (!(FUNC_2(VAR_4, VAR_2) & VAR_0)) {
  FUNC_0(VAR_4->dev, 0);
  FUNC_1(VAR_4);
  FUNC_0(VAR_4->dev, 1);
 }

 FUNC_3(VAR_4, VAR_3, VAR_1, VAR_1);
}
