
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_function ;
struct TYPE_5__ {int use_function; } ;
typedef TYPE_1__ fz_shade ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*,int,int **,float,float) ;
 int FUNC_1 (int *,TYPE_1__*,int *,float,float) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_shade *VAR_1, int VAR_2, pdf_function **VAR_3, float VAR_4, float VAR_5)
{
 VAR_1->use_function = 1;
 if (VAR_2 == 1)
  FUNC_1(VAR_0, VAR_1, VAR_3[0], VAR_4, VAR_5);
 else
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
