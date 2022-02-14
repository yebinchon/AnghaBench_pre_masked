
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
typedef int USBH_URBStateTypeDef ;
typedef int USBH_StatusTypeDef ;
struct TYPE_22__ {int os_event; TYPE_2__* pActiveClass; } ;
typedef TYPE_6__ USBH_HandleTypeDef ;
struct TYPE_17__ {int data; } ;
struct TYPE_19__ {int Flags; int DataTransferLength; int LUN; } ;
struct TYPE_20__ {TYPE_3__ field; int data; } ;
struct TYPE_21__ {int state; int cmd_state; TYPE_1__ csw; int pbuf; TYPE_4__ cbw; } ;
struct TYPE_23__ {TYPE_5__ hbot; int InPipe; int OutPipe; int OutEpSize; int InEpSize; } ;
struct TYPE_18__ {TYPE_7__* pData; } ;
typedef TYPE_7__ MSC_HandleTypeDef ;
typedef int BOT_CSWStatusTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;







 int VAR_7 ;
 int FUNC_0 (TYPE_6__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_6__*,int ,int ,int ,int) ;
 int VAR_8 ;
 int FUNC_2 (TYPE_6__*,int ) ;
 int FUNC_3 (TYPE_6__*,int ) ;
 int FUNC_4 (TYPE_6__*,int ,int ) ;
 int FUNC_5 (TYPE_6__*,int ,int ) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_8 (int ,int ,int ) ;

USBH_StatusTypeDef FUNC_9 (USBH_HandleTypeDef *VAR_18, uint8_t VAR_19)
{
  USBH_StatusTypeDef VAR_20 = VAR_7;
  USBH_StatusTypeDef VAR_21 = VAR_7;
  BOT_CSWStatusTypeDef VAR_22 = VAR_2;
  USBH_URBStateTypeDef VAR_23 = VAR_13;
  MSC_HandleTypeDef *VAR_24 = VAR_18->pActiveClass->pData;
  uint8_t VAR_25 = 0;

  switch (VAR_24->hbot.state)
  {
  case 130:
    VAR_24->hbot.cbw.field.LUN = VAR_19;
    VAR_24->hbot.state = 129;
    FUNC_1 (VAR_18,
                       VAR_24->hbot.cbw.data,
                       VAR_0,
                       VAR_24->OutPipe,
                       1);

    break;

  case 129:

    VAR_23 = FUNC_3(VAR_18, VAR_24->OutPipe);

    if(VAR_23 == VAR_11)
    {
      if ( VAR_24->hbot.cbw.field.DataTransferLength != 0 )
      {

        if (((VAR_24->hbot.cbw.field.Flags) & VAR_17) == VAR_16)
        {

          VAR_24->hbot.state = 138;
        }
        else
        {

          VAR_24->hbot.state = 136;
        }
      }

      else
      {
        VAR_24->hbot.state = 132;
      }




    }
    else if(VAR_23 == VAR_14)
    {

      VAR_24->hbot.state = 130;



    }
    else if(VAR_23 == VAR_15)
    {
      VAR_24->hbot.state = 133;



    }
    break;

  case 138:

    FUNC_0 (VAR_18,
                          VAR_24->hbot.pbuf,
                          VAR_24->InEpSize ,
                          VAR_24->InPipe);

    VAR_24->hbot.state = 137;

    break;

  case 137:

    VAR_23 = FUNC_3(VAR_18, VAR_24->InPipe);

    if(VAR_23 == VAR_11)
    {

      if(VAR_24->hbot.cbw.field.DataTransferLength > VAR_24->InEpSize)
      {
          VAR_24->hbot.pbuf += VAR_24->InEpSize;
          VAR_24->hbot.cbw.field.DataTransferLength -= VAR_24->InEpSize;
      }
      else
      {
        VAR_24->hbot.cbw.field.DataTransferLength = 0;
      }


      if(VAR_24->hbot.cbw.field.DataTransferLength > 0)
      {

        FUNC_0 (VAR_18,
                              VAR_24->hbot.pbuf,
                              VAR_24->InEpSize ,
                              VAR_24->InPipe);

      }
      else
      {

        VAR_24->hbot.state = 132;



      }
    }
    else if(VAR_23 == VAR_15)
    {

      VAR_24->hbot.state = 134;
    }
    break;

  case 136:

    FUNC_1 (VAR_18,
                       VAR_24->hbot.pbuf,
                       VAR_24->OutEpSize ,
                       VAR_24->OutPipe,
                       1);


    VAR_24->hbot.state = 135;
    break;

  case 135:
    VAR_23 = FUNC_3(VAR_18, VAR_24->OutPipe);

    if(VAR_23 == VAR_11)
    {

      if(VAR_24->hbot.cbw.field.DataTransferLength > VAR_24->OutEpSize)
      {
          VAR_24->hbot.pbuf += VAR_24->OutEpSize;
          VAR_24->hbot.cbw.field.DataTransferLength -= VAR_24->OutEpSize;
      }
      else
      {
        VAR_24->hbot.cbw.field.DataTransferLength = 0;
      }


      if(VAR_24->hbot.cbw.field.DataTransferLength > 0)
      {
        FUNC_1 (VAR_18,
                           VAR_24->hbot.pbuf,
                           VAR_24->OutEpSize ,
                           VAR_24->OutPipe,
                           1);
      }
      else
      {

        VAR_24->hbot.state = 132;
      }



    }

    else if(VAR_23 == VAR_14)
    {

      VAR_24->hbot.state = 136;



    }

    else if(VAR_23 == VAR_15)
    {
      VAR_24->hbot.state = 133;
    }
    break;

  case 132:

    FUNC_0 (VAR_18,
                          VAR_24->hbot.csw.data,
                          VAR_4 ,
                          VAR_24->InPipe);

    VAR_24->hbot.state = 131;
    break;

  case 131:

    VAR_23 = FUNC_3(VAR_18, VAR_24->InPipe);


    if(VAR_23 == VAR_11)
    {
      VAR_24->hbot.state = 130;
      VAR_24->hbot.cmd_state = VAR_1;
      VAR_22 = FUNC_7(VAR_18);

      if(VAR_22 == VAR_3)
      {
        VAR_20 = VAR_9;
      }
      else
      {
        VAR_20 = VAR_8;
      }



    }
    else if(VAR_23 == VAR_15)
    {
      VAR_24->hbot.state = 134;



    }
    break;

  case 134:
    VAR_21 = FUNC_5(VAR_18, VAR_19, VAR_5);

    if (VAR_21 == VAR_9)
    {
      VAR_24->hbot.state = 132;
    }
    else if (VAR_21 == VAR_10)
    {

      VAR_24->hbot.state = 128;
    }
    break;

  case 133:
    VAR_21 = FUNC_5(VAR_18, VAR_19, VAR_6);

    if ( VAR_21 == VAR_9)
    {

      VAR_25 = FUNC_2(VAR_18, VAR_24->OutPipe);
      FUNC_4(VAR_18, VAR_24->OutPipe, 1- VAR_25);
      FUNC_4(VAR_18, VAR_24->InPipe, 0);
      VAR_24->hbot.state = 134;
    }
    else if (VAR_21 == VAR_10)
    {
      VAR_24->hbot.state = 128;
    }
    break;


  case 128:
    VAR_20 = FUNC_6(VAR_18);
    if ( VAR_20 == VAR_9)
    {
      VAR_24->hbot.state = 130;
    }
    break;

  default:
    break;
  }
  return VAR_20;
}
