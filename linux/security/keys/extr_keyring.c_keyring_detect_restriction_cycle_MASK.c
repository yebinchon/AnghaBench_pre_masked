
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_restriction {struct key const* key; } ;
struct key {struct key_restriction* restrict_link; int * type; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct key *VAR_1,
          struct key_restriction *VAR_2)
{
 while (VAR_2 && VAR_2->key &&
        VAR_2->key->type == &VAR_0) {
  if (VAR_2->key == VAR_1)
   return 1;

  VAR_2 = VAR_2->key->restrict_link;
 }

 return 0;
}
