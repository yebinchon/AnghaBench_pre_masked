
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int len; void* data; } ;
typedef TYPE_1__ DsoJsonStr ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2 (DsoJsonStr *VAR_0, unsigned int VAR_1) {
 FUNC_1 (VAR_0->data);
 if (VAR_1 > 0) VAR_0->data = FUNC_0 (VAR_1, 1);
 else VAR_0->data = FUNC_0 (10, 1);
 VAR_0->len = VAR_1;
}
