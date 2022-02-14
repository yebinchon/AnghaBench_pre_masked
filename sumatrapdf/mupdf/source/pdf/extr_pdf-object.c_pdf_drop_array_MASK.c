
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int fz_context ;
struct TYPE_4__ {int * items; } ;
struct TYPE_3__ {int len; int * items; } ;


 TYPE_2__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, pdf_obj *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_1)->len; VAR_2++)
  FUNC_3(VAR_0, FUNC_0(VAR_1)->items[VAR_2]);

 FUNC_2(VAR_0, FUNC_1(VAR_1)->items);
 FUNC_2(VAR_0, VAR_1);
}
