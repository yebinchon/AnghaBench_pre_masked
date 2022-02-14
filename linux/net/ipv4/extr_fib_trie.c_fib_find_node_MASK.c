
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trie {struct key_vector* kv; } ;
struct key_vector {unsigned long bits; } ;


 scalar_t__ FUNC_0 (struct key_vector*) ;
 struct key_vector* FUNC_1 (struct key_vector*,unsigned long) ;
 unsigned long FUNC_2 (int ,struct key_vector*) ;

__attribute__((used)) static struct key_vector *FUNC_3(struct trie *VAR_0,
     struct key_vector **VAR_1, u32 VAR_2)
{
 struct key_vector *VAR_3, *VAR_4 = VAR_0->kv;
 unsigned long VAR_5 = 0;

 do {
  VAR_3 = VAR_4;
  VAR_4 = FUNC_1(VAR_4, VAR_5);

  if (!VAR_4)
   break;

  VAR_5 = FUNC_2(VAR_2, VAR_4);
  if (VAR_5 >= (1ul << VAR_4->bits)) {
   VAR_4 = ((void*)0);
   break;
  }


 } while (FUNC_0(VAR_4));

 *VAR_1 = VAR_3;

 return VAR_4;
}
