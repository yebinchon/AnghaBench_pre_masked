
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_media_addr {int dummy; } ;
struct tipc_media_addr {int broadcast; int value; int media_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct udp_media_addr*,int) ;
 int FUNC_1 (struct tipc_media_addr*,int ,int) ;
 scalar_t__ FUNC_2 (struct udp_media_addr*) ;

__attribute__((used)) static void FUNC_3(struct tipc_media_addr *VAR_2,
        struct udp_media_addr *VAR_3)
{
 FUNC_1(VAR_2, 0, sizeof(struct tipc_media_addr));
 VAR_2->media_id = VAR_1;
 FUNC_0(VAR_2->value, VAR_3, sizeof(struct udp_media_addr));

 if (FUNC_2(VAR_3))
  VAR_2->broadcast = VAR_0;
}
