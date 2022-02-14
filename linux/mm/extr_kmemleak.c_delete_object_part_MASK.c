
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemleak_object {unsigned long pointer; unsigned long size; int min_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct kmemleak_object*) ;
 int FUNC_1 (unsigned long,unsigned long,int ,int ) ;
 struct kmemleak_object* FUNC_2 (unsigned long,int) ;
 int FUNC_3 (char*,unsigned long,size_t) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_1, size_t VAR_2)
{
 struct kmemleak_object *VAR_3;
 unsigned long VAR_4, VAR_5;

 VAR_3 = FUNC_2(VAR_1, 1);
 if (!VAR_3) {




  return;
 }






 VAR_4 = VAR_3->pointer;
 VAR_5 = VAR_3->pointer + VAR_3->size;
 if (VAR_1 > VAR_4)
  FUNC_1(VAR_4, VAR_1 - VAR_4, VAR_3->min_count,
         VAR_0);
 if (VAR_1 + VAR_2 < VAR_5)
  FUNC_1(VAR_1 + VAR_2, VAR_5 - VAR_1 - VAR_2, VAR_3->min_count,
         VAR_0);

 FUNC_0(VAR_3);
}
