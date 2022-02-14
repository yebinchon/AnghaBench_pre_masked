
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct keyval {int dummy; } ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ pdf_obj ;
typedef int fz_context ;
struct TYPE_8__ {int len; int items; } ;


 TYPE_5__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int,int ) ;

void
FUNC_4(fz_context *VAR_2, pdf_obj *VAR_3)
{
 FUNC_2(VAR_3);
 if (!FUNC_1(VAR_3))
  return;
 if (!(VAR_3->flags & VAR_0))
 {
  FUNC_3(FUNC_0(VAR_3)->items, FUNC_0(VAR_3)->len, sizeof(struct keyval), VAR_1);
  VAR_3->flags |= VAR_0;
 }
}
