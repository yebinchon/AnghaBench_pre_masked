
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int fz_storable ;
typedef int fz_context ;
struct TYPE_9__ {int buffer; int profile; } ;
struct TYPE_8__ {TYPE_5__** colorant; int tint; int (* drop ) (int *,int ) ;int base; } ;
struct TYPE_7__ {TYPE_5__* lookup; int base; } ;
struct TYPE_10__ {TYPE_3__ icc; TYPE_2__ separation; TYPE_1__ indexed; } ;
struct TYPE_11__ {scalar_t__ type; int flags; struct TYPE_11__* name; TYPE_4__ u; } ;
typedef TYPE_5__ fz_colorspace ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,TYPE_5__*) ;
 int FUNC_4 (int *,int ) ;

void
FUNC_5(fz_context *VAR_4, fz_storable *VAR_5)
{
 fz_colorspace *VAR_6 = (fz_colorspace *)VAR_5;
 int VAR_7;

 if (VAR_6->type == VAR_0)
 {
  FUNC_1(VAR_4, VAR_6->u.indexed.base);
  FUNC_3(VAR_4, VAR_6->u.indexed.lookup);
 }
 if (VAR_6->type == VAR_2)
 {
  FUNC_1(VAR_4, VAR_6->u.separation.base);
  VAR_6->u.separation.drop(VAR_4, VAR_6->u.separation.tint);
  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
   FUNC_3(VAR_4, VAR_6->u.separation.colorant[VAR_7]);
 }
 FUNC_3(VAR_4, VAR_6->name);
 FUNC_3(VAR_4, VAR_6);
}
