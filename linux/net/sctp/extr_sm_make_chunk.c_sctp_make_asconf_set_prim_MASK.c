
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int type; } ;
union sctp_addr_param {scalar_t__ crr_id; TYPE_1__ param_hdr; } ;
struct TYPE_4__ {int sin_family; } ;
union sctp_addr {TYPE_2__ v4; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;
struct sctp_af {int (* to_addr_param ) (union sctp_addr*,union sctp_addr_param*) ;} ;
struct sctp_addip_param {scalar_t__ crr_id; TYPE_1__ param_hdr; } ;
typedef int param ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sctp_chunk*,int,union sctp_addr_param*) ;
 struct sctp_af* FUNC_2 (int ) ;
 struct sctp_chunk* FUNC_3 (struct sctp_association*,union sctp_addr*,int) ;
 int FUNC_4 (union sctp_addr*,union sctp_addr_param*) ;

struct sctp_chunk *FUNC_5(struct sctp_association *VAR_1,
          union sctp_addr *VAR_2)
{
 struct sctp_af *VAR_3 = FUNC_2(VAR_2->v4.sin_family);
 union sctp_addr_param VAR_4;
 struct sctp_addip_param VAR_5;
 struct sctp_chunk *VAR_6;
 int VAR_7 = sizeof(VAR_5);
 int VAR_8;

 VAR_8 = VAR_3->to_addr_param(VAR_2, &VAR_4);
 if (!VAR_8)
  return ((void*)0);
 VAR_7 += VAR_8;


 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_7);
 if (!VAR_6)
  return ((void*)0);

 VAR_5.param_hdr.type = VAR_0;
 VAR_5.param_hdr.length = FUNC_0(VAR_7);
 VAR_5.crr_id = 0;

 FUNC_1(VAR_6, sizeof(VAR_5), &VAR_5);
 FUNC_1(VAR_6, VAR_8, &VAR_4);

 return VAR_6;
}
