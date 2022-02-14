
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_errhdr {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int error ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_chunk*,int,char const*) ;
 int FUNC_1 (struct sctp_chunk*,int ,int) ;
 struct sctp_chunk* FUNC_2 (struct sctp_association const*,struct sctp_chunk const*,size_t) ;

struct sctp_chunk *FUNC_3(
     const struct sctp_association *VAR_1,
     const struct sctp_chunk *VAR_2)
{
 static const char VAR_3[] = "Association exceeded its max_retrans count";
 size_t VAR_4 = sizeof(VAR_3) + sizeof(struct sctp_errhdr);
 struct sctp_chunk *VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_4);
 if (!VAR_5)
  goto nodata;

 FUNC_1(VAR_5, VAR_0, sizeof(VAR_3));
 FUNC_0(VAR_5, sizeof(VAR_3), VAR_3);

nodata:
 return VAR_5;
}
