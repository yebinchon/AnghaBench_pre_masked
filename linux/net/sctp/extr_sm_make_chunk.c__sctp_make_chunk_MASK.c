
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sctp_chunkhdr {int length; void* flags; void* type; } ;
struct sctp_chunk {void** chunk_end; int auth; struct sctp_chunkhdr* chunk_hdr; } ;
struct TYPE_2__ {struct sock* sk; } ;
struct sctp_association {TYPE_1__ base; } ;
typedef int gfp_t ;
typedef void* __u8 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (void*,struct sctp_association const*) ;
 struct sctp_chunk* FUNC_5 (struct sk_buff*,struct sctp_association const*,struct sock*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static struct sctp_chunk *FUNC_7(const struct sctp_association *VAR_1,
        __u8 VAR_2, __u8 VAR_3, int VAR_4,
        gfp_t VAR_5)
{
 struct sctp_chunkhdr *VAR_6;
 struct sctp_chunk *VAR_7;
 struct sk_buff *VAR_8;
 struct sock *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(sizeof(*VAR_6) + VAR_4);
 if (VAR_10 > VAR_0)
  goto nodata;


 VAR_8 = FUNC_1(VAR_10, VAR_5);
 if (!VAR_8)
  goto nodata;


 VAR_6 = (struct sctp_chunkhdr *)FUNC_6(VAR_8, sizeof(*VAR_6));
 VAR_6->type = VAR_2;
 VAR_6->flags = VAR_3;
 VAR_6->length = FUNC_2(sizeof(*VAR_6));

 VAR_9 = VAR_1 ? VAR_1->base.sk : ((void*)0);
 VAR_7 = FUNC_5(VAR_8, VAR_1, VAR_9, VAR_5);
 if (!VAR_7) {
  FUNC_3(VAR_8);
  goto nodata;
 }

 VAR_7->chunk_hdr = VAR_6;
 VAR_7->chunk_end = ((__u8 *)VAR_6) + sizeof(*VAR_6);


 if (FUNC_4(VAR_2, VAR_1))
  VAR_7->auth = 1;

 return VAR_7;
nodata:
 return ((void*)0);
}
