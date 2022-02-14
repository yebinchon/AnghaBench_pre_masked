
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int argc; int * argv; } ;
typedef TYPE_1__ Command ;
typedef int CState ;


 char* FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(CState *VAR_0, const Command *VAR_1, const char **VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->argc - 1; VAR_3++)
  VAR_2[VAR_3] = FUNC_0(VAR_0, VAR_1->argv[VAR_3 + 1]);
}
