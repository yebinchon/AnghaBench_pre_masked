
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_object {int lock; struct stm_copy* copy; } ;
struct stm_copy {int reference; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct stm_copy *
FUNC_4(struct stm_object *VAR_0) {
 FUNC_2(&VAR_0->lock);
 struct stm_copy * VAR_1 = VAR_0->copy;
 if (VAR_1) {
  int VAR_2 = FUNC_0(&VAR_1->reference);
  FUNC_1(VAR_2 > 0);
 }
 FUNC_3(&VAR_0->lock);

 return VAR_1;
}
