
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ readonly; } ;
typedef TYPE_1__ device_extension ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static NTSTATUS FUNC_1(device_extension* VAR_2) {
    FUNC_0("IOCTL_DISK_IS_WRITABLE\n");

    return VAR_2->readonly ? VAR_0 : VAR_1;
}
