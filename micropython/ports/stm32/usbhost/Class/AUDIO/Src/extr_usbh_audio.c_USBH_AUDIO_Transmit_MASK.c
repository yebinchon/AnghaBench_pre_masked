
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_13__ {int Timer; TYPE_1__* pActiveClass; } ;
typedef TYPE_4__ USBH_HandleTypeDef ;
struct TYPE_12__ {int timer; int buf; int frame_length; int partial_ptr; int global_ptr; int cbuf; int Poll; int total_length; int Pipe; } ;
struct TYPE_11__ {int supported; } ;
struct TYPE_14__ {int processing_state; int play_state; TYPE_3__ headphone; TYPE_2__ control; } ;
struct TYPE_10__ {TYPE_5__* pData; } ;
typedef TYPE_5__ AUDIO_HandleTypeDef ;




 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,int,int,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int VAR_2 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_3 (USBH_HandleTypeDef *VAR_3)
{
  USBH_StatusTypeDef VAR_4 = VAR_1 ;
  AUDIO_HandleTypeDef *VAR_5 = VAR_3->pActiveClass->pData;

  switch(VAR_5->processing_state)
  {
  case 128:

    if((VAR_3->Timer & 1) == 0)
    {
      VAR_5->headphone.timer = VAR_3->Timer;
      VAR_5->processing_state = 129;
      FUNC_1(VAR_3,
                       VAR_5->headphone.buf,
                       VAR_5->headphone.frame_length,
                       VAR_5->headphone.Pipe);

      VAR_5->headphone.partial_ptr = VAR_5->headphone.frame_length;
      VAR_5->headphone.global_ptr = VAR_5->headphone.frame_length;
      VAR_5->headphone.cbuf = VAR_5->headphone.buf;

    }
    break;

  case 129:
    if((FUNC_2(VAR_3 , VAR_5->headphone.Pipe) == VAR_2)&&
       (( VAR_3->Timer - VAR_5->headphone.timer) >= VAR_5->headphone.Poll))
    {
      VAR_5->headphone.timer = VAR_3->Timer;

      if(VAR_5->control.supported == 1)
      {
        FUNC_0 (VAR_3);
      }

      if(VAR_5->headphone.global_ptr <= VAR_5->headphone.total_length)
      {
        FUNC_1(VAR_3,
                          VAR_5->headphone.cbuf,
                          VAR_5->headphone.frame_length,
                          VAR_5->headphone.Pipe);

        VAR_5->headphone.cbuf += VAR_5->headphone.frame_length;
        VAR_5->headphone.partial_ptr += VAR_5->headphone.frame_length;
        VAR_5->headphone.global_ptr += VAR_5->headphone.frame_length;
      }
      else
      {
       VAR_5->headphone.partial_ptr = 0xFFFFFFFF;
       VAR_5->play_state = VAR_0;
      }
    }
    break;
  }
  return VAR_4;
}
