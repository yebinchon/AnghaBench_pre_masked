
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {scalar_t__ rst; scalar_t__ fin; } ;
struct sk_buff {int dummy; } ;
struct flow_offload {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct flow_offload*) ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct flow_offload *VAR_1, int VAR_2,
          struct sk_buff *VAR_3, unsigned int VAR_4)
{
 struct tcphdr *VAR_5;

 if (VAR_2 != VAR_0)
  return 0;

 if (!FUNC_1(VAR_3, VAR_4 + sizeof(*VAR_5)))
  return -1;

 VAR_5 = (void *)(FUNC_2(VAR_3) + VAR_4);
 if (FUNC_3(VAR_5->fin || VAR_5->rst)) {
  FUNC_0(VAR_1);
  return -1;
 }

 return 0;
}
