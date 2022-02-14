
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_errhdr {int length; int cause; } ;
struct TYPE_2__ {int err_hdr; } ;
struct sctp_chunk {TYPE_1__ subh; int skb; } ;
typedef int err ;
typedef int __u16 ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sctp_chunk*,int,struct sctp_errhdr*) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct sctp_chunk *VAR_1, __be16 VAR_2,
      size_t VAR_3)
{
 struct sctp_errhdr VAR_4;
 __u16 VAR_5;


 VAR_4.cause = VAR_2;
 VAR_5 = sizeof(VAR_4) + VAR_3;
 VAR_4.length = FUNC_0(VAR_5);

 if (FUNC_2(VAR_1->skb) < VAR_5)
  return -VAR_0;

 VAR_1->subh.err_hdr = FUNC_1(VAR_1, sizeof(VAR_4), &VAR_4);

 return 0;
}
