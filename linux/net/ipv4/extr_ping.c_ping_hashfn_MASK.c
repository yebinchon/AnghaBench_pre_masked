
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net {int dummy; } ;


 int FUNC_0 (struct net const*) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static inline u32 FUNC_2(const struct net *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3 = (VAR_1 + FUNC_0(VAR_0)) & VAR_2;

 FUNC_1("hash(%u) = %u\n", VAR_1, VAR_3);
 return VAR_3;
}
