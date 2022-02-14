
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct nd_opt_hdr {int nd_opt_len; } ;


 scalar_t__ FUNC_0 (struct net_device const*,struct nd_opt_hdr*) ;

__attribute__((used)) static struct nd_opt_hdr *FUNC_1(const struct net_device *VAR_0,
          struct nd_opt_hdr *VAR_1,
          struct nd_opt_hdr *VAR_2)
{
 if (!VAR_1 || !VAR_2 || VAR_1 >= VAR_2)
  return ((void*)0);
 do {
  VAR_1 = ((void *)VAR_1) + (VAR_1->nd_opt_len << 3);
 } while (VAR_1 < VAR_2 && !FUNC_0(VAR_0, VAR_1));
 return VAR_1 <= VAR_2 && FUNC_0(VAR_0, VAR_1) ? VAR_1 : ((void*)0);
}
