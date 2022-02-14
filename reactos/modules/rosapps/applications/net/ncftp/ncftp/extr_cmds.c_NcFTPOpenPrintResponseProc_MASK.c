
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int printMode; int code; int msg; } ;
typedef TYPE_1__* ResponsePtr ;
typedef int * FTPCIPtr ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(const FTPCIPtr VAR_2, ResponsePtr VAR_3)
{
 VAR_0 = (VAR_2 != ((void*)0));
 if ((VAR_3->printMode & VAR_1) != 0)
  return;





 if (VAR_3->code < 400)
  return;

 FUNC_0(&VAR_3->msg);
}
