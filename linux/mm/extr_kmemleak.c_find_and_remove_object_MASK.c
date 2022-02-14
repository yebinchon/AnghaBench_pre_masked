
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemleak_object {int dummy; } ;


 int FUNC_0 (struct kmemleak_object*) ;
 int VAR_0 ;
 struct kmemleak_object* FUNC_1 (unsigned long,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static struct kmemleak_object *FUNC_4(unsigned long VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 struct kmemleak_object *VAR_4;

 FUNC_2(&VAR_0, VAR_3);
 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4)
  FUNC_0(VAR_4);
 FUNC_3(&VAR_0, VAR_3);

 return VAR_4;
}
