
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** p; } ;
typedef TYPE_1__ stb_ps_bucket ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static stb_ps_bucket *FUNC_1(void *VAR_0, void *VAR_1)
{
   stb_ps_bucket *VAR_2 = (stb_ps_bucket*) FUNC_0(sizeof(*VAR_2));
   VAR_2->p[0] = VAR_0;
   VAR_2->p[1] = VAR_1;
   VAR_2->p[2] = ((void*)0);
   VAR_2->p[3] = ((void*)0);
   return VAR_2;
}
