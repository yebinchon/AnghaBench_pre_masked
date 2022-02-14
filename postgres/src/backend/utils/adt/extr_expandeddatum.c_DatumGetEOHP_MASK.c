
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int varattrib_1b_e ;
struct TYPE_3__ {int * eohptr; } ;
typedef TYPE_1__ varatt_expanded ;
typedef int ptr ;
typedef int ExpandedObjectHeader ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

ExpandedObjectHeader *
FUNC_6(Datum VAR_0)
{
 varattrib_1b_e *VAR_1 = (varattrib_1b_e *) FUNC_1(VAR_0);
 varatt_expanded VAR_2;

 FUNC_0(FUNC_3(VAR_1));
 FUNC_5(&VAR_2, FUNC_4(VAR_1), sizeof(VAR_2));
 FUNC_0(FUNC_2(VAR_2.eohptr));
 return VAR_2.eohptr;
}
