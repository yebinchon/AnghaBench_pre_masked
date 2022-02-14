
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemleak_object {int object_list; } ;


 int FUNC_0 (struct kmemleak_object*) ;
 int FUNC_1 (int ,struct kmemleak_object*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 struct kmemleak_object* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct kmemleak_object *VAR_4)
{
 unsigned long VAR_5;

 if (VAR_4 < VAR_1 || VAR_4 >= VAR_1 + FUNC_0(VAR_1)) {
  FUNC_1(VAR_3, VAR_4);
  return;
 }


 FUNC_3(&VAR_0, VAR_5);
 FUNC_2(&VAR_4->object_list, &VAR_2);
 FUNC_4(&VAR_0, VAR_5);
}
