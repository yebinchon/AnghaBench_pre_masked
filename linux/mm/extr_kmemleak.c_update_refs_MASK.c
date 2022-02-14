
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemleak_object {int gray_list; int count; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct kmemleak_object*) ;
 int FUNC_2 (struct kmemleak_object*) ;
 int FUNC_3 (struct kmemleak_object*) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(struct kmemleak_object *VAR_1)
{
 if (!FUNC_2(VAR_1)) {

  return;
 }







 VAR_1->count++;
 if (FUNC_1(VAR_1)) {

  FUNC_0(!FUNC_3(VAR_1));
  FUNC_4(&VAR_1->gray_list, &VAR_0);
 }
}
