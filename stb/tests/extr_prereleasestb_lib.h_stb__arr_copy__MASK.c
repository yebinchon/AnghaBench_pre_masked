
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void stb__arr ;
struct TYPE_3__ {int limit; int len; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (void*,TYPE_1__*,int) ;
 int FUNC_2 (void*) ;
 TYPE_1__* FUNC_3 (void*) ;

void * FUNC_4(void *VAR_0, int VAR_1)
{
   stb__arr *VAR_2;
   if (VAR_0 == ((void*)0)) return VAR_0;
   VAR_2 = (stb__arr *) FUNC_0(sizeof(*VAR_2) + VAR_1 * FUNC_3(VAR_0)->limit);
   FUNC_2(VAR_0);
   FUNC_1(VAR_2, FUNC_3(VAR_0), sizeof(*VAR_2) + VAR_1 * FUNC_3(VAR_0)->len);
   return VAR_2+1;
}
