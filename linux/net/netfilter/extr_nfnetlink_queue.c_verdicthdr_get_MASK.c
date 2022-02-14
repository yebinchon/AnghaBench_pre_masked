
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nfqnl_msg_verdict_hdr {int verdict; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct nfqnl_msg_verdict_hdr* FUNC_0 (struct nlattr const* const) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static struct nfqnl_msg_verdict_hdr*
FUNC_2(const struct nlattr * const VAR_4[])
{
 struct nfqnl_msg_verdict_hdr *VAR_5;
 unsigned int VAR_6;

 if (!VAR_4[VAR_0])
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_4[VAR_0]);
 VAR_6 = FUNC_1(VAR_5->verdict) & VAR_3;
 if (VAR_6 > VAR_1 || VAR_6 == VAR_2)
  return ((void*)0);
 return VAR_5;
}
