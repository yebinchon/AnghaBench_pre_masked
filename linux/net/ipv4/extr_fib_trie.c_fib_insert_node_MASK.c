
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_key ;
struct trie {int dummy; } ;
struct key_vector {int key; } ;
struct fib_alias {int fa_slen; } ;


 int VAR_0 ;
 int FUNC_0 (struct key_vector*,struct key_vector*) ;
 int FUNC_1 (int) ;
 struct key_vector* FUNC_2 (struct key_vector*,int) ;
 int FUNC_3 (int,struct key_vector*) ;
 struct key_vector* FUNC_4 (int,struct fib_alias*) ;
 int FUNC_5 (struct key_vector*) ;
 int FUNC_6 (struct key_vector*,int ) ;
 int FUNC_7 (struct key_vector*,struct key_vector*) ;
 int FUNC_8 (struct key_vector*,int,struct key_vector*) ;
 int FUNC_9 (struct key_vector*,int,struct key_vector*) ;
 struct key_vector* FUNC_10 (int,int ,int) ;
 int FUNC_11 (struct trie*,struct key_vector*) ;

__attribute__((used)) static int FUNC_12(struct trie *VAR_1, struct key_vector *VAR_2,
      struct fib_alias *VAR_3, t_key VAR_4)
{
 struct key_vector *VAR_5, *VAR_6;

 VAR_6 = FUNC_4(VAR_4, VAR_3);
 if (!VAR_6)
  goto noleaf;


 VAR_5 = FUNC_2(VAR_2, FUNC_3(VAR_4, VAR_2));







 if (VAR_5) {
  struct key_vector *VAR_7;

  VAR_7 = FUNC_10(VAR_4, FUNC_1(VAR_4 ^ VAR_5->key), 1);
  if (!VAR_7)
   goto notnode;


  FUNC_0(VAR_7, VAR_2);
  FUNC_8(VAR_7, FUNC_3(VAR_4, VAR_7) ^ 1, VAR_5);


  FUNC_9(VAR_2, VAR_4, VAR_7);
  FUNC_7(VAR_5, VAR_7);


  VAR_2 = VAR_7;
 }


 FUNC_6(VAR_2, VAR_3->fa_slen);
 FUNC_0(VAR_6, VAR_2);
 FUNC_9(VAR_2, VAR_4, VAR_6);
 FUNC_11(VAR_1, VAR_2);

 return 0;
notnode:
 FUNC_5(VAR_6);
noleaf:
 return -VAR_0;
}
