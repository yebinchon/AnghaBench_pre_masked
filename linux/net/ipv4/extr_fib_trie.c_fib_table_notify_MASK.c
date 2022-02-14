
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ t_key ;
struct trie {struct key_vector* kv; } ;
struct notifier_block {int dummy; } ;
struct net {int dummy; } ;
struct key_vector {scalar_t__ key; } ;
struct fib_table {scalar_t__ tb_data; } ;


 int FUNC_0 (struct net*,struct key_vector*,struct fib_table*,struct notifier_block*) ;
 struct key_vector* FUNC_1 (struct key_vector**,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net *VAR_0, struct fib_table *VAR_1,
        struct notifier_block *VAR_2)
{
 struct trie *VAR_3 = (struct trie *)VAR_1->tb_data;
 struct key_vector *VAR_4, *VAR_5 = VAR_3->kv;
 t_key VAR_6 = 0;

 while ((VAR_4 = FUNC_1(&VAR_5, VAR_6)) != ((void*)0)) {
  FUNC_0(VAR_0, VAR_4, VAR_1, VAR_2);

  VAR_6 = VAR_4->key + 1;

  if (VAR_6 < VAR_4->key)
   break;
 }
}
