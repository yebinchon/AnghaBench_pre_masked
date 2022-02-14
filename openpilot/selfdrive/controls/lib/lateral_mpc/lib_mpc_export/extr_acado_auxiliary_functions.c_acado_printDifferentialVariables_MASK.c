
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double* x; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (char*,...) ;

void FUNC_1( )
{
 int VAR_3, VAR_4;
 FUNC_0("\nDifferential variables:\n[\n");
 for (VAR_3 = 0; VAR_3 < VAR_0 + 1; ++VAR_3)
 {
  for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4)
   FUNC_0("\t%e", VAR_2.x[VAR_3 * VAR_1 + VAR_4]);
  FUNC_0("\n");
 }
 FUNC_0("]\n\n");
}
