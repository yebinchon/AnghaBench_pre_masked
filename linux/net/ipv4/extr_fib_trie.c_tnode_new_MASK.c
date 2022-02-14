
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int t_key ;
struct tnode {int full_children; unsigned long empty_children; struct key_vector* kv; } ;
struct key_vector {unsigned int key; int pos; int bits; int slen; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,struct tnode*,int ,int) ;
 struct tnode* FUNC_3 (int) ;

__attribute__((used)) static struct key_vector *FUNC_4(t_key VAR_1, int VAR_2, int VAR_3)
{
 unsigned int VAR_4 = VAR_2 + VAR_3;
 struct key_vector *VAR_5;
 struct tnode *VAR_6;


 FUNC_0(!VAR_3 || (VAR_4 > VAR_0));

 VAR_6 = FUNC_3(VAR_3);
 if (!VAR_6)
  return ((void*)0);

 FUNC_2("AT %p s=%zu %zu\n", VAR_6, FUNC_1(0),
   sizeof(struct key_vector *) << VAR_3);

 if (VAR_3 == VAR_0)
  VAR_6->full_children = 1;
 else
  VAR_6->empty_children = 1ul << VAR_3;

 VAR_5 = VAR_6->kv;
 VAR_5->key = (VAR_4 < VAR_0) ? (VAR_1 >> VAR_4) << VAR_4 : 0;
 VAR_5->pos = VAR_2;
 VAR_5->bits = VAR_3;
 VAR_5->slen = VAR_2;

 return VAR_5;
}
