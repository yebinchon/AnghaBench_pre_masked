
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_7__ USBH_HandleTypeDef ;
struct TYPE_14__ {scalar_t__ Signature; scalar_t__ Tag; int Status; } ;
struct TYPE_15__ {TYPE_4__ field; } ;
struct TYPE_12__ {scalar_t__ Tag; } ;
struct TYPE_13__ {TYPE_2__ field; } ;
struct TYPE_16__ {TYPE_5__ csw; TYPE_3__ cbw; } ;
struct TYPE_18__ {TYPE_6__ hbot; int InPipe; } ;
struct TYPE_11__ {TYPE_8__* pData; } ;
typedef TYPE_8__ MSC_HandleTypeDef ;
typedef int BOT_CSWStatusTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_7__*,int ) ;

__attribute__((used)) static BOT_CSWStatusTypeDef FUNC_1(USBH_HandleTypeDef *VAR_5)
{
  MSC_HandleTypeDef *VAR_6 = VAR_5->pActiveClass->pData;
  BOT_CSWStatusTypeDef VAR_7 = VAR_0;


    if(FUNC_0(VAR_5, VAR_6->InPipe) != VAR_2)
    {
      VAR_7 = VAR_3;
    }
    else
    {


      if(VAR_6->hbot.csw.field.Signature == VAR_4)
      {

        if(VAR_6->hbot.csw.field.Tag == VAR_6->hbot.cbw.field.Tag)
        {



          if(VAR_6->hbot.csw.field.Status == 0)
          {
            VAR_7 = VAR_1;
          }
          else if(VAR_6->hbot.csw.field.Status == 1)
          {
            VAR_7 = VAR_0;
          }

          else if(VAR_6->hbot.csw.field.Status == 2)
          {
            VAR_7 = VAR_3;
          }
        }
      }
      else
      {



        VAR_7 = VAR_3;
      }
    }

  return VAR_7;
}
