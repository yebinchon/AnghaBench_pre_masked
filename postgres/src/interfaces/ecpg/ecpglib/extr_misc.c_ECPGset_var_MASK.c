
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct var_list {int number; struct var_list* next; void* pointer; } ;
struct TYPE_2__ {int sqlerrmc; int sqlerrml; } ;
struct sqlca_t {TYPE_1__ sqlerrm; int sqlstate; int sqlcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct sqlca_t* FUNC_1 () ;
 scalar_t__ FUNC_2 (long,int) ;
 int FUNC_3 (struct sqlca_t*) ;
 int FUNC_4 (int,int ,int ,int *) ;
 struct var_list* VAR_2 ;
 int FUNC_5 (int ,int,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;

void
FUNC_8(int VAR_3, void *VAR_4, int VAR_5)
{
 struct var_list *VAR_6;

 struct sqlca_t *VAR_7 = FUNC_1();

 if (VAR_7 == ((void*)0))
 {
  FUNC_4(VAR_5, VAR_0,
       VAR_1, ((void*)0));
  return;
 }

 FUNC_3(VAR_7);

 for (VAR_6 = VAR_2; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
 {
  if (VAR_6->number == VAR_3)
  {

   VAR_6->pointer = VAR_4;
   return;
  }
 }


 VAR_6 = (struct var_list *) FUNC_2(1L, sizeof(struct var_list));
 if (!VAR_6)
 {
  struct sqlca_t *VAR_8 = FUNC_1();

  if (VAR_8 == ((void*)0))
  {
   FUNC_4(VAR_5, VAR_0,
        VAR_1, ((void*)0));
   return;
  }

  VAR_8->sqlcode = VAR_0;
  FUNC_7(VAR_8->sqlstate, "YE001", sizeof(VAR_8->sqlstate));
  FUNC_5(VAR_8->sqlerrm.sqlerrmc, sizeof(VAR_8->sqlerrm.sqlerrmc), "out of memory on line %d", VAR_5);
  VAR_8->sqlerrm.sqlerrml = FUNC_6(VAR_8->sqlerrm.sqlerrmc);

  FUNC_0();
 }
 else
 {
  VAR_6->number = VAR_3;
  VAR_6->pointer = VAR_4;
  VAR_6->next = VAR_2;
  VAR_2 = VAR_6;
 }
}
