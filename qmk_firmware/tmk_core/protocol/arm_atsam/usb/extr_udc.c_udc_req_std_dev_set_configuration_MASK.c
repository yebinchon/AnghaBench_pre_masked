
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_14__ {TYPE_6__* conf_lsfs; TYPE_6__* conf_hs; TYPE_2__* confdev_lsfs; TYPE_1__* confdev_hs; } ;
struct TYPE_13__ {TYPE_3__* desc; } ;
struct TYPE_11__ {int wValue; scalar_t__ wLength; } ;
struct TYPE_12__ {TYPE_4__ req; } ;
struct TYPE_10__ {scalar_t__ bNumInterfaces; } ;
struct TYPE_9__ {int bNumConfigurations; } ;
struct TYPE_8__ {int bNumConfigurations; } ;


 TYPE_7__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 int FUNC_1 () ;
 TYPE_5__ VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static bool FUNC_4(void) {
    uint8_t VAR_4;


    if (VAR_3.req.wLength) {
        return 0;
    }

    if (!FUNC_2()) {
        return 0;
    }
    {

        if ((VAR_3.req.wValue & 0xFF) > VAR_0.confdev_lsfs->bNumConfigurations) {
            return 0;
        }
    }


    FUNC_1();


    VAR_1 = VAR_3.req.wValue & 0xFF;
    if (VAR_1 == 0) {
        return 1;
    }







    {

        VAR_2 = &VAR_0.conf_lsfs[VAR_1 - 1];
    }

    for (VAR_4 = 0; VAR_4 < VAR_2->desc->bNumInterfaces; VAR_4++) {
        if (!FUNC_0(VAR_4, 0)) {
            return 0;
        }
    }
    return 1;
}
