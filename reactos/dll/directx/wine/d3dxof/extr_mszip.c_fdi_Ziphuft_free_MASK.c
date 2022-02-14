
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct Ziphuft* t; } ;
struct Ziphuft {TYPE_1__ v; } ;
typedef int HFDI ;


 int FUNC_0 (int ,struct Ziphuft*) ;

__attribute__((used)) static void FUNC_1(HFDI VAR_0, struct Ziphuft *VAR_1)
{
  register struct Ziphuft *VAR_2, *VAR_3;


  VAR_2 = VAR_1;
  while (VAR_2 != ((void*)0))
  {
    VAR_3 = (--VAR_2)->v.t;
    FUNC_0(VAR_0, VAR_2);
    VAR_2 = VAR_3;
  }
}
