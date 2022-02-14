
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int const) ;
 TYPE_1__* FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(const char *VAR_0)
{
 const char *VAR_1 = FUNC_2()->name;
 const int VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(VAR_0, VAR_1, VAR_2) ||
  (VAR_0[VAR_2] && VAR_0[VAR_2] != ' ');
}
