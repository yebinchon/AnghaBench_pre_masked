
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addip_hdr; } ;
struct sctp_chunk {TYPE_1__ subh; } ;
struct sctp_association {int dummy; } ;
struct sctp_addiphdr {int serial; } ;
typedef int asconf ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_chunk*,int,struct sctp_addiphdr*) ;
 struct sctp_chunk* FUNC_2 (struct sctp_association const*,int ,int ,int,int ) ;

__attribute__((used)) static struct sctp_chunk *FUNC_3(const struct sctp_association *VAR_2,
            __u32 VAR_3, int VAR_4)
{
 struct sctp_addiphdr VAR_5;
 struct sctp_chunk *VAR_6;
 int VAR_7 = sizeof(VAR_5) + VAR_4;


 VAR_6 = FUNC_2(VAR_2, VAR_1, 0, VAR_7,
       VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_5.serial = FUNC_0(VAR_3);

 VAR_6->subh.addip_hdr =
  FUNC_1(VAR_6, sizeof(VAR_5), &VAR_5);

 return VAR_6;
}
