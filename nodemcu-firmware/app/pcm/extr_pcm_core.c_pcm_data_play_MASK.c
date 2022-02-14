
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint8 ;
typedef scalar_t__ task_param_t ;
struct TYPE_3__ {size_t buf_size; size_t* data; size_t len; void* empty; scalar_t__ rpos; } ;
typedef TYPE_1__ pcm_buf_t ;
typedef int lua_State ;
struct TYPE_4__ {size_t fbuf_idx; int isr_throttled; scalar_t__ cb_data_ref; scalar_t__ cb_drained_ref; int self_ref; TYPE_1__* bufs; } ;
typedef TYPE_2__ cfg_t ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,scalar_t__,int) ;
 int FUNC_2 (size_t*) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int) ;
 char* FUNC_5 (int *,int,size_t*) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (size_t) ;
 int FUNC_8 (size_t*,char const*,size_t) ;

void FUNC_9( task_param_t VAR_6, uint8 VAR_7 )
{
  cfg_t *VAR_8 = (cfg_t *)VAR_6;
  pcm_buf_t *VAR_9 = &(VAR_8->bufs[VAR_8->fbuf_idx]);
  size_t VAR_10;
  const char *VAR_11 = ((void*)0);
  uint8_t VAR_12 = VAR_0;
  lua_State *VAR_13 = FUNC_3();


  if ((VAR_8->isr_throttled >= 0) &&
      (VAR_8->cb_data_ref != VAR_1)) {
    FUNC_1( VAR_13, VAR_8->self_ref, VAR_8->cb_data_ref, 1 );
    VAR_12 = VAR_5;

    if (FUNC_6( VAR_13, -1 ) == VAR_2) {
      VAR_11 = FUNC_5( VAR_13, -1, &VAR_10 );
      if (VAR_10 > VAR_9->buf_size) {
        uint8_t *VAR_14 = (uint8_t *) FUNC_7( VAR_10 );
        if (VAR_14) {
          if (VAR_9->data) FUNC_2( VAR_9->data );
          VAR_9->buf_size = VAR_10;
          VAR_9->data = VAR_14;
        }
      }
    }
  }

  if (VAR_11) {
    size_t VAR_15 = VAR_10 > VAR_9->buf_size ? VAR_9->buf_size : VAR_10;
    FUNC_8( VAR_9->data, VAR_11, VAR_15 );

    VAR_9->rpos = 0;
    VAR_9->len = VAR_15;
    VAR_9->empty = VAR_0;
    FUNC_0( VAR_3 );
    FUNC_4( VAR_13, 1 );

    if (VAR_8->isr_throttled > 0) {
      uint8_t VAR_16 = VAR_8->fbuf_idx ^ 1;

      if (VAR_8->bufs[VAR_16].empty) {

        FUNC_0( VAR_4 );
        VAR_8->fbuf_idx = VAR_16;
        FUNC_9( VAR_6, 0 );
      }

      VAR_8->isr_throttled = 0;
    }
  } else {
    FUNC_0( VAR_3 );
    if (VAR_12) FUNC_4( VAR_13, 1 );

    if (VAR_8->isr_throttled > 0) {



      VAR_8->isr_throttled = -1;

      FUNC_1( VAR_13, VAR_8->self_ref, VAR_8->cb_drained_ref, 0 );
    }
  }

}
