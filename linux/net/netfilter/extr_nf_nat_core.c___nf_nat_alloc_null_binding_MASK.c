
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct nf_nat_range2 {union nf_inet_addr max_addr; union nf_inet_addr min_addr; int flags; } ;
struct nf_conn {TYPE_4__* tuplehash; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;
struct TYPE_6__ {union nf_inet_addr u3; } ;
struct TYPE_5__ {union nf_inet_addr u3; } ;
struct TYPE_7__ {TYPE_2__ src; TYPE_1__ dst; } ;
struct TYPE_8__ {TYPE_3__ tuple; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct nf_conn*,struct nf_nat_range2*,int) ;

__attribute__((used)) static unsigned int
FUNC_1(struct nf_conn *VAR_3, enum nf_nat_manip_type VAR_4)
{




 union nf_inet_addr VAR_5 =
  (VAR_4 == VAR_1 ?
  VAR_3->tuplehash[VAR_0].tuple.dst.u3 :
  VAR_3->tuplehash[VAR_0].tuple.src.u3);
 struct nf_nat_range2 VAR_6 = {
  .flags = VAR_2,
  .min_addr = VAR_5,
  .max_addr = VAR_5,
 };
 return FUNC_0(VAR_3, &VAR_6, VAR_4);
}
