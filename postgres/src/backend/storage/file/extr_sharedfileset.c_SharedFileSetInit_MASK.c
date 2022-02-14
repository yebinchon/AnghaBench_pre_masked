
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int dsm_segment ;
struct TYPE_4__ {int refcnt; int number; int ntablespaces; int * tablespaces; int creator_pid; int mutex; } ;
typedef TYPE_1__ SharedFileSet ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;

void
FUNC_6(SharedFileSet *VAR_4, dsm_segment *VAR_5)
{
 static uint32 VAR_6 = 0;

 FUNC_3(&VAR_4->mutex);
 VAR_4->refcnt = 1;
 VAR_4->creator_pid = VAR_2;
 VAR_4->number = VAR_6;
 VAR_6 = (VAR_6 + 1) % VAR_1;


 FUNC_2();
 VAR_4->ntablespaces =
  FUNC_0(&VAR_4->tablespaces[0],
         FUNC_4(VAR_4->tablespaces));
 if (VAR_4->ntablespaces == 0)
 {
  VAR_4->tablespaces[0] = VAR_0;
  VAR_4->ntablespaces = 1;
 }


 FUNC_5(VAR_5, VAR_3, FUNC_1(VAR_4));
}
