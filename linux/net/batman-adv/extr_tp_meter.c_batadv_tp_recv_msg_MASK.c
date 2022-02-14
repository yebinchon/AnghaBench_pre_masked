
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct batadv_unicast_packet {int dummy; } ;
struct batadv_tp_vars {scalar_t__ role; scalar_t__ last_recv; int last_recv_time; } ;
struct batadv_priv {int dummy; } ;
struct batadv_icmp_tp_packet {scalar_t__ orig; int uid; int session; int timestamp; int seqno; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct batadv_priv*,char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct batadv_tp_vars*) ;
 int FUNC_3 (struct batadv_tp_vars*,struct sk_buff const*) ;
 struct batadv_tp_vars* FUNC_4 (struct batadv_priv*,struct batadv_icmp_tp_packet const*) ;
 struct batadv_tp_vars* FUNC_5 (struct batadv_priv*,scalar_t__,int ) ;
 int FUNC_6 (struct batadv_priv*,scalar_t__,scalar_t__,int ,int ,int ) ;
 int FUNC_7 (struct batadv_tp_vars*) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (struct batadv_tp_vars*) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct batadv_priv *VAR_4,
          const struct sk_buff *VAR_5)
{
 const struct batadv_icmp_tp_packet *VAR_6;
 struct batadv_tp_vars *VAR_7;
 size_t VAR_8;
 u32 VAR_9;

 VAR_6 = (struct batadv_icmp_tp_packet *)VAR_5->data;

 VAR_9 = FUNC_9(VAR_6->seqno);



 if (VAR_9 == VAR_1) {
  VAR_7 = FUNC_4(VAR_4, VAR_6);
  if (!VAR_7) {
   FUNC_0(VAR_0, VAR_4,
       "Meter: seqno != BATADV_TP_FIRST_SEQ cannot initiate connection\n");
   goto out;
  }
 } else {
  VAR_7 = FUNC_5(VAR_4, VAR_6->orig,
            VAR_6->session);
  if (!VAR_7) {
   FUNC_0(VAR_0, VAR_4,
       "Unexpected packet from %pM!\n",
       VAR_6->orig);
   goto out;
  }
 }

 if (FUNC_10(VAR_7->role != VAR_2)) {
  FUNC_0(VAR_0, VAR_4,
      "Meter: dropping packet: not expected (role=%u)\n",
      VAR_7->role);
  goto out;
 }

 VAR_7->last_recv_time = VAR_3;




 if (FUNC_1(VAR_9, VAR_7->last_recv))
  goto send_ack;


 if (FUNC_9(VAR_6->seqno) != VAR_7->last_recv) {



  if (!FUNC_3(VAR_7, VAR_5))
   goto out;


  goto send_ack;
 }


 VAR_8 = VAR_5->len - sizeof(struct batadv_unicast_packet);
 VAR_7->last_recv += VAR_8;


 FUNC_2(VAR_7);

send_ack:




 FUNC_6(VAR_4, VAR_6->orig, VAR_7->last_recv,
      VAR_6->timestamp, VAR_6->session, VAR_6->uid);
out:
 if (FUNC_8(VAR_7))
  FUNC_7(VAR_7);
}
