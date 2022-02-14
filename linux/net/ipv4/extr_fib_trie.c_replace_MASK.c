
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trie {int dummy; } ;
struct key_vector {int key; } ;


 int FUNC_0 (struct key_vector*,struct key_vector*) ;
 unsigned long FUNC_1 (struct key_vector*) ;
 struct key_vector* FUNC_2 (struct key_vector*,unsigned long) ;
 struct key_vector* FUNC_3 (struct key_vector*) ;
 int FUNC_4 (struct key_vector*,int ,struct key_vector*) ;
 struct key_vector* FUNC_5 (struct trie*,struct key_vector*) ;
 int FUNC_6 (struct key_vector*) ;
 scalar_t__ FUNC_7 (struct key_vector*,struct key_vector*) ;
 int FUNC_8 (struct key_vector*) ;

__attribute__((used)) static struct key_vector *FUNC_9(struct trie *VAR_0,
      struct key_vector *VAR_1,
      struct key_vector *VAR_2)
{
 struct key_vector *VAR_3 = FUNC_3(VAR_1);
 unsigned long VAR_4;


 FUNC_0(VAR_2, VAR_3);
 FUNC_4(VAR_3, VAR_2->key, VAR_2);


 FUNC_8(VAR_2);


 FUNC_6(VAR_1);


 for (VAR_4 = FUNC_1(VAR_2); VAR_4;) {
  struct key_vector *VAR_5 = FUNC_2(VAR_2, --VAR_4);


  if (FUNC_7(VAR_2, VAR_5))
   VAR_2 = FUNC_5(VAR_0, VAR_5);
 }

 return VAR_3;
}
