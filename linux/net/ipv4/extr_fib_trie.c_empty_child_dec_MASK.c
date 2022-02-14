
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key_vector {int dummy; } ;
struct TYPE_2__ {int empty_children; int full_children; } ;


 TYPE_1__* FUNC_0 (struct key_vector*) ;

__attribute__((used)) static inline void FUNC_1(struct key_vector *VAR_0)
{
 if (!FUNC_0(VAR_0)->empty_children)
  FUNC_0(VAR_0)->full_children--;

 FUNC_0(VAR_0)->empty_children--;
}
