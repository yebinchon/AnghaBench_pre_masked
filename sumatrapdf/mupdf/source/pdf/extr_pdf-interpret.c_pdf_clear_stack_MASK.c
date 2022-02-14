
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int top; scalar_t__* stack; scalar_t__ string_len; scalar_t__* name; int * obj; } ;
typedef TYPE_1__ pdf_csi ;
typedef int fz_context ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, pdf_csi *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0, VAR_1->obj);
 VAR_1->obj = ((void*)0);

 VAR_1->name[0] = 0;
 VAR_1->string_len = 0;
 for (VAR_2 = 0; VAR_2 < VAR_1->top; VAR_2++)
  VAR_1->stack[VAR_2] = 0;

 VAR_1->top = 0;
}
