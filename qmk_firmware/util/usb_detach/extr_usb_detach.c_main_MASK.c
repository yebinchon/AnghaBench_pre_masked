
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdevfs_ioctl {int ifno; int * data; int ioctl_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,struct usbdevfs_ioctl*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;

int FUNC_4(int VAR_3, char**VAR_4)
{
        struct usbdevfs_ioctl VAR_5;
        int VAR_6;
        int VAR_7;
        int VAR_8;
        if (VAR_3>1) {
                VAR_7 = FUNC_1(VAR_4[1],VAR_0);
                if (VAR_7<1){
                        FUNC_2("unable to open file");
                        return 1;
                }
                for (VAR_8=0;VAR_8<255;VAR_8++){
                        VAR_5.ifno = VAR_8;
                        VAR_5.ioctl_code = VAR_1;
                        VAR_5.data = ((void*)0);
                        VAR_6 = FUNC_0(VAR_7, VAR_2, &VAR_5);
                        if(VAR_6!=-1)
                                FUNC_3("un claimed interface %d %d\n",VAR_8,VAR_6);
                }
        } else {
                FUNC_3 ("usage: %s /dev/bus/usb/BUS/DEVICE\n",VAR_4[0]);
                FUNC_3("Release all interfaces of this usb device for usage in virtualisation\n");
        }
}
