
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_frag_queue {int key; } ;
struct frag_lowpan_compare_key {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct frag_lowpan_compare_key const*,int) ;

__attribute__((used)) static void FUNC_2(struct inet_frag_queue *VAR_0, const void *VAR_1)
{
 const struct frag_lowpan_compare_key *VAR_2 = VAR_1;

 FUNC_0(sizeof(*VAR_2) > sizeof(VAR_0->key));
 FUNC_1(&VAR_0->key, VAR_2, sizeof(*VAR_2));
}
