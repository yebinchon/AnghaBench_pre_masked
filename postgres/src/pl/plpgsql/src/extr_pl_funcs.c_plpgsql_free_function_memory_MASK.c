
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int subscript; } ;
struct TYPE_10__ {int dtype; } ;
struct TYPE_9__ {scalar_t__ use_count; int ndatums; int * fn_cxt; int * action; TYPE_4__** datums; } ;
struct TYPE_8__ {int default_val; } ;
struct TYPE_7__ {int cursor_explicit_expr; int default_val; } ;
typedef TYPE_1__ PLpgSQL_var ;
typedef TYPE_2__ PLpgSQL_rec ;
typedef TYPE_3__ PLpgSQL_function ;
typedef TYPE_4__ PLpgSQL_datum ;
typedef TYPE_5__ PLpgSQL_arrayelem ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;






 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void
FUNC_5(PLpgSQL_function *VAR_1)
{
 int VAR_2;


 FUNC_0(VAR_1->use_count == 0);


 for (VAR_2 = 0; VAR_2 < VAR_1->ndatums; VAR_2++)
 {
  PLpgSQL_datum *VAR_3 = VAR_1->datums[VAR_2];

  switch (VAR_3->dtype)
  {
   case 128:
   case 132:
    {
     PLpgSQL_var *VAR_4 = (PLpgSQL_var *) VAR_3;

     FUNC_4(VAR_4->default_val);
     FUNC_4(VAR_4->cursor_explicit_expr);
    }
    break;
   case 129:
    break;
   case 131:
    {
     PLpgSQL_rec *VAR_5 = (PLpgSQL_rec *) VAR_3;

     FUNC_4(VAR_5->default_val);
    }
    break;
   case 130:
    break;
   case 133:
    FUNC_4(((PLpgSQL_arrayelem *) VAR_3)->subscript);
    break;
   default:
    FUNC_2(VAR_0, "unrecognized data type: %d", VAR_3->dtype);
  }
 }
 VAR_1->ndatums = 0;


 if (VAR_1->action)
  FUNC_3(VAR_1->action);
 VAR_1->action = ((void*)0);






 if (VAR_1->fn_cxt)
  FUNC_1(VAR_1->fn_cxt);
 VAR_1->fn_cxt = ((void*)0);
}
