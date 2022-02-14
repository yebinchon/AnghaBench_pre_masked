
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ pdf_obj ;
typedef int fz_context ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

int
FUNC_1(fz_context *VAR_2, pdf_obj *VAR_3)
{
 FUNC_0(VAR_3);
 if (VAR_3 < VAR_1)
  return 0;
 return !!(VAR_3->flags & VAR_0);
}
