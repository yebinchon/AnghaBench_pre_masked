
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int dying; int state; } ;
struct TYPE_5__ {scalar_t__ hard_byte_limit; scalar_t__ hard_packet_limit; scalar_t__ soft_byte_limit; scalar_t__ soft_packet_limit; } ;
struct TYPE_4__ {scalar_t__ bytes; scalar_t__ packets; scalar_t__ use_time; } ;
struct xfrm_state {TYPE_3__ km; TYPE_2__ lft; TYPE_1__ curlft; int mtimer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct xfrm_state*,int ,int ) ;
 scalar_t__ FUNC_2 () ;

int FUNC_3(struct xfrm_state *VAR_3)
{
 if (!VAR_3->curlft.use_time)
  VAR_3->curlft.use_time = FUNC_2();

 if (VAR_3->curlft.bytes >= VAR_3->lft.hard_byte_limit ||
     VAR_3->curlft.packets >= VAR_3->lft.hard_packet_limit) {
  VAR_3->km.state = VAR_2;
  FUNC_0(&VAR_3->mtimer, 0, VAR_1);
  return -VAR_0;
 }

 if (!VAR_3->km.dying &&
     (VAR_3->curlft.bytes >= VAR_3->lft.soft_byte_limit ||
      VAR_3->curlft.packets >= VAR_3->lft.soft_packet_limit)) {
  VAR_3->km.dying = 1;
  FUNC_1(VAR_3, 0, 0);
 }
 return 0;
}
