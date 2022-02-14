
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long t_key ;
struct key_vector {unsigned long key; scalar_t__ pos; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline unsigned long FUNC_0(t_key VAR_2, struct key_vector *VAR_3)
{
 unsigned long VAR_4 = VAR_2 ^ VAR_3->key;

 if ((VAR_0 <= VAR_1) && (VAR_1 == VAR_3->pos))
  return 0;

 return VAR_4 >> VAR_3->pos;
}
