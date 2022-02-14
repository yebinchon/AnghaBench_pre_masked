
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sctphdr {int dummy; } ;
struct sctp_chunkhdr {scalar_t__ type; } ;
typedef int schunk ;


 scalar_t__ VAR_0 ;
 struct sctp_chunkhdr* FUNC_0 (struct sk_buff const*,int,int,struct sctp_chunkhdr*) ;

__attribute__((used)) static inline int FUNC_1(const struct sk_buff *VAR_1, int VAR_2)
{
 struct sctp_chunkhdr *VAR_3, VAR_4;
 VAR_3 = FUNC_0(VAR_1, VAR_2 + sizeof(struct sctphdr),
     sizeof(VAR_4), &VAR_4);
 if (VAR_3 == ((void*)0))
  return 0;
 if (VAR_3->type == VAR_0)
  return 1;
 return 0;
}
