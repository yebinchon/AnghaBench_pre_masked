
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ kind; } ;
typedef TYPE_1__ pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;
struct TYPE_13__ {int * doc; } ;
struct TYPE_12__ {int * doc; } ;
struct TYPE_11__ {int * doc; } ;


 TYPE_8__* FUNC_0 (TYPE_1__*) ;
 TYPE_6__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_3__* FUNC_2 (TYPE_1__*) ;

pdf_document *FUNC_3(fz_context *VAR_4, pdf_obj *VAR_5)
{
 if (VAR_5 < VAR_3)
  return ((void*)0);
 if (VAR_5->kind == VAR_2)
  return FUNC_2(VAR_5)->doc;
 if (VAR_5->kind == VAR_0)
  return FUNC_0(VAR_5)->doc;
 if (VAR_5->kind == VAR_1)
  return FUNC_1(VAR_5)->doc;
 return ((void*)0);
}
