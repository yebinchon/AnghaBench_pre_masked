
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemleak_object {int flags; scalar_t__ jiffies; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kmemleak_object*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static bool FUNC_2(struct kmemleak_object *VAR_3)
{
 return (FUNC_0(VAR_3) && VAR_3->flags & VAR_0) &&
  FUNC_1(VAR_3->jiffies + VAR_2,
          VAR_1);
}
