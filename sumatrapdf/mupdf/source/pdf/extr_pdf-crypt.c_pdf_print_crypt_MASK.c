
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int length; int method; } ;
struct TYPE_5__ {int length; int method; } ;
struct TYPE_7__ {int * u; int * o; int r; TYPE_2__ strf; TYPE_1__ stmf; int length; int v; } ;
typedef TYPE_3__ pdf_crypt ;
typedef int fz_output ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,char*,...) ;

void
FUNC_1(fz_context *VAR_0, fz_output *VAR_1, pdf_crypt *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0, VAR_1, "crypt {\n");

 FUNC_0(VAR_0, VAR_1, "\tv=%d length=%d\n", VAR_2->v, VAR_2->length);
 FUNC_0(VAR_0, VAR_1, "\tstmf method=%d length=%d\n", VAR_2->stmf.method, VAR_2->stmf.length);
 FUNC_0(VAR_0, VAR_1, "\tstrf method=%d length=%d\n", VAR_2->strf.method, VAR_2->strf.length);
 FUNC_0(VAR_0, VAR_1, "\tr=%d\n", VAR_2->r);

 FUNC_0(VAR_0, VAR_1, "\to=<");
 for (VAR_3 = 0; VAR_3 < 32; VAR_3++)
  FUNC_0(VAR_0, VAR_1, "%02X", VAR_2->o[VAR_3]);
 FUNC_0(VAR_0, VAR_1, ">\n");

 FUNC_0(VAR_0, VAR_1, "\tu=<");
 for (VAR_3 = 0; VAR_3 < 32; VAR_3++)
  FUNC_0(VAR_0, VAR_1, "%02X", VAR_2->u[VAR_3]);
 FUNC_0(VAR_0, VAR_1, ">\n");

 FUNC_0(VAR_0, VAR_1, "}\n");
}
