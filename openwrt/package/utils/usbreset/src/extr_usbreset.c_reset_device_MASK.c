
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbentry {int bus_num; int dev_num; char* product_name; } ;
typedef int path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int,char*,int,int) ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct usbentry *VAR_4)
{
 int VAR_5;
 char VAR_6[VAR_1];

 FUNC_4(VAR_6, sizeof(VAR_6) - 1, "/dev/bus/usb/%03d/%03d",
          VAR_4->bus_num, VAR_4->dev_num);

 FUNC_3("Resetting %s ... ", VAR_4->product_name);

 if ((VAR_5 = FUNC_2(VAR_6, VAR_0)) > -1)
 {
  if (FUNC_1(VAR_5, VAR_2, 0) < 0)
   FUNC_3("failed [%s]\n", FUNC_5(VAR_3));
  else
   FUNC_3("ok\n");

  FUNC_0(VAR_5);
 }
 else
 {
  FUNC_3("can't open [%s]\n", FUNC_5(VAR_3));
 }
}
