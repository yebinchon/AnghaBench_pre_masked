
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {scalar_t__ binding; int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*,int ) ;

__attribute__((used)) static bool FUNC_1(struct symbol *VAR_1, const char *VAR_2, int *VAR_3,
     int VAR_4)
{

 return !FUNC_0(VAR_2, VAR_1->name) &&
        ((!VAR_4 && VAR_1->binding == VAR_0) ||
  (VAR_4 > 0 && ++*VAR_3 == VAR_4) ||
  VAR_4 < 0);
}
