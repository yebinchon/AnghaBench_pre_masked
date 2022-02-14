
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct udphdr {int dummy; } ;
struct net_device {int needed_headroom; scalar_t__ min_mtu; scalar_t__ max_mtu; scalar_t__ mtu; } ;
struct l2tp_tunnel {scalar_t__ encap; int sock; } ;
struct l2tp_session {scalar_t__ hdr_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct l2tp_tunnel*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct l2tp_tunnel *VAR_3,
    struct l2tp_session *VAR_4,
    struct net_device *VAR_5)
{
 unsigned int VAR_6 = 0;
 u32 VAR_7 = 0;
 u32 VAR_8;


 if (VAR_3->encap == VAR_2) {
  VAR_6 += sizeof(struct udphdr);
  VAR_5->needed_headroom += sizeof(struct udphdr);
 }

 FUNC_2(VAR_3->sock);
 VAR_7 = FUNC_0(VAR_3->sock);
 FUNC_3(VAR_3->sock);

 if (VAR_7 == 0) {





  return;
 }



 VAR_6 += VAR_4->hdr_len + VAR_1 + VAR_7;

 VAR_8 = FUNC_1(VAR_3) - VAR_6;
 if (VAR_8 < VAR_5->min_mtu || VAR_8 > VAR_5->max_mtu)
  VAR_5->mtu = VAR_0 - VAR_6;
 else
  VAR_5->mtu = VAR_8;

 VAR_5->needed_headroom += VAR_4->hdr_len;
}
