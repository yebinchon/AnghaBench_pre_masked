
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_paramhdr {int dummy; } ;
struct sctp_errhdr {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int error ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_chunk*,int,char const*) ;
 int FUNC_1 (struct sctp_chunk*,int,struct sctp_paramhdr*) ;
 int FUNC_2 (struct sctp_chunk*,int ,int) ;
 struct sctp_chunk* FUNC_3 (struct sctp_association const*,struct sctp_chunk const*,size_t) ;

struct sctp_chunk *FUNC_4(
     const struct sctp_association *VAR_1,
     const struct sctp_chunk *VAR_2,
     struct sctp_paramhdr *VAR_3)
{
 static const char VAR_4[] = "The following parameter had invalid length:";
 size_t VAR_5 = sizeof(VAR_4) + sizeof(struct sctp_errhdr) +
        sizeof(*VAR_3);
 struct sctp_chunk *VAR_6;

 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_5);
 if (!VAR_6)
  goto nodata;

 FUNC_2(VAR_6, VAR_0,
   sizeof(VAR_4) + sizeof(*VAR_3));
 FUNC_0(VAR_6, sizeof(VAR_4), VAR_4);
 FUNC_1(VAR_6, sizeof(*VAR_3), VAR_3);

nodata:
 return VAR_6;
}
