
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_probes; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_2(void)
{
 static int VAR_2 = 0;
 static bool VAR_3 = 0;






 if (VAR_3)
  return VAR_2;

 VAR_3 = 1;
 VAR_2 = FUNC_0(0);
 if (VAR_2 < 0)
  FUNC_1("Failed to init_probe_symbol_maps\n");
 VAR_1.max_probes = VAR_0;
 return VAR_2;
}
