
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int done_out; } ;
typedef TYPE_1__* OMX_PTR ;
typedef int OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef int OMX_BUFFERHEADERTYPE ;
typedef TYPE_1__ EncoderState ;


 int VAR_0 ;
 int FUNC_0 (int *,void*) ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_1(OMX_HANDLETYPE VAR_1, OMX_PTR VAR_2,
                                      OMX_BUFFERHEADERTYPE *VAR_3) {
  EncoderState *VAR_4 = VAR_2;



  FUNC_0(&VAR_4->done_out, (void*)VAR_3);

  return VAR_0;
}
