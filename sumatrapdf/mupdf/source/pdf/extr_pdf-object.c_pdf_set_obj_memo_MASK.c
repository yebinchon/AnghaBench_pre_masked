
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ pdf_obj ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void
FUNC_0(fz_context *VAR_3, pdf_obj *VAR_4, int VAR_5, int VAR_6)
{
 if (VAR_4 < VAR_2)
  return;
 VAR_5 <<= 1;
 VAR_4->flags |= VAR_0 << VAR_5;
 if (VAR_6)
  VAR_4->flags |= VAR_1 << VAR_5;
 else
  VAR_4->flags &= ~(VAR_1 << VAR_5);
}
