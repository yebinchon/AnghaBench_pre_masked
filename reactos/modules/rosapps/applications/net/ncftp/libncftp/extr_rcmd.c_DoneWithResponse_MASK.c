
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int (* printResponseProc ) (TYPE_2__* const,TYPE_1__*) ;} ;
struct TYPE_13__ {int printMode; int msg; } ;
typedef TYPE_1__* ResponsePtr ;
typedef int Response ;
typedef TYPE_2__* FTPCIPtr ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__* const,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__* const,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_2__* const,TYPE_1__*) ;

void
FUNC_6(const FTPCIPtr VAR_2, ResponsePtr VAR_3)
{




 if (VAR_3 != ((void*)0)) {
  FUNC_2(VAR_2, VAR_3);
  if (VAR_2->printResponseProc != 0) {
   if ((VAR_3->printMode & VAR_0) == 0)
    (*VAR_2->printResponseProc)(VAR_2, VAR_3);
  }
  if ((VAR_3->printMode & VAR_1) == 0)
   FUNC_1(VAR_2, VAR_3);
  else
   FUNC_0(&VAR_3->msg);
  (void) FUNC_4(VAR_3, 0, sizeof(Response));
  FUNC_3(VAR_3);
 }
}
