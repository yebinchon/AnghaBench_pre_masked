
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int argc; char** argv; } ;


 char** FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*,char const* const,size_t) ;
 int FUNC_2 (char const* const) ;

void FUNC_3(int VAR_1, const char *const *VAR_2)
{
 char *VAR_3;
 size_t VAR_4;
 int VAR_5;


 if (VAR_0.argc)
  return;

 VAR_0.argc = VAR_1;


 VAR_4 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_4 += FUNC_2(VAR_2[VAR_5]) + 1;

 VAR_0.argv = FUNC_0(sizeof(char *) * (VAR_1 + 1) + VAR_4);
 VAR_3 = (char *)VAR_0.argv + sizeof(char *) * (VAR_1 + 1);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_0.argv[VAR_5] = VAR_3;
  VAR_4 = FUNC_2(VAR_2[VAR_5]) + 1;
  FUNC_1(VAR_3, VAR_2[VAR_5], VAR_4);
  VAR_3 += VAR_4;
 }

 VAR_0.argv[VAR_1] = ((void*)0);
}
