
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* t_key ;
struct trie {struct key_vector* kv; } ;
struct sk_buff {int len; } ;
struct netlink_callback {int* args; } ;
struct key_vector {void* key; } ;
struct fib_table {scalar_t__ tb_data; } ;
struct fib_dump_filter {int dummy; } ;


 int FUNC_0 (struct key_vector*,struct fib_table*,struct sk_buff*,struct netlink_callback*,struct fib_dump_filter*) ;
 struct key_vector* FUNC_1 (struct key_vector**,void*) ;
 int FUNC_2 (int*,int ,int) ;

int FUNC_3(struct fib_table *VAR_0, struct sk_buff *VAR_1,
     struct netlink_callback *VAR_2, struct fib_dump_filter *VAR_3)
{
 struct trie *VAR_4 = (struct trie *)VAR_0->tb_data;
 struct key_vector *VAR_5, *VAR_6 = VAR_4->kv;



 int VAR_7 = VAR_2->args[2];
 t_key VAR_8 = VAR_2->args[3];

 while ((VAR_5 = FUNC_1(&VAR_6, VAR_8)) != ((void*)0)) {
  int VAR_9;

  VAR_9 = FUNC_0(VAR_5, VAR_0, VAR_1, VAR_2, VAR_3);
  if (VAR_9 < 0) {
   VAR_2->args[3] = VAR_8;
   VAR_2->args[2] = VAR_7;
   return VAR_9;
  }

  ++VAR_7;
  VAR_8 = VAR_5->key + 1;

  FUNC_2(&VAR_2->args[4], 0,
         sizeof(VAR_2->args) - 4*sizeof(VAR_2->args[0]));


  if (VAR_8 < VAR_5->key)
   break;
 }

 VAR_2->args[3] = VAR_8;
 VAR_2->args[2] = VAR_7;

 return VAR_1->len;
}
