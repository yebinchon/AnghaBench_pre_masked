
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ kind; } ;
typedef TYPE_1__ pdf_obj ;
typedef int fz_context ;
struct TYPE_8__ {char const* n; } ;


 TYPE_5__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 char const** VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;

const char *FUNC_2(fz_context *VAR_3, pdf_obj *VAR_4)
{
 FUNC_1(VAR_4);
 if (VAR_4 < VAR_0)
  return VAR_2[((intptr_t)VAR_4)];
 if (VAR_4->kind == VAR_1)
  return FUNC_0(VAR_4)->n;
 return "";
}
