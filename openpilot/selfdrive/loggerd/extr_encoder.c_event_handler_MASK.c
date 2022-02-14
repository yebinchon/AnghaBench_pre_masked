
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int state; int state_lock; int state_cv; } ;
typedef int OMX_U32 ;
typedef TYPE_1__* OMX_PTR ;
typedef int OMX_HANDLETYPE ;
typedef int OMX_EVENTTYPE ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_1__ EncoderState ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_6(OMX_HANDLETYPE VAR_2, OMX_PTR VAR_3, OMX_EVENTTYPE VAR_4,
                                   OMX_U32 VAR_5, OMX_U32 VAR_6, OMX_PTR VAR_7) {
  EncoderState *VAR_8 = VAR_3;

  switch (VAR_4) {
  case 129:
    FUNC_2(VAR_5 == VAR_0);
    FUNC_0("set state event 0x%x", VAR_6);
    FUNC_4(&VAR_8->state_lock);
    VAR_8->state = VAR_6;
    FUNC_3(&VAR_8->state_cv);
    FUNC_5(&VAR_8->state_lock);
    break;
  case 128:
    FUNC_1("OMX error 0x%08x", VAR_5);

    break;
  default:
    FUNC_1("unhandled event %d", VAR_4);
    FUNC_2(0);
    break;
  }

  FUNC_5(&VAR_8->state_lock);

  return VAR_1;
}
