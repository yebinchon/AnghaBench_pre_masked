
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dtype; } ;
struct TYPE_5__ {int ndatums; int copiable_size; TYPE_3__** datums; } ;
typedef int Size ;
typedef int PLpgSQL_var ;
typedef int PLpgSQL_rec ;
typedef TYPE_1__ PLpgSQL_function ;
typedef int PLpgSQL_datum ;


 int FUNC_0 (int) ;



 TYPE_3__** FUNC_1 (int) ;
 TYPE_3__** VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(PLpgSQL_function *VAR_2)
{
 Size VAR_3 = 0;
 int VAR_4;

 VAR_2->ndatums = VAR_1;
 VAR_2->datums = FUNC_1(sizeof(PLpgSQL_datum *) * VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
 {
  VAR_2->datums[VAR_4] = VAR_0[VAR_4];


  switch (VAR_2->datums[VAR_4]->dtype)
  {
   case 128:
   case 130:
    VAR_3 += FUNC_0(sizeof(PLpgSQL_var));
    break;
   case 129:
    VAR_3 += FUNC_0(sizeof(PLpgSQL_rec));
    break;
   default:
    break;
  }
 }
 VAR_2->copiable_size = VAR_3;
}
