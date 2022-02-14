
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rhashtable {int p; } ;
struct rhash_head {int dummy; } ;
struct bucket_table {int dummy; } ;


 int FUNC_0 (struct rhashtable*,struct bucket_table const*,struct rhash_head const*,int ) ;

__attribute__((used)) static u32 FUNC_1(struct rhashtable *VAR_0,
         const struct bucket_table *VAR_1,
         const struct rhash_head *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_0->p);
}
