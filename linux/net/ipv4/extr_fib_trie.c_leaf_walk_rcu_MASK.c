
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ t_key ;
struct key_vector {scalar_t__ key; unsigned long bits; } ;


 scalar_t__ FUNC_0 (struct key_vector*) ;
 scalar_t__ FUNC_1 (struct key_vector*) ;
 int FUNC_2 (struct key_vector*) ;
 struct key_vector* FUNC_3 (struct key_vector*,int ) ;
 int FUNC_4 (scalar_t__,struct key_vector*) ;
 struct key_vector* FUNC_5 (struct key_vector*) ;

__attribute__((used)) static struct key_vector *FUNC_6(struct key_vector **VAR_0, t_key VAR_1)
{
 struct key_vector *VAR_2, *VAR_3 = *VAR_0;
 unsigned long VAR_4;


 do {

  VAR_2 = VAR_3;
  VAR_4 = (VAR_1 > VAR_2->key) ? FUNC_4(VAR_1, VAR_2) : 0;

  if (VAR_4 >> VAR_2->bits)
   break;


  VAR_3 = FUNC_3(VAR_2, VAR_4++);
  if (!VAR_3)
   break;


  if (FUNC_0(VAR_3) && (VAR_3->key >= VAR_1))
   goto found;
 } while (FUNC_1(VAR_3));


 while (!FUNC_2(VAR_2)) {

  if (VAR_4 >= (1ul << VAR_2->bits)) {
   t_key VAR_5 = VAR_2->key;

   VAR_2 = FUNC_5(VAR_2);
   VAR_4 = FUNC_4(VAR_5, VAR_2) + 1;
   continue;
  }


  VAR_3 = FUNC_3(VAR_2, VAR_4++);
  if (!VAR_3)
   continue;


  if (FUNC_0(VAR_3))
   goto found;


  VAR_2 = VAR_3;
  VAR_4 = 0;
 }

 *VAR_0 = VAR_2;
 return ((void*)0);
found:

 *VAR_0 = VAR_2;
 return VAR_3;
}
