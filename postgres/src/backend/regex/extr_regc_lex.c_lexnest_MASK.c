
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int const* stop; int const* now; int const* savestop; int const* savenow; } ;
typedef int chr ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct vars *VAR_0,
  const chr *VAR_1,
  const chr *VAR_2)
{
 FUNC_0(VAR_0->savenow == ((void*)0));
 VAR_0->savenow = VAR_0->now;
 VAR_0->savestop = VAR_0->stop;
 VAR_0->now = VAR_1;
 VAR_0->stop = VAR_2;
}
