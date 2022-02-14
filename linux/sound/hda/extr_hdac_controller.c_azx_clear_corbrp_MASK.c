
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_bus {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct hdac_bus*,int ) ;
 int FUNC_2 (struct hdac_bus*,int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct hdac_bus *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 1000; VAR_3 > 0; VAR_3--) {
  if (FUNC_1(VAR_2, VAR_1) & VAR_0)
   break;
  FUNC_3(1);
 }
 if (VAR_3 <= 0)
  FUNC_0(VAR_2->dev, "CORB reset timeout#1, CORBRP = %d\n",
   FUNC_1(VAR_2, VAR_1));

 FUNC_2(VAR_2, VAR_1, 0);
 for (VAR_3 = 1000; VAR_3 > 0; VAR_3--) {
  if (FUNC_1(VAR_2, VAR_1) == 0)
   break;
  FUNC_3(1);
 }
 if (VAR_3 <= 0)
  FUNC_0(VAR_2->dev, "CORB reset timeout#2, CORBRP = %d\n",
   FUNC_1(VAR_2, VAR_1));
}
