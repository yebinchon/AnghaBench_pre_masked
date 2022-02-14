
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_key ;
struct key_vector {int * tnode; } ;


 scalar_t__ FUNC_0 (struct key_vector*) ;
 int FUNC_1 (int ,struct key_vector*) ;
 int FUNC_2 (struct key_vector*,int ,struct key_vector*) ;
 int FUNC_3 (int ,struct key_vector*) ;

__attribute__((used)) static inline void FUNC_4(struct key_vector *VAR_0, t_key VAR_1,
      struct key_vector *VAR_2)
{
 if (FUNC_0(VAR_0))
  FUNC_3(VAR_0->tnode[0], VAR_2);
 else
  FUNC_2(VAR_0, FUNC_1(VAR_1, VAR_0), VAR_2);
}
