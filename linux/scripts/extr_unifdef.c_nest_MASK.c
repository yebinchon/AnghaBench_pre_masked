
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void
FUNC_2(void)
{
 if (VAR_1 > VAR_0-1)
  FUNC_0();
 if (VAR_1 == VAR_0-1)
  FUNC_1("Too many levels of nesting");
 VAR_1 += 1;
 VAR_3[VAR_1] = VAR_2;
}
