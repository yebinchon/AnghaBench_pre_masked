
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_object {int lock; struct stm_copy* copy; } ;
struct stm_copy {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct stm_copy* FUNC_2 (void*,int ) ;
 int FUNC_3 (struct stm_copy*) ;

__attribute__((used)) static void
FUNC_4(struct stm_object *VAR_0, void *VAR_1, int32_t VAR_2) {
 struct stm_copy *VAR_3 = FUNC_2(VAR_1, VAR_2);
 FUNC_0(&VAR_0->lock);
 struct stm_copy *VAR_4 = VAR_0->copy;
 VAR_0->copy = VAR_3;
 FUNC_1(&VAR_0->lock);

 FUNC_3(VAR_4);
}
