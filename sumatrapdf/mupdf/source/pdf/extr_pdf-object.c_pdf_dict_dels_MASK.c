
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int flags; } ;
typedef TYPE_2__ pdf_obj ;
typedef int fz_context ;
struct TYPE_13__ {int len; TYPE_1__* items; } ;
struct TYPE_11__ {int v; int k; } ;


 TYPE_9__* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ,char*,...) ;
 int FUNC_4 (int *,TYPE_2__*,char const*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,TYPE_2__*,int *) ;

void
FUNC_8(fz_context *VAR_2, pdf_obj *VAR_3, const char *VAR_4)
{
 int VAR_5;

 FUNC_2(VAR_3);
 if (!FUNC_1(VAR_3))
  FUNC_3(VAR_2, VAR_0, "not a dict (%s)", FUNC_6(VAR_3));
 if (!VAR_4)
  FUNC_3(VAR_2, VAR_0, "key is null");

 FUNC_7(VAR_2, VAR_3, ((void*)0));
 VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4);
 if (VAR_5 >= 0)
 {
  FUNC_5(VAR_2, FUNC_0(VAR_3)->items[VAR_5].k);
  FUNC_5(VAR_2, FUNC_0(VAR_3)->items[VAR_5].v);
  VAR_3->flags &= ~VAR_1;
  FUNC_0(VAR_3)->items[VAR_5] = FUNC_0(VAR_3)->items[FUNC_0(VAR_3)->len-1];
  FUNC_0(VAR_3)->len --;
 }
}
