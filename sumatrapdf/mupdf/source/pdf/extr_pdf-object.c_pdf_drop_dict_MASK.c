
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int v; int k; } ;
typedef TYPE_1__ pdf_obj ;
typedef int fz_context ;
struct TYPE_7__ {int len; TYPE_1__* items; } ;


 TYPE_4__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, pdf_obj *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1)->len; VAR_2++) {
  FUNC_2(VAR_0, FUNC_0(VAR_1)->items[VAR_2].k);
  FUNC_2(VAR_0, FUNC_0(VAR_1)->items[VAR_2].v);
 }

 FUNC_1(VAR_0, FUNC_0(VAR_1)->items);
 FUNC_1(VAR_0, VAR_1);
}
