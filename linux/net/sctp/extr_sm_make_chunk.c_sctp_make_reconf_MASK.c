
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_reconf_chunk {int params; } ;
struct TYPE_2__ {int v; } ;
struct sctp_chunk {TYPE_1__ param_hdr; scalar_t__ chunk_hdr; } ;
struct sctp_association {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sctp_chunk* FUNC_0 (struct sctp_association const*,int ,int ,int,int ) ;

__attribute__((used)) static struct sctp_chunk *FUNC_1(const struct sctp_association *VAR_2,
        int VAR_3)
{
 struct sctp_reconf_chunk *VAR_4;
 struct sctp_chunk *VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_1, 0, VAR_3,
       VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_4 = (struct sctp_reconf_chunk *)VAR_5->chunk_hdr;
 VAR_5->param_hdr.v = VAR_4->params;

 return VAR_5;
}
