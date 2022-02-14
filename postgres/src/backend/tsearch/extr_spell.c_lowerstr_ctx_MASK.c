
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buildCxt; } ;
typedef int MemoryContext ;
typedef TYPE_1__ IspellDict ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static char *
FUNC_2(IspellDict *VAR_0, const char *VAR_1)
{
 MemoryContext VAR_2;
 char *VAR_3;

 VAR_2 = FUNC_0(VAR_0->buildCxt);
 VAR_3 = FUNC_1(VAR_1);
 FUNC_0(VAR_2);

 return VAR_3;
}
