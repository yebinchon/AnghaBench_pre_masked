
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lloc; } ;
typedef TYPE_1__ TokenAuxData ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,TYPE_1__*) ;

void
FUNC_2(int *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3)
{
 int VAR_4,
    VAR_5;
 TokenAuxData VAR_6,
    VAR_7;

 VAR_4 = FUNC_0(&VAR_6);
 VAR_5 = FUNC_0(&VAR_7);

 *VAR_0 = VAR_4;
 if (VAR_2)
  *VAR_2 = VAR_6;
 *VAR_1 = VAR_5;
 if (VAR_3)
  *VAR_3 = VAR_7;

 FUNC_1(VAR_5, &VAR_7);
 FUNC_1(VAR_4, &VAR_6);
}
