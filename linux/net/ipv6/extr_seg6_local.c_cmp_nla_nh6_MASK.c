
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg6_local_lwt {int nh6; } ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int FUNC_1(struct seg6_local_lwt *VAR_0, struct seg6_local_lwt *VAR_1)
{
 return FUNC_0(&VAR_0->nh6, &VAR_1->nh6, sizeof(struct in6_addr));
}
