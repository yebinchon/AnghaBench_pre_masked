
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_diag_req {size_t sdiag_family; } ;
struct sock_diag_handler {int (* dump ) (struct sk_buff*,struct nlmsghdr*) ;int (* destroy ) (struct sk_buff*,struct nlmsghdr*) ;} ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {scalar_t__ nlmsg_type; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sock_diag_req* FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (struct nlmsghdr*) ;
 struct sock_diag_handler** VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (size_t,int ) ;
 int FUNC_6 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_7 (struct sk_buff*,struct nlmsghdr*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_8, struct nlmsghdr *VAR_9)
{
 int VAR_10;
 struct sock_diag_req *VAR_11 = FUNC_3(VAR_9);
 const struct sock_diag_handler *VAR_12;

 if (FUNC_4(VAR_9) < sizeof(*VAR_11))
  return -VAR_1;

 if (VAR_11->sdiag_family >= VAR_0)
  return -VAR_1;
 VAR_11->sdiag_family = FUNC_0(VAR_11->sdiag_family, VAR_0);

 if (VAR_6[VAR_11->sdiag_family] == ((void*)0))
  FUNC_5(VAR_11->sdiag_family, 0);

 FUNC_1(&VAR_7);
 VAR_12 = VAR_6[VAR_11->sdiag_family];
 if (VAR_12 == ((void*)0))
  VAR_10 = -VAR_2;
 else if (VAR_9->nlmsg_type == VAR_5)
  VAR_10 = VAR_12->dump(VAR_8, VAR_9);
 else if (VAR_9->nlmsg_type == VAR_4 && VAR_12->destroy)
  VAR_10 = VAR_12->destroy(VAR_8, VAR_9);
 else
  VAR_10 = -VAR_3;
 FUNC_2(&VAR_7);

 return VAR_10;
}
