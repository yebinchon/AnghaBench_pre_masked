
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_12__ {int os_event; TYPE_1__* pActiveClass; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;
struct TYPE_14__ {int ascq; int asc; int key; } ;
struct TYPE_13__ {TYPE_2__* unit; } ;
struct TYPE_11__ {int state; int error; TYPE_7__ sense; } ;
struct TYPE_10__ {TYPE_4__* pData; } ;
typedef TYPE_4__ MSC_HandleTypeDef ;


 int VAR_0 ;
 void* VAR_1 ;


 void* VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,size_t,int ,int *,int ) ;
 int FUNC_1 (TYPE_3__*,size_t,TYPE_7__*) ;
 int FUNC_2 (TYPE_3__*,size_t,int ,int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_5(USBH_HandleTypeDef *VAR_8, uint8_t VAR_9)
{
  MSC_HandleTypeDef *VAR_10 = VAR_8->pActiveClass->pData;
  USBH_StatusTypeDef VAR_11 = VAR_3 ;
  USBH_StatusTypeDef VAR_12 = VAR_3 ;


  switch (VAR_10->unit[VAR_9].state)
  {

  case 130:
    VAR_12 = FUNC_0(VAR_8,VAR_9, 0, ((void*)0), 0) ;

    if(VAR_12 == VAR_6)
    {
      VAR_10->unit[VAR_9].state = VAR_1;
      VAR_11 = VAR_6;
    }
    else if( VAR_12 == VAR_5)
    {
      VAR_10->unit[VAR_9].state = 129;
    }
    else if(VAR_12 == VAR_7)
    {
      VAR_10->unit[VAR_9].state = VAR_2;
          VAR_11 = VAR_5;
    }



    break;

  case 128:
    VAR_12 = FUNC_2(VAR_8,VAR_9, 0, ((void*)0), 0) ;

    if(VAR_12 == VAR_6)
    {
        VAR_10->unit[VAR_9].state = VAR_1;
        VAR_11 = VAR_6;
    }
    else if( VAR_12 == VAR_5)
    {
      VAR_10->unit[VAR_9].state = 129;
    }
    else if(VAR_12 == VAR_7)
    {
      VAR_10->unit[VAR_9].state = VAR_2;
          VAR_11 = VAR_5;
    }



    break;

  case 129:
    VAR_12 = FUNC_1(VAR_8, VAR_9, &VAR_10->unit[VAR_9].sense);

    if( VAR_12 == VAR_6)
    {
      FUNC_3 ("Sense Key  : %x", VAR_10->unit[VAR_9].sense.key);
      FUNC_3 ("Additional Sense Code : %x", VAR_10->unit[VAR_9].sense.asc);
      FUNC_3 ("Additional Sense Code Qualifier: %x", VAR_10->unit[VAR_9].sense.ascq);
      VAR_10->unit[VAR_9].state = VAR_1;
      VAR_10->unit[VAR_9].error = VAR_0;

      VAR_11 = VAR_5;
    }
    if( VAR_12 == VAR_5)
    {
      FUNC_3 ("Mass Storage Device NOT ready");
    }
    else if(VAR_12 == VAR_7)
    {
      VAR_10->unit[VAR_9].state = VAR_2;
          VAR_11 = VAR_5;
    }



    break;

  default:
    break;

  }
  return VAR_11;
}
