
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int udp6_addr ;
struct udp_port_cfg {int use_udp6_rx_checksums; int use_udp6_tx_checksums; scalar_t__ peer_udp_port; int peer_ip6; scalar_t__ local_udp_port; int local_ip6; scalar_t__ bind_ifindex; scalar_t__ ipv6_v6only; } ;
struct socket {int sk; } ;
struct sockaddr_in6 {scalar_t__ sin6_port; int sin6_addr; void* sin6_family; } ;
struct sockaddr {int dummy; } ;
struct net {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct socket*,struct sockaddr*,int) ;
 int FUNC_1 (struct socket*,struct sockaddr*,int,int ) ;
 int FUNC_2 (struct socket*,int ,int ,void*,int) ;
 int FUNC_3 (struct socket*,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct sockaddr_in6*,int ,int) ;
 int FUNC_6 (struct net*,void*,int ,int ,struct socket**) ;
 int FUNC_7 (struct socket*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;

int FUNC_10(struct net *VAR_7, struct udp_port_cfg *VAR_8,
       struct socket **VAR_9)
{
 struct sockaddr_in6 VAR_10 = {};
 int VAR_11;
 struct socket *VAR_12 = ((void*)0);

 VAR_11 = FUNC_6(VAR_7, VAR_0, VAR_4, 0, &VAR_12);
 if (VAR_11 < 0)
  goto error;

 if (VAR_8->ipv6_v6only) {
  int VAR_13 = 1;

  VAR_11 = FUNC_2(VAR_12, VAR_1, VAR_2,
     (char *) &VAR_13, sizeof(VAR_13));
  if (VAR_11 < 0)
   goto error;
 }
 if (VAR_8->bind_ifindex) {
  VAR_11 = FUNC_2(VAR_12, VAR_5, VAR_6,
     (void *)&VAR_8->bind_ifindex,
     sizeof(VAR_8->bind_ifindex));
  if (VAR_11 < 0)
   goto error;
 }

 VAR_10.sin6_family = VAR_0;
 FUNC_4(&VAR_10.sin6_addr, &VAR_8->local_ip6,
        sizeof(VAR_10.sin6_addr));
 VAR_10.sin6_port = VAR_8->local_udp_port;
 VAR_11 = FUNC_0(VAR_12, (struct sockaddr *)&VAR_10,
     sizeof(VAR_10));
 if (VAR_11 < 0)
  goto error;

 if (VAR_8->peer_udp_port) {
  FUNC_5(&VAR_10, 0, sizeof(VAR_10));
  VAR_10.sin6_family = VAR_0;
  FUNC_4(&VAR_10.sin6_addr, &VAR_8->peer_ip6,
         sizeof(VAR_10.sin6_addr));
  VAR_10.sin6_port = VAR_8->peer_udp_port;
  VAR_11 = FUNC_1(VAR_12,
         (struct sockaddr *)&VAR_10,
         sizeof(VAR_10), 0);
 }
 if (VAR_11 < 0)
  goto error;

 FUNC_9(VAR_12->sk, !VAR_8->use_udp6_tx_checksums);
 FUNC_8(VAR_12->sk, !VAR_8->use_udp6_rx_checksums);

 *VAR_9 = VAR_12;
 return 0;

error:
 if (VAR_12) {
  FUNC_3(VAR_12, VAR_3);
  FUNC_7(VAR_12);
 }
 *VAR_9 = ((void*)0);
 return VAR_11;
}
