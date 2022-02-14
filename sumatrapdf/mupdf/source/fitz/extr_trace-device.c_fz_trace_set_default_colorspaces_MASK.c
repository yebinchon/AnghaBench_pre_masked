
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int depth; int * out; } ;
typedef TYPE_1__ fz_trace_device ;
typedef int fz_output ;
typedef int fz_device ;
typedef int fz_default_colorspaces ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int *,char*,...) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_0, fz_device *VAR_1, fz_default_colorspaces *VAR_2)
{
 fz_trace_device *VAR_3 = (fz_trace_device*)VAR_1;
 fz_output *VAR_4 = VAR_3->out;
 FUNC_5(VAR_0, VAR_4, VAR_3->depth);
 FUNC_6(VAR_0, VAR_4, "<set_default_colorspaces");
 FUNC_6(VAR_0, VAR_4, " gray=\"%s\"", FUNC_0(VAR_0, FUNC_2(VAR_0, VAR_2)));
 FUNC_6(VAR_0, VAR_4, " rgb=\"%s\"", FUNC_0(VAR_0, FUNC_4(VAR_0, VAR_2)));
 FUNC_6(VAR_0, VAR_4, " cmyk=\"%s\"", FUNC_0(VAR_0, FUNC_1(VAR_0, VAR_2)));
 FUNC_6(VAR_0, VAR_4, " oi=\"%s\"/>\n",FUNC_0(VAR_0, FUNC_3(VAR_0, VAR_2)));
}
