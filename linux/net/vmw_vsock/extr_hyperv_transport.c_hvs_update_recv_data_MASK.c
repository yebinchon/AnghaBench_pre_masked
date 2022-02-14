
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hvsock {scalar_t__ recv_data_off; scalar_t__ recv_data_len; TYPE_2__* vsk; scalar_t__ recv_desc; } ;
struct TYPE_3__ {scalar_t__ data_size; } ;
struct hvs_recv_buf {TYPE_1__ hdr; } ;
struct TYPE_4__ {int peer_shutdown; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct hvsock *VAR_3)
{
 struct hvs_recv_buf *VAR_4;
 u32 VAR_5;

 VAR_4 = (struct hvs_recv_buf *)(VAR_3->recv_desc + 1);
 VAR_5 = VAR_4->hdr.data_size;

 if (VAR_5 > VAR_1)
  return -VAR_0;

 if (VAR_5 == 0)
  VAR_3->vsk->peer_shutdown |= VAR_2;

 VAR_3->recv_data_len = VAR_5;
 VAR_3->recv_data_off = 0;

 return 0;
}
