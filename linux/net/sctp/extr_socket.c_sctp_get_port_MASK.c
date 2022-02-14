
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sin_port; } ;
union sctp_addr {TYPE_2__ v4; } ;
struct sock {int dummy; } ;
struct sctp_af {int (* from_sk ) (union sctp_addr*,struct sock*) ;} ;
struct TYPE_6__ {TYPE_1__* pf; } ;
struct TYPE_4__ {struct sctp_af* af; } ;


 int FUNC_0 (unsigned short) ;
 int FUNC_1 (struct sock*,union sctp_addr*) ;
 TYPE_3__* FUNC_2 (struct sock*) ;
 int FUNC_3 (union sctp_addr*,struct sock*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_0, unsigned short VAR_1)
{
 union sctp_addr VAR_2;
 struct sctp_af *VAR_3 = FUNC_2(VAR_0)->pf->af;


 VAR_3->from_sk(&VAR_2, VAR_0);
 VAR_2.v4.sin_port = FUNC_0(VAR_1);


 return FUNC_1(VAR_0, &VAR_2);
}
