
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dno; } ;
typedef TYPE_1__ PLpgSQL_datum ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 TYPE_1__** FUNC_0 (TYPE_1__**,int) ;

void
FUNC_1(PLpgSQL_datum *VAR_3)
{
 if (VAR_2 == VAR_0)
 {
  VAR_0 *= 2;
  VAR_1 = FUNC_0(VAR_1, sizeof(PLpgSQL_datum *) * VAR_0);
 }

 VAR_3->dno = VAR_2;
 VAR_1[VAR_2++] = VAR_3;
}
