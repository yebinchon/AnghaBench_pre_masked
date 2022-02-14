
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_key ;
struct tnode {struct key_vector* kv; } ;
struct key_vector {int leaf; int slen; scalar_t__ bits; scalar_t__ pos; int key; } ;
struct fib_alias {int fa_list; int fa_slen; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 struct tnode* FUNC_2 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct key_vector *FUNC_3(t_key VAR_2, struct fib_alias *VAR_3)
{
 struct key_vector *VAR_4;
 struct tnode *VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_0);
 if (!VAR_5)
  return ((void*)0);


 VAR_4 = VAR_5->kv;
 VAR_4->key = VAR_2;
 VAR_4->pos = 0;
 VAR_4->bits = 0;
 VAR_4->slen = VAR_3->fa_slen;


 FUNC_0(&VAR_4->leaf);
 FUNC_1(&VAR_3->fa_list, &VAR_4->leaf);

 return VAR_4;
}
