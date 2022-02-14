
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_copy {int reference; void* msg; int sz; } ;
typedef int int32_t ;


 struct stm_copy* FUNC_0 (int) ;

__attribute__((used)) static struct stm_copy *
FUNC_1(void * VAR_0, int32_t VAR_1) {
 struct stm_copy * VAR_2 = FUNC_0(sizeof(*VAR_2));
 VAR_2->reference = 1;
 VAR_2->sz = VAR_1;
 VAR_2->msg = VAR_0;

 return VAR_2;
}
