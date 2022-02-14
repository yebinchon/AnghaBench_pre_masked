
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int refs; scalar_t__ packed; } ;
typedef TYPE_1__ fz_path ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *,TYPE_1__*,int*) ;
 int FUNC_1 (int *,TYPE_1__*) ;

fz_path *
FUNC_2(fz_context *VAR_1, const fz_path *VAR_2)
{
 fz_path *VAR_3 = (fz_path *)VAR_2;

 if (VAR_3 == ((void*)0))
  return ((void*)0);
 if (VAR_3->refs == 1 && VAR_3->packed == VAR_0)
  FUNC_1(VAR_1, VAR_3);
 return FUNC_0(VAR_1, VAR_3, &VAR_3->refs);
}
