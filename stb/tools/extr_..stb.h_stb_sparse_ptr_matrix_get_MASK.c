
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int val_size; int arena; } ;
typedef TYPE_1__ stb_spmatrix ;
struct TYPE_9__ {void* member_0; void* member_1; } ;
typedef TYPE_2__ stb__ptrpair ;


 int FUNC_0 (void*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__,void*) ;
 void* FUNC_2 (TYPE_1__*,TYPE_2__) ;
 void* FUNC_3 (int ,int ) ;

void *FUNC_4(stb_spmatrix *VAR_0, void *VAR_1, void *VAR_2, int VAR_3)
{
   stb__ptrpair VAR_4 = { VAR_1,VAR_2 };
   void *VAR_5 = FUNC_2(VAR_0, VAR_4);
   if (!VAR_5 && VAR_3) {
      VAR_5 = FUNC_3(VAR_0->arena, VAR_0->val_size);
      if (!VAR_5) return ((void*)0);
      FUNC_0(VAR_5, 0, VAR_0->val_size);
      FUNC_1(VAR_0, VAR_4, VAR_5);
   }
   return VAR_5;
}
