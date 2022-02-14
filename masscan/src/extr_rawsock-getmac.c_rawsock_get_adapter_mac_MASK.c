
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sa_family; int sa_data; } ;
struct TYPE_4__ {TYPE_1__ ifru_hwaddr; } ;
struct ifreq {TYPE_2__ ifr_ifru; int ifr_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char const*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,char*) ;
 scalar_t__ FUNC_3 (unsigned char*,char*,int) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,char const*) ;

int
FUNC_8(const char *VAR_4, unsigned char *VAR_5)
{
    int VAR_6;
    int VAR_7;
    struct ifreq VAR_8;


    VAR_6 = FUNC_6(VAR_0, VAR_3, 0);
    if(VAR_6 < 0){
        FUNC_5("socket");
        goto end;
    }

    FUNC_7(VAR_8.ifr_name, VAR_1, VAR_4);
    VAR_7 = FUNC_2(VAR_6, VAR_2, (char *)&VAR_8);
    if (VAR_7 < 0) {
        FUNC_5("ioctl");
        goto end;
    }


    switch (VAR_8.ifr_ifru.ifru_hwaddr.sa_family) {
    case 1:
        FUNC_0(1, "if:%s: type=ethernet(1)\n", VAR_4);
        break;
    default:
        FUNC_0(1, "if:%s: type=0x%04x\n", VAR_4, VAR_8.ifr_ifru.ifru_hwaddr.sa_family);
    }


    FUNC_4(VAR_5, VAR_8.ifr_ifru.ifru_hwaddr.sa_data, 6);






    if (FUNC_3(VAR_5, "\0\0\0\0\0\0", 6) == 0
            && VAR_8.ifr_ifru.ifru_hwaddr.sa_family == 0xfffe) {
        FUNC_0(1, "%s: creating fake address\n", VAR_4);
        VAR_5[5] = 1;
    }

end:
    FUNC_1(VAR_6);
    return 0;
}
