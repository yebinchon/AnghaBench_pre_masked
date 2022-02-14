
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_addr {int dummy; } sctp_addr ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct sctp_transport {int dummy; } ;
struct sctp_chunkhdr {scalar_t__ type; int length; } ;
struct sctp_association {int dummy; } ;
struct net {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct sctp_association* FUNC_1 (struct net*,struct sk_buff*,union sctp_addr const*,struct sctp_transport**) ;
 struct sctp_association* FUNC_2 (struct net*,struct sk_buff*,union sctp_addr const*,struct sctp_transport**) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static struct sctp_association *FUNC_6(struct net *VAR_2,
          struct sk_buff *VAR_3,
          const union sctp_addr *VAR_4,
          struct sctp_transport **VAR_5)
{
 struct sctp_chunkhdr *VAR_6;






 if (FUNC_4(VAR_3) && FUNC_5(VAR_3))
  return ((void*)0);

 VAR_6 = (struct sctp_chunkhdr *)VAR_3->data;






 if (FUNC_0(FUNC_3(VAR_6->length)) > VAR_3->len)
  return ((void*)0);


 if (VAR_6->type == VAR_0 || VAR_6->type == VAR_1)
  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);

 return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
}
