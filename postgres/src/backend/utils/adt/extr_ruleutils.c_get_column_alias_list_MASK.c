
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int buf; } ;
typedef TYPE_1__ deparse_context ;
struct TYPE_6__ {int num_new_cols; char** new_colnames; int printaliases; } ;
typedef TYPE_2__ deparse_columns ;
typedef int StringInfo ;


 int FUNC_0 (int ,char) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(deparse_columns *VAR_0, deparse_context *VAR_1)
{
 StringInfo VAR_2 = VAR_1->buf;
 int VAR_3;
 bool VAR_4 = 1;


 if (!VAR_0->printaliases)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_new_cols; VAR_3++)
 {
  char *VAR_5 = VAR_0->new_colnames[VAR_3];

  if (VAR_4)
  {
   FUNC_0(VAR_2, '(');
   VAR_4 = 0;
  }
  else
   FUNC_1(VAR_2, ", ");
  FUNC_1(VAR_2, FUNC_2(VAR_5));
 }
 if (!VAR_4)
  FUNC_0(VAR_2, ')');
}
