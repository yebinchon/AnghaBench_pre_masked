
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct separator {scalar_t__ separator; scalar_t__ separator_zero; } ;
typedef int FILE ;


 int FUNC_0 (char,int *) ;
 int FUNC_1 (scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_2(struct separator VAR_0, FILE *VAR_1)
{
 if (VAR_0.separator_zero)
  FUNC_0('\000', VAR_1);
 else if (VAR_0.separator)
  FUNC_1(VAR_0.separator, VAR_1);
}
