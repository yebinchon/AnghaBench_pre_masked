
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int numSpcs; int * tblSpcs; } ;
typedef TYPE_1__ temp_tablespaces_extra ;


 int FUNC_0 (int *,int ) ;

void
FUNC_1(const char *VAR_0, void *VAR_1)
{
 temp_tablespaces_extra *VAR_2 = (temp_tablespaces_extra *) VAR_1;
 if (VAR_2)
  FUNC_0(VAR_2->tblSpcs, VAR_2->numSpcs);
 else
  FUNC_0(((void*)0), 0);
}
