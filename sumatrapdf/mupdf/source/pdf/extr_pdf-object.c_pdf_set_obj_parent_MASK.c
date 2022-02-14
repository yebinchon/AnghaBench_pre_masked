
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_16__ {int kind; } ;
typedef TYPE_1__ pdf_obj ;
typedef int fz_context ;
struct TYPE_15__ {int parent_num; } ;
struct TYPE_14__ {int parent_num; } ;


 TYPE_12__* FUNC_0 (TYPE_1__*) ;
 TYPE_10__* FUNC_1 (TYPE_1__*) ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_2 (int *,TYPE_1__*,int) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int *,TYPE_1__*,int) ;
 int FUNC_5 (int *,TYPE_1__*) ;

void
FUNC_6(fz_context *VAR_1, pdf_obj *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_2 < VAR_0)
  return;

 switch (VAR_2->kind)
 {
 case 129:
  FUNC_0(VAR_2)->parent_num = VAR_3;
  VAR_4 = FUNC_3(VAR_1, VAR_2);
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
   FUNC_6(VAR_1, FUNC_2(VAR_1, VAR_2, VAR_5), VAR_3);
  break;
 case 128:
  FUNC_1(VAR_2)->parent_num = VAR_3;
  VAR_4 = FUNC_5(VAR_1, VAR_2);
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
   FUNC_6(VAR_1, FUNC_4(VAR_1, VAR_2, VAR_5), VAR_3);
  break;
 }
}
