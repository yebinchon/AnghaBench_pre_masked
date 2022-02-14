
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int val_size; int arena; } ;
typedef TYPE_1__ stb_spmatrix ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int) ;

stb_spmatrix *FUNC_2(int VAR_0)
{
   stb_spmatrix *VAR_1 = FUNC_0();
   if (VAR_1) VAR_1->val_size = VAR_0;
   if (VAR_1) VAR_1->arena = FUNC_1(1);
   return VAR_1;
}
