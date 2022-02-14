
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int do_free; int * name; int * vtable; } ;
typedef TYPE_1__ exception ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (size_t) ;
 int VAR_2 ;
 int FUNC_1 (int *,char const*,size_t) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(exception *VAR_3, const char** VAR_4)
{
  VAR_3->vtable = &VAR_1;
  if (*VAR_4)
  {
    size_t VAR_5 = FUNC_2(*VAR_4) + 1;
    VAR_3->name = FUNC_0(VAR_5);
    FUNC_1(VAR_3->name, *VAR_4, VAR_5);
    VAR_3->do_free = VAR_2;
  }
  else
  {
    VAR_3->name = ((void*)0);
    VAR_3->do_free = VAR_0;
  }
}
