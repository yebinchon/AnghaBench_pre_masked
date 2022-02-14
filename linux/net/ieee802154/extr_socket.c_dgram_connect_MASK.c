
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ieee802154 {scalar_t__ family; int addr; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct dgram_sock {int connected; int dst_addr; int bound; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dgram_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_3, struct sockaddr *VAR_4,
    int VAR_5)
{
 struct sockaddr_ieee802154 *VAR_6 = (struct sockaddr_ieee802154 *)VAR_4;
 struct dgram_sock *VAR_7 = FUNC_0(VAR_3);
 int VAR_8 = 0;

 if (VAR_5 < sizeof(*VAR_6))
  return -VAR_1;

 if (VAR_6->family != VAR_0)
  return -VAR_1;

 FUNC_2(VAR_3);

 if (!VAR_7->bound) {
  VAR_8 = -VAR_2;
  goto out;
 }

 FUNC_1(&VAR_7->dst_addr, &VAR_6->addr);
 VAR_7->connected = 1;

out:
 FUNC_3(VAR_3);
 return VAR_8;
}
