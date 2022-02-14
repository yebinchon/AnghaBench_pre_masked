
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct nd_opt_hdr {scalar_t__ nd_opt_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device const*,scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(const struct net_device *VAR_3,
       struct nd_opt_hdr *VAR_4)
{
 return VAR_4->nd_opt_type == VAR_2 ||
  VAR_4->nd_opt_type == VAR_1 ||
  VAR_4->nd_opt_type == VAR_0 ||
  FUNC_0(VAR_3, VAR_4->nd_opt_type);
}
