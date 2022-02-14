
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int def_count; int * out; int * defs; int * defs_buffer; } ;
typedef TYPE_1__ svg_device ;
typedef int fz_output ;
typedef int fz_context ;


 int * FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,int *) ;

__attribute__((used)) static fz_output *
FUNC_2(fz_context *VAR_0, svg_device *VAR_1)
{
 VAR_1->def_count++;
 if (VAR_1->def_count == 2)
 {
  if (VAR_1->defs == ((void*)0))
  {
   if (VAR_1->defs_buffer == ((void*)0))
    VAR_1->defs_buffer = FUNC_0(VAR_0, 1024);
   VAR_1->defs = FUNC_1(VAR_0, VAR_1->defs_buffer);
  }
  VAR_1->out = VAR_1->defs;
 }
 return VAR_1->out;
}
