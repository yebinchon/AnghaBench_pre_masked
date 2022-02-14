
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsthash_ent {int dst; } ;
struct dsthash_dst {int dummy; } ;


 int FUNC_0 (int *,struct dsthash_dst const*,int) ;

__attribute__((used)) static inline bool FUNC_1(const struct dsthash_ent *VAR_0,
      const struct dsthash_dst *VAR_1)
{
 return !FUNC_0(&VAR_0->dst, VAR_1, sizeof(VAR_0->dst));
}
