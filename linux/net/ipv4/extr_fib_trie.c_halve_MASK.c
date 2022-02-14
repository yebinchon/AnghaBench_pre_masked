
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trie {int dummy; } ;
struct key_vector {int bits; scalar_t__ pos; int key; } ;


 int FUNC_0 (struct key_vector*,struct key_vector*) ;
 unsigned long FUNC_1 (struct key_vector*) ;
 struct key_vector* FUNC_2 (struct key_vector*,unsigned long) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct key_vector*,unsigned long,struct key_vector*) ;
 struct key_vector* FUNC_5 (struct trie*,struct key_vector*,struct key_vector*) ;
 int FUNC_6 (struct key_vector*) ;
 int FUNC_7 (struct key_vector*,struct key_vector*) ;
 int FUNC_8 (struct key_vector*) ;
 struct key_vector* FUNC_9 (int ,scalar_t__,int) ;

__attribute__((used)) static struct key_vector *FUNC_10(struct trie *VAR_0,
    struct key_vector *VAR_1)
{
 struct key_vector *VAR_2;
 unsigned long VAR_3;

 FUNC_3("In halve\n");

 VAR_2 = FUNC_9(VAR_1->key, VAR_1->pos + 1, VAR_1->bits - 1);
 if (!VAR_2)
  goto notnode;


 FUNC_8(VAR_1);






 for (VAR_3 = FUNC_1(VAR_1); VAR_3;) {
  struct key_vector *VAR_4 = FUNC_2(VAR_1, --VAR_3);
  struct key_vector *VAR_5 = FUNC_2(VAR_1, --VAR_3);
  struct key_vector *VAR_6;


  if (!VAR_4 || !VAR_5) {
   FUNC_4(VAR_2, VAR_3 / 2, VAR_4 ? : VAR_5);
   continue;
  }


  VAR_6 = FUNC_9(VAR_5->key, VAR_1->pos, 1);
  if (!VAR_6)
   goto nomem;
  FUNC_7(VAR_2, VAR_6);


  FUNC_4(VAR_6, 1, VAR_4);
  FUNC_4(VAR_6, 0, VAR_5);
  FUNC_0(VAR_6, VAR_2);


  FUNC_4(VAR_2, VAR_3 / 2, VAR_6);
 }


 return FUNC_5(VAR_0, VAR_1, VAR_2);
nomem:

 FUNC_6(VAR_2);
notnode:
 return ((void*)0);
}
