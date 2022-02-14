
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* path; int blockio_device_bandwidths; } ;
typedef TYPE_1__ CGroupContext ;
typedef TYPE_1__ CGroupBlockIODeviceBandwidth ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(CGroupContext *VAR_1, CGroupBlockIODeviceBandwidth *VAR_2) {
        FUNC_1(VAR_1);
        FUNC_1(VAR_2);

        FUNC_0(VAR_0, VAR_1->blockio_device_bandwidths, VAR_2);
        FUNC_2(VAR_2->path);
        FUNC_2(VAR_2);
}
