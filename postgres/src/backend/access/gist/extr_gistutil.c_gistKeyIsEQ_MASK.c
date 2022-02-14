
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * supportCollation; int * equalFn; } ;
typedef TYPE_1__ GISTSTATE ;
typedef int Datum ;


 int FUNC_0 (int *,int ,int ,int ,int ) ;
 int FUNC_1 (int*) ;

bool
FUNC_2(GISTSTATE *VAR_0, int VAR_1, Datum VAR_2, Datum VAR_3)
{
 bool VAR_4;

 FUNC_0(&VAR_0->equalFn[VAR_1],
       VAR_0->supportCollation[VAR_1],
       VAR_2, VAR_3,
       FUNC_1(&VAR_4));
 return VAR_4;
}
