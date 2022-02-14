
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6_opt_hdr {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ipv6_opt_hdr*) ;
 int FUNC_2 (char*,struct ipv6_opt_hdr*,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_0,
         struct ipv6_opt_hdr **VAR_1,
         struct ipv6_opt_hdr *VAR_2,
         struct ipv6_opt_hdr *VAR_3,
         int VAR_4, char **VAR_5)
{
 struct ipv6_opt_hdr *VAR_6;

 VAR_6 = (VAR_0 == VAR_4 ? VAR_3 : VAR_2);
 if (!VAR_6)
  return;

 FUNC_2(*VAR_5, VAR_6, FUNC_1(VAR_6));
 *VAR_1 = (struct ipv6_opt_hdr *)*VAR_5;
 *VAR_5 += FUNC_0(FUNC_1(*VAR_1));
}
