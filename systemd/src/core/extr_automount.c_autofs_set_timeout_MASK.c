
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct TYPE_2__ {scalar_t__ timeout; } ;
struct autofs_dev_ioctl {int ioctlfd; TYPE_1__ timeout; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (struct autofs_dev_ioctl*) ;
 scalar_t__ FUNC_3 (int,int ,struct autofs_dev_ioctl*) ;

__attribute__((used)) static int FUNC_4(int VAR_4, int VAR_5, usec_t VAR_6) {
        struct autofs_dev_ioctl VAR_7;

        FUNC_1(VAR_4 >= 0);
        FUNC_1(VAR_5 >= 0);

        FUNC_2(&VAR_7);
        VAR_7.ioctlfd = VAR_5;

        if (VAR_6 == VAR_1)
                VAR_7.timeout.timeout = 0;
        else

                VAR_7.timeout.timeout = FUNC_0(VAR_6, VAR_2);

        if (FUNC_3(VAR_4, VAR_0, &VAR_7) < 0)
                return -VAR_3;

        return 0;
}
