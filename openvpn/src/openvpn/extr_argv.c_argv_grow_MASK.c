
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv {size_t const argc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t const) ;
 int FUNC_2 (struct argv*,int ) ;

__attribute__((used)) static void
FUNC_3(struct argv *VAR_0, const size_t VAR_1)
{
    const size_t VAR_2 = VAR_0->argc + VAR_1 + 1;
    FUNC_0(VAR_2 > VAR_0->argc);
    FUNC_2(VAR_0, FUNC_1(VAR_2));
}
