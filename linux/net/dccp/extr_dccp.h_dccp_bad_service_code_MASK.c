
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct dccp_sock {int dccps_service_list; int const dccps_service; } ;
typedef int __be32 ;


 int FUNC_0 (int ,int const) ;
 struct dccp_sock* FUNC_1 (struct sock const*) ;

__attribute__((used)) static inline bool FUNC_2(const struct sock *VAR_0,
     const __be32 VAR_1)
{
 const struct dccp_sock *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2->dccps_service == VAR_1)
  return 0;
 return !FUNC_0(VAR_2->dccps_service_list, VAR_1);
}
