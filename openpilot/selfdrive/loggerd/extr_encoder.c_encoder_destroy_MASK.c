
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_in_bufs; int num_out_bufs; int * v_ptr2; int * u_ptr2; int * y_ptr2; scalar_t__ downscale; int handle; int * out_buf_headers; int * in_buf_headers; int open; } ;
typedef TYPE_1__ EncoderState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;

void FUNC_6(EncoderState *VAR_6) {
  int VAR_7;

  FUNC_3(!VAR_6->open);

  VAR_7 = FUNC_2(VAR_6->handle, VAR_0, VAR_2, ((void*)0));
  FUNC_3(VAR_7 == VAR_1);

  FUNC_5(VAR_6, VAR_2);

  VAR_7 = FUNC_2(VAR_6->handle, VAR_0, VAR_3, ((void*)0));
  FUNC_3(VAR_7 == VAR_1);

  for (int VAR_8=0; VAR_8<VAR_6->num_in_bufs; VAR_8++) {
    VAR_7 = FUNC_0(VAR_6->handle, VAR_4, VAR_6->in_buf_headers[VAR_8]);
    FUNC_3(VAR_7 == VAR_1);
  }
  FUNC_4(VAR_6->in_buf_headers);

  for (int VAR_9=0; VAR_9<VAR_6->num_out_bufs; VAR_9++) {
    VAR_7 = FUNC_0(VAR_6->handle, VAR_5, VAR_6->out_buf_headers[VAR_9]);
    FUNC_3(VAR_7 == VAR_1);
  }
  FUNC_4(VAR_6->out_buf_headers);

  FUNC_5(VAR_6, VAR_3);

  VAR_7 = FUNC_1(VAR_6->handle);
  FUNC_3(VAR_7 == VAR_1);

  if (VAR_6->downscale) {
    FUNC_4(VAR_6->y_ptr2);
    FUNC_4(VAR_6->u_ptr2);
    FUNC_4(VAR_6->v_ptr2);
  }
}
