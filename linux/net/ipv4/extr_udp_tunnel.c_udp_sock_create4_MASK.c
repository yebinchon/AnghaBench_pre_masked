
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int udp_addr ;
struct udp_port_cfg {int use_udp_checksums; scalar_t__ peer_udp_port; int peer_ip; scalar_t__ local_udp_port; int local_ip; scalar_t__ bind_ifindex; } ;
struct socket {TYPE_1__* sk; } ;
struct sockaddr_in {scalar_t__ sin_port; int sin_addr; void* sin_family; } ;
struct sockaddr {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int sk_no_check_tx; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct socket*,struct sockaddr*,int) ;
 int FUNC_1 (struct socket*,struct sockaddr*,int,int ) ;
 int FUNC_2 (struct socket*,int ,int ,void*,int) ;
 int FUNC_3 (struct socket*,int ) ;
 int FUNC_4 (struct net*,void*,int ,int ,struct socket**) ;
 int FUNC_5 (struct socket*) ;

int FUNC_6(struct net *VAR_5, struct udp_port_cfg *VAR_6,
       struct socket **VAR_7)
{
 int VAR_8;
 struct socket *VAR_9 = ((void*)0);
 struct sockaddr_in VAR_10;

 VAR_8 = FUNC_4(VAR_5, VAR_0, VAR_2, 0, &VAR_9);
 if (VAR_8 < 0)
  goto error;

 if (VAR_6->bind_ifindex) {
  VAR_8 = FUNC_2(VAR_9, VAR_3, VAR_4,
     (void *)&VAR_6->bind_ifindex,
     sizeof(VAR_6->bind_ifindex));
  if (VAR_8 < 0)
   goto error;
 }

 VAR_10.sin_family = VAR_0;
 VAR_10.sin_addr = VAR_6->local_ip;
 VAR_10.sin_port = VAR_6->local_udp_port;
 VAR_8 = FUNC_0(VAR_9, (struct sockaddr *)&VAR_10,
     sizeof(VAR_10));
 if (VAR_8 < 0)
  goto error;

 if (VAR_6->peer_udp_port) {
  VAR_10.sin_family = VAR_0;
  VAR_10.sin_addr = VAR_6->peer_ip;
  VAR_10.sin_port = VAR_6->peer_udp_port;
  VAR_8 = FUNC_1(VAR_9, (struct sockaddr *)&VAR_10,
         sizeof(VAR_10), 0);
  if (VAR_8 < 0)
   goto error;
 }

 VAR_9->sk->sk_no_check_tx = !VAR_6->use_udp_checksums;

 *VAR_7 = VAR_9;
 return 0;

error:
 if (VAR_9) {
  FUNC_3(VAR_9, VAR_1);
  FUNC_5(VAR_9);
 }
 *VAR_7 = ((void*)0);
 return VAR_8;
}
