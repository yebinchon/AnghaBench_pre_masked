
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int *,char*,int ,int ,int ,int ) ;
 int * VAR_0 ;
 int FUNC_4 (int ,char*,unsigned int*,unsigned int*) ;

__attribute__((used)) static bool FUNC_5(struct usb_device *VAR_1, unsigned int *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4, VAR_5;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (!VAR_0[VAR_3] ||
      FUNC_4(VAR_0[VAR_3], "%x:%x", &VAR_4, &VAR_5) != 2 ||
      VAR_4 != *VAR_2)
   continue;
  FUNC_3(&VAR_1->dev,
    "device (%04x:%04x): applying quirk alias %04x:%04x\n",
    FUNC_2(*VAR_2), FUNC_1(*VAR_2),
    FUNC_2(VAR_5), FUNC_1(VAR_5));
  *VAR_2 = VAR_5;
  return 1;
 }

 return 0;
}
