
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int layers; int * out; } ;
typedef TYPE_1__ svg_device ;
typedef int fz_output ;
typedef int fz_device ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,char*,int ,char const*) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, fz_device *VAR_1, const char *VAR_2)
{
 svg_device *VAR_3 = (svg_device*)VAR_1;
 fz_output *VAR_4 = VAR_3->out;

 VAR_3->layers++;
 FUNC_0(VAR_0, VAR_4, "<g id=\"Layer-%d\" data-name=\"%s\">\n", VAR_3->layers, VAR_2);
}
