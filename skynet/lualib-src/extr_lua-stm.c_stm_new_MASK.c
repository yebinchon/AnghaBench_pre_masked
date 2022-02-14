
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_object {int reference; int copy; int lock; } ;
typedef int int32_t ;


 int FUNC_0 (int *) ;
 struct stm_object* FUNC_1 (int) ;
 int FUNC_2 (void*,int ) ;

__attribute__((used)) static struct stm_object *
FUNC_3(void * VAR_0, int32_t VAR_1) {
 struct stm_object * VAR_2 = FUNC_1(sizeof(*VAR_2));
 FUNC_0(&VAR_2->lock);
 VAR_2->reference = 1;
 VAR_2->copy = FUNC_2(VAR_0, VAR_1);

 return VAR_2;
}
