
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trie {int dummy; } ;
struct key_vector {int key; } ;


 unsigned long FUNC_0 (struct key_vector*) ;
 struct key_vector* FUNC_1 (struct key_vector*,unsigned long) ;
 int FUNC_2 (struct key_vector*) ;
 struct key_vector* FUNC_3 (struct key_vector*) ;
 int FUNC_4 (struct key_vector*,struct key_vector*) ;
 int FUNC_5 (struct key_vector*,int ,struct key_vector*) ;

__attribute__((used)) static struct key_vector *FUNC_6(struct trie *VAR_0,
       struct key_vector *VAR_1)
{
 struct key_vector *VAR_2, *VAR_3;
 unsigned long VAR_4;


 for (VAR_2 = ((void*)0), VAR_4 = FUNC_0(VAR_1); !VAR_2 && VAR_4;)
  VAR_2 = FUNC_1(VAR_1, --VAR_4);


 VAR_3 = FUNC_3(VAR_1);
 FUNC_5(VAR_3, VAR_1->key, VAR_2);
 FUNC_4(VAR_2, VAR_3);


 FUNC_2(VAR_1);

 return VAR_3;
}
