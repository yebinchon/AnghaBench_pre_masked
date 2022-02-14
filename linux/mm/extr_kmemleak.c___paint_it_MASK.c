
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemleak_object {int min_count; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct kmemleak_object *VAR_2, int VAR_3)
{
 VAR_2->min_count = VAR_3;
 if (VAR_3 == VAR_0)
  VAR_2->flags |= VAR_1;
}
