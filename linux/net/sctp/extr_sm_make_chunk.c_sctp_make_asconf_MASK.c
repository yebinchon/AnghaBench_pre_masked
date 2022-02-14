
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union sctp_addr_param {int serial; } ;
struct TYPE_4__ {int sin_family; } ;
union sctp_addr {TYPE_1__ v4; } ;
struct TYPE_6__ {void* v; } ;
struct TYPE_5__ {void* addip_hdr; } ;
struct sctp_chunk {TYPE_3__ param_hdr; TYPE_2__ subh; } ;
struct sctp_association {int addip_serial; } ;
struct sctp_af {int (* to_addr_param ) (union sctp_addr*,union sctp_addr_param*) ;} ;
struct sctp_addiphdr {int serial; } ;
typedef int asconf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (struct sctp_chunk*,int,union sctp_addr_param*) ;
 struct sctp_af* FUNC_2 (int ) ;
 struct sctp_chunk* FUNC_3 (struct sctp_association*,int ,int ,int,int ) ;
 int FUNC_4 (union sctp_addr*,union sctp_addr_param*) ;

__attribute__((used)) static struct sctp_chunk *FUNC_5(struct sctp_association *VAR_2,
        union sctp_addr *VAR_3,
        int VAR_4)
{
 struct sctp_addiphdr VAR_5;
 struct sctp_chunk *VAR_6;
 int VAR_7 = sizeof(VAR_5) + VAR_4;
 union sctp_addr_param VAR_8;
 int VAR_9;
 struct sctp_af *VAR_10 = FUNC_2(VAR_3->v4.sin_family);

 VAR_9 = VAR_10->to_addr_param(VAR_3, &VAR_8);
 if (!VAR_9)
  return ((void*)0);
 VAR_7 += VAR_9;


 VAR_6 = FUNC_3(VAR_2, VAR_1, 0, VAR_7,
       VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_5.serial = FUNC_0(VAR_2->addip_serial++);

 VAR_6->subh.addip_hdr =
  FUNC_1(VAR_6, sizeof(VAR_5), &VAR_5);
 VAR_6->param_hdr.v =
  FUNC_1(VAR_6, VAR_9, &VAR_8);

 return VAR_6;
}
