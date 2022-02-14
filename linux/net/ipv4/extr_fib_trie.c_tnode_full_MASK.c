
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_vector {scalar_t__ pos; scalar_t__ bits; } ;


 scalar_t__ FUNC_0 (struct key_vector*) ;

__attribute__((used)) static inline int FUNC_1(struct key_vector *VAR_0, struct key_vector *VAR_1)
{
 return VAR_1 && ((VAR_1->pos + VAR_1->bits) == VAR_0->pos) && FUNC_0(VAR_1);
}
