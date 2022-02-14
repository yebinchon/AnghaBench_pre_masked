
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int sub_version; } ;
struct TYPE_3__ {int version; } ;
struct autofs_dev_ioctl {int ioctlfd; TYPE_2__ protosubver; TYPE_1__ protover; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct autofs_dev_ioctl*) ;
 scalar_t__ FUNC_2 (int,int ,struct autofs_dev_ioctl*) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(int VAR_3, int VAR_4) {
        uint32_t VAR_5, VAR_6;
        struct autofs_dev_ioctl VAR_7;

        FUNC_0(VAR_3 >= 0);
        FUNC_0(VAR_4 >= 0);

        FUNC_1(&VAR_7);
        VAR_7.ioctlfd = VAR_4;

        if (FUNC_2(VAR_3, VAR_1, &VAR_7) < 0)
                return -VAR_2;

        VAR_5 = VAR_7.protover.version;

        FUNC_1(&VAR_7);
        VAR_7.ioctlfd = VAR_4;

        if (FUNC_2(VAR_3, VAR_0, &VAR_7) < 0)
                return -VAR_2;

        VAR_6 = VAR_7.protosubver.sub_version;

        FUNC_3("Autofs protocol version %i.%i", VAR_5, VAR_6);
        return 0;
}
