
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct autofs_dev_ioctl {int ver_minor; int ver_major; } ;
struct TYPE_4__ {scalar_t__ dev_autofs_fd; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 (struct autofs_dev_ioctl*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,struct autofs_dev_ioctl*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (char*,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(Manager *VAR_4) {
        struct autofs_dev_ioctl VAR_5;

        FUNC_0(VAR_4);

        if (VAR_4->dev_autofs_fd >= 0)
                return VAR_4->dev_autofs_fd;

        (void) FUNC_3("/dev/autofs", 0);

        VAR_4->dev_autofs_fd = FUNC_6("/dev/autofs", VAR_1|VAR_2);
        if (VAR_4->dev_autofs_fd < 0)
                return FUNC_5(VAR_3, "Failed to open /dev/autofs: %m");

        FUNC_1(&VAR_5);
        if (FUNC_2(VAR_4->dev_autofs_fd, VAR_0, &VAR_5) < 0) {
                VAR_4->dev_autofs_fd = FUNC_7(VAR_4->dev_autofs_fd);
                return -VAR_3;
        }

        FUNC_4("Autofs kernel version %i.%i", VAR_5.ver_major, VAR_5.ver_minor);

        return VAR_4->dev_autofs_fd;
}
