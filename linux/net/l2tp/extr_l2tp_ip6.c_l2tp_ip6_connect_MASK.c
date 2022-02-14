
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_l2tpip6 {int l2tp_conn_id; } ;
struct in6_addr {int * s6_addr32; } ;
struct sockaddr_in6 {scalar_t__ sin6_family; struct in6_addr sin6_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_bind_node; } ;
struct TYPE_2__ {int peer_conn_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sock*,struct sockaddr*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct in6_addr*) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,int *) ;
 scalar_t__ FUNC_8 (struct sock*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_7, struct sockaddr *VAR_8,
       int VAR_9)
{
 struct sockaddr_l2tpip6 *VAR_10 = (struct sockaddr_l2tpip6 *) VAR_8;
 struct sockaddr_in6 *VAR_11 = (struct sockaddr_in6 *) VAR_8;
 struct in6_addr *VAR_12;
 int VAR_13;
 int VAR_14;

 if (VAR_9 < sizeof(*VAR_10))
  return -VAR_1;

 if (VAR_11->sin6_family != VAR_0)
  return -VAR_1;

 VAR_13 = FUNC_3(&VAR_11->sin6_addr);
 if (VAR_13 & VAR_3)
  return -VAR_1;

 if (VAR_13 & VAR_2) {
  VAR_12 = &VAR_11->sin6_addr;
  if (FUNC_2(VAR_12->s6_addr32[3]))
   return -VAR_1;
 }

 FUNC_5(VAR_7);


 if (FUNC_8(VAR_7, VAR_4)) {
  VAR_14 = -VAR_1;
  goto out_sk;
 }

 VAR_14 = FUNC_0(VAR_7, VAR_8, VAR_9);
 if (VAR_14 < 0)
  goto out_sk;

 FUNC_4(VAR_7)->peer_conn_id = VAR_10->l2tp_conn_id;

 FUNC_9(&VAR_6);
 FUNC_1(&VAR_7->sk_bind_node);
 FUNC_7(VAR_7, &VAR_5);
 FUNC_10(&VAR_6);

out_sk:
 FUNC_6(VAR_7);

 return VAR_14;
}
