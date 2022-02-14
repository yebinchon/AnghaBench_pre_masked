
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netns_ipvs {long threads_mask; } ;
struct ip_vs_conn {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline int
FUNC_1(struct netns_ipvs *VAR_0, struct ip_vs_conn *VAR_1)
{
 return ((long) VAR_1 >> (1 + FUNC_0(sizeof(*VAR_1)))) & VAR_0->threads_mask;
}
