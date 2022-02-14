
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_forw_packet {int packet_len; unsigned long direct_link_flags; int num_packets; int skb; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char const*,int) ;

__attribute__((used)) static void FUNC_2(struct batadv_forw_packet *VAR_0,
        const unsigned char *VAR_1,
        int VAR_2, bool VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(VAR_0->skb, VAR_1, VAR_2);
 VAR_0->packet_len += VAR_2;
 VAR_0->num_packets++;


 if (VAR_3) {
  VAR_4 = FUNC_0(VAR_0->num_packets);
  VAR_0->direct_link_flags |= VAR_4;
 }
}
