
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int sk; } ;
struct sockaddr_storage {scalar_t__ ss_family; } ;
struct TYPE_4__ {int * s6_addr32; } ;
struct sockaddr_in6 {TYPE_2__ sin6_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct smc_clc_msg_proposal_prefix {int dummy; } ;
struct smc_clc_ipv6_prefix {int dummy; } ;
struct dst_entry {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct dst_entry*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct socket*,struct sockaddr*) ;
 int FUNC_3 (struct smc_clc_msg_proposal_prefix*,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct dst_entry* FUNC_6 (int ) ;
 int FUNC_7 (struct dst_entry*,int ,struct smc_clc_msg_proposal_prefix*) ;
 int FUNC_8 (struct dst_entry*,struct smc_clc_msg_proposal_prefix*,struct smc_clc_ipv6_prefix*) ;

__attribute__((used)) static int FUNC_9(struct socket *VAR_4,
       struct smc_clc_msg_proposal_prefix *VAR_5,
       struct smc_clc_ipv6_prefix *VAR_6)
{
 struct dst_entry *VAR_7 = FUNC_6(VAR_4->sk);
 struct sockaddr_storage VAR_8;
 struct sockaddr_in6 *VAR_9;
 struct sockaddr_in *VAR_10;
 int VAR_11 = -VAR_1;

 FUNC_3(VAR_5, 0, sizeof(*VAR_5));
 if (!VAR_7) {
  VAR_11 = -VAR_2;
  goto out;
 }
 if (!VAR_7->dev) {
  VAR_11 = -VAR_0;
  goto out_rel;
 }

 FUNC_2(VAR_4, (struct sockaddr *)&VAR_8);

 VAR_9 = (struct sockaddr_in6 *)&VAR_8;
 FUNC_4();
 if (VAR_8.ss_family == VAR_3) {

  VAR_10 = (struct sockaddr_in *)&VAR_8;
  VAR_11 = FUNC_7(VAR_7, VAR_10->sin_addr.s_addr, VAR_5);
 } else if (FUNC_1(&VAR_9->sin6_addr)) {

  VAR_11 = FUNC_7(VAR_7, VAR_9->sin6_addr.s6_addr32[3],
        VAR_5);
 } else {

  VAR_11 = FUNC_8(VAR_7, VAR_5, VAR_6);
 }
 FUNC_5();
out_rel:
 FUNC_0(VAR_7);
out:
 return VAR_11;
}
