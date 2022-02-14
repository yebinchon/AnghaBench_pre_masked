
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sin6_port; int sin6_addr; } ;
struct TYPE_5__ {int sin_port; int sin_addr; } ;
struct TYPE_4__ {scalar_t__ sa_family; } ;
union sctp_addr {TYPE_3__ v6; TYPE_2__ v4; TYPE_1__ sa; } ;
struct sk_buff {int dummy; } ;
struct sctp_transport {int dummy; } ;
struct sctp_association {int dummy; } ;
struct net {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct sctp_association* FUNC_0 (struct net*,union sctp_addr const*,union sctp_addr const*,struct sctp_transport**) ;
 struct sctp_association* FUNC_1 (struct net*,struct sk_buff*,union sctp_addr const*,struct sctp_transport**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int *,int ,int *,int ) ;

__attribute__((used)) static struct sctp_association *FUNC_4(struct net *VAR_1,
          struct sk_buff *VAR_2,
          const union sctp_addr *VAR_3,
          const union sctp_addr *VAR_4,
          struct sctp_transport **VAR_5)
{
 struct sctp_association *VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_4, VAR_3, VAR_5);
 if (VAR_6)
  goto out;





 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_4, VAR_5);
 if (VAR_6)
  goto out;

 if (VAR_3->sa.sa_family == VAR_0)
  FUNC_3("sctp: asoc not found for src:%pI4:%d dst:%pI4:%d\n",
    &VAR_4->v4.sin_addr, FUNC_2(VAR_4->v4.sin_port),
    &VAR_3->v4.sin_addr, FUNC_2(VAR_3->v4.sin_port));
 else
  FUNC_3("sctp: asoc not found for src:%pI6:%d dst:%pI6:%d\n",
    &VAR_4->v6.sin6_addr, FUNC_2(VAR_4->v6.sin6_port),
    &VAR_3->v6.sin6_addr, FUNC_2(VAR_3->v6.sin6_port));

out:
 return VAR_6;
}
