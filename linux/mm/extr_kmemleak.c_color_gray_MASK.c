
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemleak_object {scalar_t__ min_count; scalar_t__ count; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct kmemleak_object *VAR_1)
{
 return VAR_1->min_count != VAR_0 &&
  VAR_1->count >= VAR_1->min_count;
}
