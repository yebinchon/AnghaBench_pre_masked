
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int USBH_URBStateTypeDef ;
typedef int USBH_StatusTypeDef ;
struct TYPE_12__ {int w; } ;
struct TYPE_13__ {int bmRequestType; TYPE_1__ wLength; } ;
struct TYPE_14__ {TYPE_2__ b; scalar_t__ d8; } ;
struct TYPE_15__ {int state; int errorcount; int pipe_out; int timer; int pipe_in; int length; int buff; TYPE_3__ setup; } ;
struct TYPE_16__ {TYPE_4__ Control; int RequestState; int os_event; int Timer; } ;
typedef TYPE_5__ USBH_HandleTypeDef ;


 int VAR_0 ;
 void* VAR_1 ;







 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_5__*,int ,int ,int ,int) ;
 int FUNC_2 (TYPE_5__*,int*,int ) ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_7 (USBH_HandleTypeDef *VAR_16)
{
  uint8_t VAR_17;
  USBH_StatusTypeDef VAR_18 = VAR_3;
  USBH_URBStateTypeDef VAR_19 = VAR_11;

  switch (VAR_16->Control.state)
  {
  case 133:

    FUNC_2 (VAR_16,
                    (uint8_t *)VAR_16->Control.setup.d8 ,
                    VAR_16->Control.pipe_out);

    VAR_16->Control.state = 132;
    break;

  case 132:

    VAR_19 = FUNC_4(VAR_16, VAR_16->Control.pipe_out);

    if(VAR_19 == VAR_9)
    {
      VAR_17 = (VAR_16->Control.setup.b.bmRequestType & VAR_15);


      if (VAR_16->Control.setup.b.wLength.w != 0 )
      {
        if (VAR_17 == VAR_14)
        {

          VAR_16->Control.state = 138;
        }
        else
        {

          VAR_16->Control.state = 136;
        }
      }

      else
      {

        if (VAR_17 == VAR_14)
        {

          VAR_16->Control.state = 129;
        }
        else
        {

          VAR_16->Control.state = 131;
        }
      }



    }
    else if(VAR_19 == VAR_10)
    {
      VAR_16->Control.state = 134;



    }
    break;

  case 138:

     VAR_16->Control.timer = VAR_16->Timer;
    FUNC_0(VAR_16,
                        VAR_16->Control.buff,
                        VAR_16->Control.length,
                        VAR_16->Control.pipe_in);

    VAR_16->Control.state = 137;
    break;

  case 137:

    VAR_19 = FUNC_4(VAR_16 , VAR_16->Control.pipe_in);


    if (VAR_19 == VAR_9)
    {
      VAR_16->Control.state = 129;



    }


    if (VAR_19 == VAR_13)
    {

      VAR_18 = VAR_7;



    }
    else if (VAR_19 == VAR_10)
    {

      VAR_16->Control.state = 134;



    }
    break;

  case 136:

    FUNC_1 (VAR_16,
                      VAR_16->Control.buff,
                      VAR_16->Control.length ,
                      VAR_16->Control.pipe_out,
                      1);
     VAR_16->Control.timer = VAR_16->Timer;
    VAR_16->Control.state = 135;
    break;

  case 135:

    VAR_19 = FUNC_4(VAR_16 , VAR_16->Control.pipe_out);

    if (VAR_19 == VAR_9)
    {
      VAR_16->Control.state = 131;



    }


    else if (VAR_19 == VAR_13)
    {

      VAR_16->Control.state = VAR_2;
      VAR_18 = VAR_7;



    }
    else if (VAR_19 == VAR_12)
    {

      VAR_16->Control.state = 136;




    }
    else if (VAR_19 == VAR_10)
    {

      VAR_16->Control.state = 134;
      VAR_18 = VAR_5;




    }
    break;


  case 131:

    FUNC_0 (VAR_16,
                         0,
                         0,
                         VAR_16->Control.pipe_in);
    VAR_16->Control.timer = VAR_16->Timer;
    VAR_16->Control.state = 130;

    break;

  case 130:

    VAR_19 = FUNC_4(VAR_16 , VAR_16->Control.pipe_in);

    if ( VAR_19 == VAR_9)
    {
      VAR_16->Control.state = VAR_1;
      VAR_18 = VAR_8;



    }

    else if (VAR_19 == VAR_10)
    {
      VAR_16->Control.state = 134;



    }
     else if(VAR_19 == VAR_13)
    {

      VAR_18 = VAR_7;




    }
    break;

  case 129:
    FUNC_1 (VAR_16,
                      0,
                      0,
                      VAR_16->Control.pipe_out,
                      1);
     VAR_16->Control.timer = VAR_16->Timer;
    VAR_16->Control.state = 128;
    break;

  case 128:

    VAR_19 = FUNC_4(VAR_16 , VAR_16->Control.pipe_out);
    if (VAR_19 == VAR_9)
    {
      VAR_18 = VAR_8;
      VAR_16->Control.state = VAR_1;




    }
    else if (VAR_19 == VAR_12)
    {
      VAR_16->Control.state = 129;




    }
    else if (VAR_19 == VAR_10)
    {
      VAR_16->Control.state = 134;




    }
    break;

  case 134:
    if (++ VAR_16->Control.errorcount <= VAR_6)
    {

      FUNC_5(VAR_16);


      VAR_16->Control.state = 133;
      VAR_16->RequestState = VAR_0;
    }
    else
    {
      VAR_16->Control.errorcount = 0;
      FUNC_3("Control error");
      VAR_18 = VAR_5;

    }
    break;

  default:
    break;
  }
  return VAR_18;
}
