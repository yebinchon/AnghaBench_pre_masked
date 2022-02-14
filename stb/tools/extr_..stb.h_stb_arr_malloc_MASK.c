
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stb_malloc; int signature; scalar_t__ limit; scalar_t__ len; } ;
typedef TYPE_1__ stb__arr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*,int) ;

void FUNC_1(void **VAR_1, void *VAR_2)
{
   stb__arr *VAR_3 = (stb__arr *) FUNC_0(VAR_2, sizeof(*VAR_3));
   VAR_3->len = VAR_3->limit = 0;
   VAR_3->stb_malloc = 1;
   VAR_3->signature = VAR_0;
   *VAR_1 = (void *) (VAR_3+1);
}
