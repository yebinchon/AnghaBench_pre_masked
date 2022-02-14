
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_association {int dummy; } ;
struct net {int dummy; } ;
typedef int err_str ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;


 int FUNC_0 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,void*,struct sctp_cmd_seq*,char const*,int) ;
 int FUNC_1 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;

__attribute__((used)) static enum sctp_disposition FUNC_2(
     struct net *VAR_0,
     const struct sctp_endpoint *VAR_1,
     const struct sctp_association *VAR_2,
     const union sctp_subtype VAR_3,
     void *VAR_4,
     struct sctp_cmd_seq *VAR_5)
{
 static const char VAR_6[] = "The following chunk violates protocol:";

 if (!VAR_2)
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5, VAR_6,
           sizeof(VAR_6));
}
