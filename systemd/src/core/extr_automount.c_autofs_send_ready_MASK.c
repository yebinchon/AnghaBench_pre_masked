
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_3__ {void* token; } ;
struct TYPE_4__ {int status; void* token; } ;
struct autofs_dev_ioctl {int ioctlfd; TYPE_1__ ready; TYPE_2__ fail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct autofs_dev_ioctl*) ;
 scalar_t__ FUNC_2 (int,int ,struct autofs_dev_ioctl*) ;

__attribute__((used)) static int FUNC_3(int VAR_3, int VAR_4, uint32_t VAR_5, int VAR_6) {
        struct autofs_dev_ioctl VAR_7;

        FUNC_0(VAR_3 >= 0);
        FUNC_0(VAR_4 >= 0);

        FUNC_1(&VAR_7);
        VAR_7.ioctlfd = VAR_4;

        if (VAR_6 != 0) {
                VAR_7.fail.token = VAR_5;
                VAR_7.fail.status = VAR_6;
        } else
                VAR_7.ready.token = VAR_5;

        if (FUNC_2(VAR_3, VAR_6 ? VAR_0 : VAR_1, &VAR_7) < 0)
                return -VAR_2;

        return 0;
}
