
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_paramhdr {int length; int type; } ;
struct sctp_errhdr {int dummy; } ;
struct sctp_chunk {TYPE_1__* chunk_hdr; } ;
struct sctp_association {int dummy; } ;
typedef int phdr ;
typedef int __u8 ;
struct TYPE_2__ {int length; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_chunk*,size_t const,int const*) ;
 int FUNC_2 (struct sctp_chunk*,int,struct sctp_paramhdr*) ;
 int FUNC_3 (struct sctp_chunk*,int ,size_t const) ;
 struct sctp_chunk* FUNC_4 (struct sctp_association const*,struct sctp_chunk const*,int) ;

struct sctp_chunk *FUNC_5(
     const struct sctp_association *VAR_1,
     const struct sctp_chunk *VAR_2,
     const __u8 *VAR_3,
     const size_t VAR_4)
{
 struct sctp_chunk *VAR_5;
 struct sctp_paramhdr VAR_6;

 VAR_5 = FUNC_4(VAR_1, VAR_2, sizeof(struct sctp_errhdr) +
           VAR_4 + sizeof(VAR_6));
 if (!VAR_5)
  goto end;

 FUNC_3(VAR_5, VAR_0, VAR_4 +
           sizeof(VAR_6));

 VAR_6.type = FUNC_0(VAR_2->chunk_hdr->type);
 VAR_6.length = VAR_2->chunk_hdr->length;
 FUNC_1(VAR_5, VAR_4, VAR_3);
 FUNC_2(VAR_5, sizeof(VAR_6), &VAR_6);

end:
 return VAR_5;
}
