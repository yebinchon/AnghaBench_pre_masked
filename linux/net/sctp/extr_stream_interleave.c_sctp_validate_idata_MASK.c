
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sctp_stream {int dummy; } ;
struct TYPE_5__ {TYPE_4__* idata_hdr; } ;
struct sctp_chunk {TYPE_1__ subh; TYPE_3__* asoc; TYPE_2__* chunk_hdr; } ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_8__ {int mid; } ;
struct TYPE_7__ {struct sctp_stream stream; } ;
struct TYPE_6__ {scalar_t__ type; int flags; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sctp_chunk*) ;
 int FUNC_3 (struct sctp_stream*,int ,int ) ;

__attribute__((used)) static bool FUNC_4(struct sctp_chunk *VAR_3)
{
 struct sctp_stream *VAR_4;
 __u32 VAR_5;
 __u16 VAR_6;

 if (VAR_3->chunk_hdr->type != VAR_0)
  return 0;

 if (VAR_3->chunk_hdr->flags & VAR_1)
  return 1;

 VAR_4 = &VAR_3->asoc->stream;
 VAR_6 = FUNC_2(VAR_3);
 VAR_5 = FUNC_1(VAR_3->subh.idata_hdr->mid);

 return !FUNC_0(VAR_5, FUNC_3(VAR_4, VAR_2, VAR_6));
}
