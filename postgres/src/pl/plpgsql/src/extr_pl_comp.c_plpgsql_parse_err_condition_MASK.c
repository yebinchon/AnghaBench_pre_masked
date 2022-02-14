
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* label; scalar_t__ sqlerrstate; } ;
struct TYPE_5__ {char* condname; struct TYPE_5__* next; scalar_t__ sqlerrstate; } ;
typedef TYPE_1__ PLpgSQL_condition ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 TYPE_4__* VAR_2 ;
 TYPE_1__* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,char*) ;

PLpgSQL_condition *
FUNC_5(char *VAR_3)
{
 int VAR_4;
 PLpgSQL_condition *VAR_5;
 PLpgSQL_condition *VAR_6;
 if (FUNC_4(VAR_3, "others") == 0)
 {
  VAR_5 = FUNC_3(sizeof(PLpgSQL_condition));
  VAR_5->sqlerrstate = 0;
  VAR_5->condname = VAR_3;
  VAR_5->next = ((void*)0);
  return VAR_5;
 }

 VAR_6 = ((void*)0);
 for (VAR_4 = 0; VAR_2[VAR_4].label != ((void*)0); VAR_4++)
 {
  if (FUNC_4(VAR_3, VAR_2[VAR_4].label) == 0)
  {
   VAR_5 = FUNC_3(sizeof(PLpgSQL_condition));
   VAR_5->sqlerrstate = VAR_2[VAR_4].sqlerrstate;
   VAR_5->condname = VAR_3;
   VAR_5->next = VAR_6;
   VAR_6 = VAR_5;
  }
 }

 if (!VAR_6)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("unrecognized exception condition \"%s\"",
      VAR_3)));

 return VAR_6;
}
