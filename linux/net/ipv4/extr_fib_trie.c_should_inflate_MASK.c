
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key_vector {scalar_t__ pos; } ;
struct TYPE_2__ {scalar_t__ full_children; scalar_t__ empty_children; } ;


 scalar_t__ FUNC_0 (struct key_vector*) ;
 unsigned long FUNC_1 (struct key_vector*) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_1__* FUNC_2 (struct key_vector*) ;

__attribute__((used)) static inline bool FUNC_3(struct key_vector *VAR_2, struct key_vector *VAR_3)
{
 unsigned long VAR_4 = FUNC_1(VAR_3);
 unsigned long VAR_5 = VAR_4;


 VAR_5 *= FUNC_0(VAR_2) ? VAR_1 : VAR_0;
 VAR_4 -= FUNC_2(VAR_3)->empty_children;
 VAR_4 += FUNC_2(VAR_3)->full_children;



 return (VAR_4 > 1) && VAR_3->pos && ((50 * VAR_4) >= VAR_5);
}
