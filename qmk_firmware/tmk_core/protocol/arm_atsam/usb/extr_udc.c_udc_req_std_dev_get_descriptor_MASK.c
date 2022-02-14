
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_13__ {int bDescriptorType; } ;
typedef TYPE_10__ usb_conf_desc_t ;
typedef size_t uint8_t ;
struct TYPE_24__ {int wValue; scalar_t__ wLength; } ;
struct TYPE_23__ {int wTotalLength; } ;
struct TYPE_22__ {TYPE_6__* desc; } ;
struct TYPE_21__ {int wTotalLength; } ;
struct TYPE_20__ {size_t bNumConfigurations; int bLength; } ;
struct TYPE_19__ {TYPE_3__* desc; } ;
struct TYPE_18__ {int wTotalLength; } ;
struct TYPE_17__ {size_t bNumConfigurations; int bLength; } ;
struct TYPE_16__ {int bLength; } ;
struct TYPE_15__ {TYPE_8__* conf_bos; TYPE_7__* conf_lsfs; TYPE_5__* confdev_lsfs; TYPE_4__* conf_hs; TYPE_2__* confdev_hs; TYPE_1__* qualifier; } ;
struct TYPE_14__ {scalar_t__ payload_size; TYPE_9__ req; scalar_t__ payload; } ;
 int FUNC_0 (int ) ;
 TYPE_12__ VAR_0 ;
 int FUNC_1 () ;
 TYPE_11__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (size_t*,int ) ;

__attribute__((used)) static bool FUNC_4(void) {
    uint8_t VAR_2;

    VAR_2 = VAR_1.req.wValue & 0xff;


    switch ((uint8_t)(VAR_1.req.wValue >> 8)) {
        case 131:






            {
                FUNC_3((uint8_t *)VAR_0.confdev_lsfs, VAR_0.confdev_lsfs->bLength);
            }
            break;

        case 132:
            {

                if (VAR_2 >= VAR_0.confdev_lsfs->bNumConfigurations) {
                    return 0;
                }
                FUNC_3((uint8_t *)VAR_0.conf_lsfs[VAR_2].desc, FUNC_0(VAR_0.conf_lsfs[VAR_2].desc->wTotalLength));
            }
            ((usb_conf_desc_t *)VAR_1.payload)->bDescriptorType = 132;
            break;
        case 133:

            if (VAR_0.conf_bos == ((void*)0)) {
                return 0;
            }
            FUNC_3((uint8_t *)VAR_0.conf_bos, VAR_0.conf_bos->wTotalLength);
            break;

        case 128:

            if (!FUNC_1()) {
                return 0;
            }
            break;

        default:

            return 0;
    }

    if (VAR_1.req.wLength < VAR_1.payload_size) {
        VAR_1.payload_size = VAR_1.req.wLength;
    }
    return 1;
}
