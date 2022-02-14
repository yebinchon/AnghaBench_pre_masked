
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct batadv_ogm_packet {int ttl; int tq; scalar_t__ reserved; int flags; int version; int packet_type; } ;
struct TYPE_2__ {unsigned char* ogm_buff; int ogm_buff_mutex; int ogm_buff_len; int ogm_seqno; } ;
struct batadv_hard_iface {TYPE_1__ bat_iv; } ;
typedef int random_seqno ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 unsigned char* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct batadv_hard_iface *VAR_7)
{
 struct batadv_ogm_packet *VAR_8;
 unsigned char *VAR_9;
 u32 VAR_10;

 FUNC_3(&VAR_7->bat_iv.ogm_buff_mutex);


 FUNC_1(&VAR_10, sizeof(VAR_10));
 FUNC_0(&VAR_7->bat_iv.ogm_seqno, VAR_10);

 VAR_7->bat_iv.ogm_buff_len = VAR_3;
 VAR_9 = FUNC_2(VAR_7->bat_iv.ogm_buff_len, VAR_6);
 if (!VAR_9) {
  FUNC_4(&VAR_7->bat_iv.ogm_buff_mutex);
  return -VAR_5;
 }

 VAR_7->bat_iv.ogm_buff = VAR_9;

 VAR_8 = (struct batadv_ogm_packet *)VAR_9;
 VAR_8->packet_type = VAR_1;
 VAR_8->version = VAR_0;
 VAR_8->ttl = 2;
 VAR_8->flags = VAR_2;
 VAR_8->reserved = 0;
 VAR_8->tq = VAR_4;

 FUNC_4(&VAR_7->bat_iv.ogm_buff_mutex);

 return 0;
}
