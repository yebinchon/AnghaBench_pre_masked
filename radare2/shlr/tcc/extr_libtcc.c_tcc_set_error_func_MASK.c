
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* error_func ) (void*,char const*) ;void* error_opaque; } ;
typedef TYPE_1__ TCCState ;



void FUNC_0(TCCState *VAR_0, void *VAR_1,
      void (*VAR_2)(void *VAR_3, const char *VAR_4))
{
 VAR_0->error_opaque = VAR_1;
 VAR_0->error_func = VAR_2;
}
