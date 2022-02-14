
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t u32 ;
struct net {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(const struct net *VAR_1, int VAR_2)
{
 return (((uintptr_t)VAR_1 + VAR_2) & (VAR_0 - 1));
}
