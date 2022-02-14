
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * old_tablespace; int * new_pgdata; int * old_pgdata; int * new_db_arr; int * old_db_arr; } ;
typedef TYPE_1__ transfer_thread_arg ;
typedef int pid_t ;
struct TYPE_7__ {int jobs; } ;
typedef scalar_t__ HANDLE ;
typedef int DbInfoArr ;


 scalar_t__ FUNC_0 (int *,int ,void*,TYPE_1__*,int ,int *) ;
 int FUNC_1 (int ) ;
 void** VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int) ;
 TYPE_1__* FUNC_7 (int) ;
 int * FUNC_8 (char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 scalar_t__* VAR_3 ;
 int FUNC_11 (int *,int *,char*,char*,char*) ;
 TYPE_1__** VAR_4 ;
 TYPE_2__ VAR_5 ;
 scalar_t__ VAR_6 ;

void
FUNC_12(DbInfoArr *VAR_7, DbInfoArr *VAR_8,
         char *VAR_9, char *VAR_10,
         char *VAR_11)
{

 pid_t VAR_12;





 if (VAR_5.jobs <= 1)
  FUNC_11(VAR_7, VAR_8, VAR_9, VAR_10, ((void*)0));
 else
 {
  while (FUNC_9(0) == 1)
   ;


  if (VAR_2 >= VAR_5.jobs)
   FUNC_9(1);


  VAR_2++;


  FUNC_2(((void*)0));


  VAR_12 = FUNC_3();
  if (VAR_12 == 0)
  {
   FUNC_11(VAR_7, VAR_8, VAR_9, VAR_10,
         VAR_11);


   FUNC_1(0);
  }
  else if (VAR_12 < 0)

   FUNC_4("could not create worker process: %s\n", FUNC_10(VAR_1));
 }

 return;
}
