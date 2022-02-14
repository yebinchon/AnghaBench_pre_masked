
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int dtype; } ;
struct TYPE_9__ {int ndatums; TYPE_3__** datums; } ;
struct TYPE_8__ {int copiable_size; TYPE_3__** datums; } ;
typedef int PLpgSQL_var ;
typedef int PLpgSQL_rec ;
typedef TYPE_1__ PLpgSQL_function ;
typedef TYPE_2__ PLpgSQL_execstate ;
typedef TYPE_3__ PLpgSQL_datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;






 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*,int) ;
 char* FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(PLpgSQL_execstate *VAR_1,
     PLpgSQL_function *VAR_2)
{
 int VAR_3 = VAR_1->ndatums;
 PLpgSQL_datum **VAR_4;
 PLpgSQL_datum **VAR_5;
 char *VAR_6;
 char *VAR_7;
 int VAR_8;


 VAR_1->datums = (PLpgSQL_datum **)
  FUNC_4(sizeof(PLpgSQL_datum *) * VAR_3);





 VAR_6 = FUNC_4(VAR_2->copiable_size);
 VAR_7 = VAR_6;


 VAR_4 = VAR_2->datums;
 VAR_5 = VAR_1->datums;
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
 {
  PLpgSQL_datum *VAR_9 = VAR_4[VAR_8];
  PLpgSQL_datum *VAR_10;


  switch (VAR_9->dtype)
  {
   case 128:
   case 132:
    VAR_10 = (PLpgSQL_datum *) VAR_7;
    FUNC_3(VAR_10, VAR_9, sizeof(PLpgSQL_var));
    VAR_7 += FUNC_1(sizeof(PLpgSQL_var));
    break;

   case 131:
    VAR_10 = (PLpgSQL_datum *) VAR_7;
    FUNC_3(VAR_10, VAR_9, sizeof(PLpgSQL_rec));
    VAR_7 += FUNC_1(sizeof(PLpgSQL_rec));
    break;

   case 129:
   case 130:
   case 133:






    VAR_10 = VAR_9;
    break;

   default:
    FUNC_2(VAR_0, "unrecognized dtype: %d", VAR_9->dtype);
    VAR_10 = ((void*)0);
    break;
  }

  VAR_5[VAR_8] = VAR_10;
 }

 FUNC_0(VAR_7 == VAR_6 + VAR_2->copiable_size);
}
