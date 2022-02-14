
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_5__* code; } ;
struct TYPE_9__ {int k; TYPE_5__* encode; TYPE_5__* bounds; TYPE_5__* funcs; } ;
struct TYPE_8__ {TYPE_5__* samples; } ;
struct TYPE_11__ {TYPE_3__ p; TYPE_2__ st; TYPE_1__ sa; } ;
struct TYPE_12__ {int type; TYPE_4__ u; } ;
typedef TYPE_5__ pdf_function ;
typedef int fz_storable ;
typedef int fz_context ;






 int FUNC_0 (int *,TYPE_5__*) ;
 int FUNC_1 (int *,TYPE_5__) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_storable *VAR_1)
{
 pdf_function *VAR_2 = (pdf_function *)VAR_1;
 int VAR_3;

 switch (VAR_2->type)
 {
 case 129:
  FUNC_0(VAR_0, VAR_2->u.sa.samples);
  break;
 case 131:
  break;
 case 128:
  for (VAR_3 = 0; VAR_3 < VAR_2->u.st.k; VAR_3++)
   FUNC_1(VAR_0, VAR_2->u.st.funcs[VAR_3]);
  FUNC_0(VAR_0, VAR_2->u.st.funcs);
  FUNC_0(VAR_0, VAR_2->u.st.bounds);
  FUNC_0(VAR_0, VAR_2->u.st.encode);
  break;
 case 130:
  FUNC_0(VAR_0, VAR_2->u.p.code);
  break;
 }
 FUNC_0(VAR_0, VAR_2);
}
