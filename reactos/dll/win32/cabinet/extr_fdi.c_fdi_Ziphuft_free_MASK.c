
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct Ziphuft* t; } ;
struct Ziphuft {TYPE_1__ v; } ;
struct TYPE_5__ {int (* free ) (struct Ziphuft*) ;} ;
typedef TYPE_2__ FDI_Int ;


 int FUNC_0 (struct Ziphuft*) ;

__attribute__((used)) static void FUNC_1(FDI_Int *VAR_0, struct Ziphuft *VAR_1)
{
  register struct Ziphuft *VAR_2, *VAR_3;


  VAR_2 = VAR_1;
  while (VAR_2 != ((void*)0))
  {
    VAR_3 = (--VAR_2)->v.t;
    VAR_0->free(VAR_2);
    VAR_2 = VAR_3;
  }
}
