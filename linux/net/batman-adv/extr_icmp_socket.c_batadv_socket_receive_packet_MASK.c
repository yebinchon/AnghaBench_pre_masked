
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_socket_client {int dummy; } ;
struct batadv_icmp_header {size_t uid; } ;


 int FUNC_0 (struct batadv_socket_client*,struct batadv_icmp_header*,size_t) ;
 struct batadv_socket_client** VAR_0 ;

void FUNC_1(struct batadv_icmp_header *VAR_1,
      size_t VAR_2)
{
 struct batadv_socket_client *VAR_3;

 VAR_3 = VAR_0[VAR_1->uid];
 if (VAR_3)
  FUNC_0(VAR_3, VAR_1, VAR_2);
}
