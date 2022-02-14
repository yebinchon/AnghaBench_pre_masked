
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union sctp_addr_param {int dummy; } sctp_addr_param ;
struct TYPE_4__ {int sin_family; } ;
union sctp_addr {TYPE_1__ v4; } ;
struct sctp_packet {int dummy; } ;
struct sctp_errhdr {int length; int cause; scalar_t__ variable; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_af {int (* to_addr_param ) (union sctp_addr*,union sctp_addr_param*) ;} ;
struct TYPE_5__ {int ctl_sock; } ;
struct net {TYPE_2__ sctp; } ;
struct TYPE_6__ {struct sctp_endpoint* ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net*,int ) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (struct sctp_packet*) ;
 int FUNC_3 (int) ;
 struct sctp_packet* FUNC_4 (struct net*,struct sctp_endpoint*,int *,struct sctp_chunk*,struct sctp_errhdr*,int) ;
 int FUNC_5 (struct sctp_cmd_seq*,int ,int ) ;
 struct sctp_af* FUNC_6 (int ) ;
 TYPE_3__* FUNC_7 (int ) ;
 int FUNC_8 (union sctp_addr*,union sctp_addr_param*) ;

__attribute__((used)) static int FUNC_9(struct net *VAR_4, union sctp_addr *VAR_5,
          struct sctp_chunk *VAR_6,
          struct sctp_cmd_seq *VAR_7)
{
 struct sctp_af *VAR_8 = FUNC_6(VAR_5->v4.sin_family);
 union sctp_addr_param *VAR_9;
 struct sctp_errhdr *VAR_10;
 char VAR_11[sizeof(*VAR_10) + sizeof(*VAR_9)];
 struct sctp_endpoint *VAR_12;
 struct sctp_packet *VAR_13;
 int VAR_14;




 VAR_10 = (struct sctp_errhdr *)VAR_11;
 VAR_9 = (union sctp_addr_param *)VAR_10->variable;


 VAR_14 = VAR_8->to_addr_param(VAR_5, VAR_9);
 VAR_14 += sizeof(*VAR_10);

 VAR_10->cause = VAR_2;
 VAR_10->length = FUNC_3(VAR_14);


 VAR_12 = FUNC_7(VAR_4->sctp.ctl_sock)->ep;




 VAR_13 = FUNC_4(VAR_4, VAR_12, ((void*)0), VAR_6, VAR_10, VAR_14);

 if (!VAR_13)
  goto out;
 FUNC_5(VAR_7, VAR_1, FUNC_2(VAR_13));

 FUNC_0(VAR_4, VAR_3);


 FUNC_5(VAR_7, VAR_0, FUNC_1());

out:



 return 0;
}
