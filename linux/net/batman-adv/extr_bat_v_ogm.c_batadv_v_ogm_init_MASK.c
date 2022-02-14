
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned char* ogm_buff; int ogm_buff_mutex; int ogm_wq; int ogm_seqno; int ogm_buff_len; } ;
struct batadv_priv {TYPE_1__ bat_v; } ;
struct batadv_ogm2_packet {int throughput; int flags; int ttl; int version; int packet_type; } ;
typedef int random_seqno ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_8 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 unsigned char* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct batadv_priv *VAR_9)
{
 struct batadv_ogm2_packet *VAR_10;
 unsigned char *VAR_11;
 u32 VAR_12;

 VAR_9->bat_v.ogm_buff_len = VAR_3;
 VAR_11 = FUNC_4(VAR_9->bat_v.ogm_buff_len, VAR_7);
 if (!VAR_11)
  return -VAR_6;

 VAR_9->bat_v.ogm_buff = VAR_11;
 VAR_10 = (struct batadv_ogm2_packet *)VAR_11;
 VAR_10->packet_type = VAR_2;
 VAR_10->version = VAR_0;
 VAR_10->ttl = VAR_5;
 VAR_10->flags = VAR_1;
 VAR_10->throughput = FUNC_3(VAR_4);


 FUNC_2(&VAR_12, sizeof(VAR_12));
 FUNC_1(&VAR_9->bat_v.ogm_seqno, VAR_12);
 FUNC_0(&VAR_9->bat_v.ogm_wq, VAR_8);

 FUNC_5(&VAR_9->bat_v.ogm_buff_mutex);

 return 0;
}
