
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending_free {int dummy; } ;
struct lockdep_map {int dummy; } ;
struct lock_class {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct lockdep_map*) ;
 struct lock_class* FUNC_3 (struct lockdep_map*,int) ;
 int FUNC_4 (struct pending_free*,struct lock_class*) ;

__attribute__((used)) static void FUNC_5(struct pending_free *VAR_1,
     struct lockdep_map *VAR_2)
{
 struct lock_class *VAR_3;
 int VAR_4;




 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {



  VAR_3 = FUNC_3(VAR_2, VAR_4);
  if (VAR_3)
   FUNC_4(VAR_1, VAR_3);
 }




 if (FUNC_0(FUNC_2(VAR_2)))
  FUNC_1();
}
