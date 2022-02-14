
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int kind; } ;
typedef TYPE_1__ pdf_obj ;
typedef int fz_context ;
struct TYPE_13__ {int parent_num; } ;
struct TYPE_12__ {int parent_num; } ;
struct TYPE_11__ {int num; } ;


 TYPE_8__* FUNC_0 (TYPE_1__*) ;
 TYPE_6__* FUNC_1 (TYPE_1__*) ;



 TYPE_1__* VAR_0 ;
 TYPE_3__* FUNC_2 (TYPE_1__*) ;

int FUNC_3(fz_context *VAR_1, pdf_obj *VAR_2)
{
 if (VAR_2 < VAR_0)
  return 0;

 switch (VAR_2->kind)
 {
 case 128:
  return FUNC_2(VAR_2)->num;
 case 130:
  return FUNC_0(VAR_2)->parent_num;
 case 129:
  return FUNC_1(VAR_2)->parent_num;
 default:
  return 0;
 }
}
