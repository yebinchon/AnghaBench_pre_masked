
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_key ;
struct trie {int dummy; } ;
struct key_vector {int key; unsigned int pos; int bits; } ;


 int FUNC_0 (struct key_vector*,struct key_vector*) ;
 unsigned long FUNC_1 (struct key_vector*) ;
 struct key_vector* FUNC_2 (struct key_vector*,unsigned long) ;
 int FUNC_3 (int,struct key_vector*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct key_vector*,int,struct key_vector*) ;
 struct key_vector* FUNC_6 (struct trie*,struct key_vector*,struct key_vector*) ;
 int FUNC_7 (struct key_vector*) ;
 int FUNC_8 (struct key_vector*,struct key_vector*) ;
 int FUNC_9 (struct key_vector*) ;
 int FUNC_10 (struct key_vector*,struct key_vector*) ;
 struct key_vector* FUNC_11 (int,unsigned int,int) ;

__attribute__((used)) static struct key_vector *FUNC_12(struct trie *VAR_0,
      struct key_vector *VAR_1)
{
 struct key_vector *VAR_2;
 unsigned long VAR_3;
 t_key VAR_4;

 FUNC_4("In inflate\n");

 VAR_2 = FUNC_11(VAR_1->key, VAR_1->pos - 1, VAR_1->bits + 1);
 if (!VAR_2)
  goto notnode;


 FUNC_9(VAR_1);






 for (VAR_3 = FUNC_1(VAR_1), VAR_4 = 1u << VAR_2->pos; VAR_3;) {
  struct key_vector *VAR_5 = FUNC_2(VAR_1, --VAR_3);
  struct key_vector *VAR_6, *VAR_7;
  unsigned long VAR_8, VAR_9;


  if (!VAR_5)
   continue;


  if (!FUNC_10(VAR_1, VAR_5)) {
   FUNC_5(VAR_2, FUNC_3(VAR_5->key, VAR_2), VAR_5);
   continue;
  }


  FUNC_8(VAR_1, VAR_5);


  if (VAR_5->bits == 1) {
   FUNC_5(VAR_2, 2 * VAR_3 + 1, FUNC_2(VAR_5, 1));
   FUNC_5(VAR_2, 2 * VAR_3, FUNC_2(VAR_5, 0));
   continue;
  }
  VAR_7 = FUNC_11(VAR_5->key | VAR_4, VAR_5->pos, VAR_5->bits - 1);
  if (!VAR_7)
   goto nomem;
  VAR_6 = FUNC_11(VAR_5->key, VAR_5->pos, VAR_5->bits - 1);

  FUNC_8(VAR_2, VAR_7);
  if (!VAR_6)
   goto nomem;
  FUNC_8(VAR_2, VAR_6);


  for (VAR_9 = FUNC_1(VAR_5), VAR_8 = VAR_9 / 2; VAR_8;) {
   FUNC_5(VAR_7, --VAR_8, FUNC_2(VAR_5, --VAR_9));
   FUNC_5(VAR_6, VAR_8, FUNC_2(VAR_5, VAR_8));
   FUNC_5(VAR_7, --VAR_8, FUNC_2(VAR_5, --VAR_9));
   FUNC_5(VAR_6, VAR_8, FUNC_2(VAR_5, VAR_8));
  }


  FUNC_0(VAR_7, VAR_2);
  FUNC_0(VAR_6, VAR_2);


  FUNC_5(VAR_2, 2 * VAR_3 + 1, VAR_7);
  FUNC_5(VAR_2, 2 * VAR_3, VAR_6);
 }


 return FUNC_6(VAR_0, VAR_1, VAR_2);
nomem:

 FUNC_7(VAR_2);
notnode:
 return ((void*)0);
}
