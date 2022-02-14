
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int depth; int * out; } ;
typedef TYPE_1__ fz_trace_device ;
typedef int fz_output ;
typedef int fz_device ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,char*) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_device *VAR_1)
{
 fz_trace_device *VAR_2 = (fz_trace_device*)VAR_1;
 fz_output *VAR_3 = VAR_2->out;
 FUNC_0(VAR_0, VAR_3, VAR_2->depth);
 FUNC_1(VAR_0, VAR_3, "<end_layer/>\n");
}
