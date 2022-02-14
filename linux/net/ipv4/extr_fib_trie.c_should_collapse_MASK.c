
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key_vector {scalar_t__ bits; } ;
struct TYPE_2__ {scalar_t__ full_children; scalar_t__ empty_children; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (struct key_vector*) ;
 TYPE_1__* FUNC_1 (struct key_vector*) ;

__attribute__((used)) static inline bool FUNC_2(struct key_vector *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_2);

 VAR_3 -= FUNC_1(VAR_2)->empty_children;


 if ((VAR_2->bits == VAR_0) && FUNC_1(VAR_2)->full_children)
  VAR_3 -= VAR_1;


 return VAR_3 < 2;
}
