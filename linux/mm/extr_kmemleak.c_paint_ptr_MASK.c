
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemleak_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kmemleak_object* FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (char*,unsigned long,char*) ;
 int FUNC_2 (struct kmemleak_object*,int) ;
 int FUNC_3 (struct kmemleak_object*) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2, int VAR_3)
{
 struct kmemleak_object *VAR_4;

 VAR_4 = FUNC_0(VAR_2, 0);
 if (!VAR_4) {
  FUNC_1("Trying to color unknown object at 0x%08lx as %s\n",
         VAR_2,
         (VAR_3 == VAR_1) ? "Grey" :
         (VAR_3 == VAR_0) ? "Black" : "Unknown");
  return;
 }
 FUNC_2(VAR_4, VAR_3);
 FUNC_3(VAR_4);
}
