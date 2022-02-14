
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct TYPE_5__ {unsigned int pcm_channels; unsigned int pcm_rate; int gref_directory; void* period_sz; void* buffer_sz; int pcm_format; } ;
struct TYPE_6__ {TYPE_1__ open; } ;
struct xensnd_req {TYPE_2__ op; } ;
struct TYPE_7__ {int req_io_lock; } ;
struct TYPE_8__ {TYPE_3__ req; } ;
struct xen_snd_front_evtchnl {TYPE_4__ u; int ring_io_lock; } ;
struct xen_front_pgdir_shbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xen_snd_front_evtchnl*) ;
 struct xensnd_req* FUNC_1 (struct xen_snd_front_evtchnl*,int ) ;
 int FUNC_2 (struct xen_snd_front_evtchnl*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct xen_front_pgdir_shbuf*) ;

int FUNC_6(struct xen_snd_front_evtchnl *VAR_1,
     struct xen_front_pgdir_shbuf *VAR_2,
     u8 VAR_3, unsigned int VAR_4,
     unsigned int VAR_5, u32 VAR_6,
     u32 VAR_7)
{
 struct xensnd_req *VAR_8;
 int VAR_9;

 FUNC_3(&VAR_1->u.req.req_io_lock);

 FUNC_3(&VAR_1->ring_io_lock);
 VAR_8 = FUNC_1(VAR_1, VAR_0);
 VAR_8->op.open.pcm_format = VAR_3;
 VAR_8->op.open.pcm_channels = VAR_4;
 VAR_8->op.open.pcm_rate = VAR_5;
 VAR_8->op.open.buffer_sz = VAR_6;
 VAR_8->op.open.period_sz = VAR_7;
 VAR_8->op.open.gref_directory =
  FUNC_5(VAR_2);
 FUNC_4(&VAR_1->ring_io_lock);

 VAR_9 = FUNC_0(VAR_1);

 if (VAR_9 == 0)
  VAR_9 = FUNC_2(VAR_1);

 FUNC_4(&VAR_1->u.req.req_io_lock);
 return VAR_9;
}
