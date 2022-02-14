
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int int32_t ;
typedef void* USBH_StatusTypeDef ;
struct TYPE_18__ {int (* pUser ) (TYPE_3__*,int ) ;int os_event; int Timer; TYPE_1__* pActiveClass; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;
struct TYPE_20__ {int ascq; int asc; int key; } ;
struct TYPE_19__ {int state; size_t current_lun; size_t max_lun; TYPE_2__* unit; int timer; } ;
struct TYPE_14__ {int block_nbr; int block_size; } ;
struct TYPE_15__ {int revision_id; int product_id; int vendor_id; } ;
struct TYPE_17__ {int state; void* prev_ready_state; int state_changed; void* error; TYPE_8__ sense; TYPE_10__ capacity; TYPE_12__ inquiry; } ;
struct TYPE_16__ {TYPE_4__* pData; } ;
typedef TYPE_4__ MSC_HandleTypeDef ;


 int VAR_0 ;
 void* VAR_1 ;


 void* VAR_2 ;
 void* VAR_3 ;





 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* FUNC_0 (TYPE_3__*,size_t,TYPE_12__*) ;
 void* FUNC_1 (TYPE_3__*,size_t,TYPE_10__*) ;
 void* FUNC_2 (TYPE_3__*,size_t,TYPE_8__*) ;
 void* FUNC_3 (TYPE_3__*,size_t) ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_7(USBH_HandleTypeDef *VAR_11)
{
  MSC_HandleTypeDef *VAR_12 = VAR_11->pActiveClass->pData;
  USBH_StatusTypeDef VAR_13 = VAR_6 ;
  USBH_StatusTypeDef VAR_14 = VAR_6 ;
  USBH_StatusTypeDef VAR_15 = VAR_6 ;

  switch (VAR_12->state)
  {
  case 133:

    if(VAR_12->current_lun < VAR_12->max_lun)
    {

      VAR_12->unit[VAR_12->current_lun].error = VAR_2;

      switch (VAR_12->unit[VAR_12->current_lun].state)
      {
      case 133:
        FUNC_4 ("LUN #%d: ", VAR_12->current_lun);
        VAR_12->unit[VAR_12->current_lun].state = 131;
        VAR_12->timer = VAR_11->Timer + 10000;

      case 131:
        VAR_14 = FUNC_0(VAR_11, VAR_12->current_lun, &VAR_12->unit[VAR_12->current_lun].inquiry);

        if( VAR_14 == VAR_9)
        {
          FUNC_4 ("Inquiry Vendor  : %s", VAR_12->unit[VAR_12->current_lun].inquiry.vendor_id);
          FUNC_4 ("Inquiry Product : %s", VAR_12->unit[VAR_12->current_lun].inquiry.product_id);
          FUNC_4 ("Inquiry Version : %s", VAR_12->unit[VAR_12->current_lun].inquiry.revision_id);
          VAR_12->unit[VAR_12->current_lun].state = 129;
        }
        if( VAR_14 == VAR_8)
        {
          VAR_12->unit[VAR_12->current_lun].state = 130;
        }
        else if(VAR_14 == VAR_10)
        {
          VAR_12->unit[VAR_12->current_lun].state = 134;
          VAR_12->unit[VAR_12->current_lun].error = VAR_1;
        }
        break;

      case 129:
        VAR_15 = FUNC_3(VAR_11, VAR_12->current_lun);

        if( VAR_15 == VAR_9)
        {
          if( VAR_12->unit[VAR_12->current_lun].prev_ready_state != VAR_9)
          {
            VAR_12->unit[VAR_12->current_lun].state_changed = 1;
            FUNC_4 ("Mass Storage Device ready");
          }
          else
          {
            VAR_12->unit[VAR_12->current_lun].state_changed = 0;
          }
          VAR_12->unit[VAR_12->current_lun].state = 132;
          VAR_12->unit[VAR_12->current_lun].error = VAR_3;
          VAR_12->unit[VAR_12->current_lun].prev_ready_state = VAR_9;
        }
        if( VAR_15 == VAR_8)
        {

          if( VAR_12->unit[VAR_12->current_lun].prev_ready_state != VAR_8)
          {
            VAR_12->unit[VAR_12->current_lun].state_changed = 1;
            FUNC_4 ("Mass Storage Device NOT ready");
          }
          else
          {
            VAR_12->unit[VAR_12->current_lun].state_changed = 0;
          }
            VAR_12->unit[VAR_12->current_lun].state = 130;
            VAR_12->unit[VAR_12->current_lun].error = VAR_2;
            VAR_12->unit[VAR_12->current_lun].prev_ready_state = VAR_8;
        }
        else if(VAR_15 == VAR_10)
        {
          VAR_12->unit[VAR_12->current_lun].state = 134;
          VAR_12->unit[VAR_12->current_lun].error = VAR_1;
        }
        break;

      case 132:
        VAR_14 = FUNC_1(VAR_11,VAR_12->current_lun, &VAR_12->unit[VAR_12->current_lun].capacity) ;

        if(VAR_14 == VAR_9)
        {
          if(VAR_12->unit[VAR_12->current_lun].state_changed == 1)
          {
            FUNC_4 ("Mass Storage Device capacity : %lu MB", (int32_t)((VAR_12->unit[VAR_12->current_lun].capacity.block_nbr * VAR_12->unit[VAR_12->current_lun].capacity.block_size)/1024/1024));

            FUNC_4 ("Block number : %lu", (int32_t)(VAR_12->unit[VAR_12->current_lun].capacity.block_nbr));
            FUNC_4 ("Block Size   : %lu", (int32_t)(VAR_12->unit[VAR_12->current_lun].capacity.block_size));
          }
          VAR_12->unit[VAR_12->current_lun].state = 134;
          VAR_12->unit[VAR_12->current_lun].error = VAR_3;
          VAR_12->current_lun++;
        }
        else if( VAR_14 == VAR_8)
        {
          VAR_12->unit[VAR_12->current_lun].state = 130;
        }
        else if(VAR_14 == VAR_10)
        {
          VAR_12->unit[VAR_12->current_lun].state = 134;
          VAR_12->unit[VAR_12->current_lun].error = VAR_1;
        }
        break;

      case 130:
        VAR_14 = FUNC_2(VAR_11, VAR_12->current_lun, &VAR_12->unit[VAR_12->current_lun].sense);

        if( VAR_14 == VAR_9)
        {
          if((VAR_12->unit[VAR_12->current_lun].sense.key == VAR_5) ||
             (VAR_12->unit[VAR_12->current_lun].sense.key == VAR_4) )
          {

            if(VAR_11->Timer <= VAR_12->timer)
            {
              VAR_12->unit[VAR_12->current_lun].state = 129;
              break;
            }
          }

          FUNC_4 ("Sense Key  : %x", VAR_12->unit[VAR_12->current_lun].sense.key);
          FUNC_4 ("Additional Sense Code : %x", VAR_12->unit[VAR_12->current_lun].sense.asc);
          FUNC_4 ("Additional Sense Code Qualifier: %x", VAR_12->unit[VAR_12->current_lun].sense.ascq);
          VAR_12->unit[VAR_12->current_lun].state = 134;
          VAR_12->current_lun++;
        }
        if( VAR_14 == VAR_8)
        {
          FUNC_4 ("Mass Storage Device NOT ready");
          VAR_12->unit[VAR_12->current_lun].state = 128;
        }
        else if(VAR_14 == VAR_10)
        {
          VAR_12->unit[VAR_12->current_lun].state = 134;
          VAR_12->unit[VAR_12->current_lun].error = VAR_1;
        }
        break;

      case 128:
        VAR_12->current_lun++;
        break;

      default:
        break;
      }




    }
    else
    {
      VAR_12->current_lun = 0;
    VAR_12->state = 134;



    VAR_11->pUser(VAR_11, VAR_0);
    }
    break;

  case 134:
    VAR_13 = VAR_9;
    break;

  default:
    break;
  }
  return VAR_13;
}
