
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_function ;
typedef int pdf_document ;
struct TYPE_8__ {int * c1; int * c0; } ;
struct TYPE_7__ {TYPE_2__ m; } ;
struct TYPE_9__ {int buffer; TYPE_1__ u; } ;
typedef TYPE_3__ fz_shade ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,TYPE_3__*,int *) ;
 int FUNC_2 (int *,TYPE_3__*,int,int **,int ,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, pdf_document *VAR_1, fz_shade *VAR_2, pdf_obj *VAR_3, int VAR_4, pdf_function **VAR_5)
{
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 if (VAR_4 > 0)
  FUNC_2(VAR_0, VAR_2, VAR_4, VAR_5, VAR_2->u.m.c0[0], VAR_2->u.m.c1[0]);

 VAR_2->buffer = FUNC_0(VAR_0, VAR_1, FUNC_3(VAR_0, VAR_3));
}
