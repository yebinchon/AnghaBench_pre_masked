
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable_compare_arg {struct frag_lowpan_compare_key* key; } ;
struct inet_frag_queue {int key; } ;
struct frag_lowpan_compare_key {int dummy; } ;


 int FUNC_0 (int *,struct frag_lowpan_compare_key const*,int) ;

__attribute__((used)) static int FUNC_1(struct rhashtable_compare_arg *VAR_0, const void *VAR_1)
{
 const struct frag_lowpan_compare_key *VAR_2 = VAR_0->key;
 const struct inet_frag_queue *VAR_3 = VAR_1;

 return !!FUNC_0(&VAR_3->key, VAR_2, sizeof(*VAR_2));
}
