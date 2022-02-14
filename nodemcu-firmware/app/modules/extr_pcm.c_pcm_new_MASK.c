
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int isr_throttled; int vu_freq; void* pin; TYPE_1__* bufs; void* cb_vu_ref; void* cb_stopped_ref; void* cb_paused_ref; void* cb_drained_ref; void* cb_data_ref; void* self_ref; scalar_t__ fbuf_idx; scalar_t__ rbuf_idx; } ;
struct TYPE_7__ {TYPE_5__* drv; TYPE_3__ cfg; } ;
typedef TYPE_2__ pud_t ;
typedef int lua_State ;
typedef TYPE_3__ cfg_t ;
struct TYPE_9__ {int (* init ) (TYPE_3__*) ;} ;
struct TYPE_6__ {int empty; scalar_t__ rpos; scalar_t__ len; int * data; scalar_t__ buf_size; } ;


 void* VAR_0 ;
 int FUNC_0 (int ,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int,int,char*) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 TYPE_5__ VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_8( lua_State *VAR_6 )
{
  pud_t *VAR_7 = (pud_t *) FUNC_4( VAR_6, sizeof( pud_t ) );
  cfg_t *VAR_8 = &(VAR_7->cfg);
  int VAR_9;

  VAR_8->rbuf_idx = VAR_8->fbuf_idx = 0;
  VAR_8->isr_throttled = -1;

  VAR_9 = FUNC_2( VAR_6, 1 );
  FUNC_1( VAR_6, (VAR_9 >= 0) && (VAR_9 < VAR_1), 1, "invalid driver" );

  VAR_8->self_ref = VAR_0;
  VAR_8->cb_data_ref = VAR_8->cb_drained_ref = VAR_0;
  VAR_8->cb_paused_ref = VAR_8->cb_stopped_ref = VAR_0;
  VAR_8->cb_vu_ref = VAR_0;

  VAR_8->bufs[0].buf_size = VAR_8->bufs[1].buf_size = 0;
  VAR_8->bufs[0].data = VAR_8->bufs[1].data = ((void*)0);
  VAR_8->bufs[0].len = VAR_8->bufs[1].len = 0;
  VAR_8->bufs[0].rpos = VAR_8->bufs[1].rpos = 0;
  VAR_8->bufs[0].empty = VAR_8->bufs[1].empty = VAR_3;

  VAR_8->vu_freq = 10;

  if (VAR_9 == VAR_2) {
    VAR_8->pin = FUNC_2( VAR_6, 2 );
    FUNC_0(VAR_5, VAR_8->pin);

    VAR_7->drv = &VAR_4;

    VAR_7->drv->init( VAR_8 );


    FUNC_5( VAR_6, -1 );
    FUNC_3( VAR_6, "pcm.driver" );
    FUNC_6( VAR_6, -2 );

    return 1;
  } else {
    VAR_7->drv = ((void*)0);
    return 0;
  }
}
