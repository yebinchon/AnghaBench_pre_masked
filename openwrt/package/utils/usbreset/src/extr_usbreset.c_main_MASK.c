
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbentry {int dummy; } ;


 struct usbentry* FUNC_0 (int*,int*,int*,int*,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct usbentry*) ;
 int FUNC_5 (char*,char*,int*,int*) ;
 int VAR_0 ;
 int FUNC_6 (char*) ;

int FUNC_7(int VAR_1, char **VAR_2)
{
 int VAR_3, VAR_4;
 struct usbentry *VAR_5;

 if ((VAR_1 == 2) && (FUNC_5(VAR_2[1], "%3d/%3d", &VAR_3, &VAR_4) == 2))
 {
  VAR_5 = FUNC_0(&VAR_3, &VAR_4, ((void*)0), ((void*)0), ((void*)0));
 }
 else if ((VAR_1 == 2) && (FUNC_5(VAR_2[1], "%4x:%4x", &VAR_3, &VAR_4) == 2))
 {
  VAR_5 = FUNC_0(((void*)0), ((void*)0), &VAR_3, &VAR_4, ((void*)0));
 }
 else if ((VAR_1 == 2) && FUNC_6(VAR_2[1]) < 128)
 {
  VAR_5 = FUNC_0(((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_2[1]);
 }
 else
 {
  FUNC_3("Usage:\n"
         "  usbreset PPPP:VVVV - reset by product and vendor id\n"
         "  usbreset BBB/DDD   - reset by bus and device number\n"
         "  usbreset \"Product\" - reset by product name\n\n"
         "Devices:\n");
  FUNC_2();
  return 1;
 }

 if (!VAR_5)
 {
  FUNC_1(VAR_0, "No such device found\n");
  return 1;
 }

 FUNC_4(VAR_5);
 return 0;
}
