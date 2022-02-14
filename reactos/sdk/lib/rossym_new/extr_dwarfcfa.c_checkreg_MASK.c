
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long nr; } ;
typedef TYPE_1__ State ;


 int FUNC_0 (char*,long) ;

__attribute__((used)) static int
FUNC_1(State *VAR_0, long VAR_1)
{
 if(VAR_1 < 0 || VAR_1 >= VAR_0->nr){
  FUNC_0("bad register number 0x%lx", VAR_1);
  return -1;
 }
 return 0;
}
