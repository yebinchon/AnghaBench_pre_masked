
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int bits8 ;
struct TYPE_6__ {TYPE_3__* elm; } ;
struct TYPE_7__ {TYPE_1__ array; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
typedef int PyObject ;
typedef TYPE_3__ PLyDatumToOb ;
typedef int Datum ;
typedef int ArrayType ;


 char* FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int * FUNC_5 (int ) ;
 int VAR_0 ;
 int * FUNC_6 (TYPE_3__*,int*,int,int ,char**,int **,int*) ;
 int * FUNC_7 (int ) ;

__attribute__((used)) static PyObject *
FUNC_8(PLyDatumToOb *VAR_1, Datum VAR_2)
{
 ArrayType *VAR_3 = FUNC_5(VAR_2);
 PLyDatumToOb *VAR_4 = VAR_1->u.array.elm;
 int VAR_5;
 int *VAR_6;
 char *VAR_7;
 bits8 *VAR_8;
 int VAR_9;

 if (FUNC_2(VAR_3) == 0)
  return FUNC_7(0);


 VAR_5 = FUNC_2(VAR_3);
 VAR_6 = FUNC_1(VAR_3);
 FUNC_4(VAR_5 < VAR_0);
 VAR_7 = FUNC_0(VAR_3);
 VAR_8 = FUNC_3(VAR_3);
 VAR_9 = 1;

 return FUNC_6(VAR_4, VAR_6, VAR_5, 0,
          &VAR_7, &VAR_8, &VAR_9);
}
