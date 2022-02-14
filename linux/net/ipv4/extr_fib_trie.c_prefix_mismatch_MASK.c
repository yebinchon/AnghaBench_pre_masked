
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_key ;
struct key_vector {int key; } ;



__attribute__((used)) static inline t_key FUNC_0(t_key VAR_0, struct key_vector *VAR_1)
{
 t_key VAR_2 = VAR_1->key;

 return (VAR_0 ^ VAR_2) & (VAR_2 | -VAR_2);
}
