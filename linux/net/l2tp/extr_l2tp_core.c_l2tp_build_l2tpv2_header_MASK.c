
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct l2tp_tunnel {int peer_tunnel_id; } ;
struct l2tp_session {int peer_session_id; int ns; int name; scalar_t__ send_seq; struct l2tp_tunnel* tunnel; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct l2tp_session*,int ,char*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct l2tp_session *VAR_3, void *VAR_4)
{
 struct l2tp_tunnel *VAR_5 = VAR_3->tunnel;
 __be16 *VAR_6 = VAR_4;
 __be16 *VAR_7 = VAR_4;
 u16 VAR_8 = VAR_1;
 u32 VAR_9 = VAR_5->peer_tunnel_id;
 u32 VAR_10 = VAR_3->peer_session_id;

 if (VAR_3->send_seq)
  VAR_8 |= VAR_0;


 *VAR_6++ = FUNC_0(VAR_8);
 *VAR_6++ = FUNC_0(VAR_9);
 *VAR_6++ = FUNC_0(VAR_10);
 if (VAR_3->send_seq) {
  *VAR_6++ = FUNC_0(VAR_3->ns);
  *VAR_6++ = 0;
  VAR_3->ns++;
  VAR_3->ns &= 0xffff;
  FUNC_1(VAR_3, VAR_2, "%s: updated ns to %u\n",
    VAR_3->name, VAR_3->ns);
 }

 return VAR_6 - VAR_7;
}
