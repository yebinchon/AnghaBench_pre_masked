
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_class {int dummy; } ;
struct held_lock {unsigned int class_idx; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 struct lock_class* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static inline struct lock_class *FUNC_3(struct held_lock *VAR_2)
{
 unsigned int VAR_3 = VAR_2->class_idx;


 FUNC_1();

 if (!FUNC_2(VAR_3, VAR_1)) {



  FUNC_0(1);
  return ((void*)0);
 }





 return VAR_0 + VAR_3;
}
