
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct in6_addr {int dummy; } ;
typedef int scope_id ;
typedef int port ;
typedef struct in6_addr const __u32 ;
typedef struct in6_addr const __be16 ;


 int FUNC_0 (int *,struct in6_addr const*,int) ;

__attribute__((used)) static inline void FUNC_1(u8 *VAR_0, const struct in6_addr *VAR_1,
      __be16 VAR_2, __u32 VAR_3)
{
 FUNC_0(VAR_0, VAR_1, sizeof(*VAR_1));
 VAR_0 += sizeof(*VAR_1);
 FUNC_0(VAR_0, &VAR_2, sizeof(VAR_2));
 VAR_0 += sizeof(VAR_2);
 FUNC_0(VAR_0, &VAR_3, sizeof(VAR_3));
}
