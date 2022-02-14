
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* myAH; } ;
struct TYPE_4__ {int * connCancel; } ;
typedef int PGconn ;
typedef int PGcancel ;
typedef TYPE_1__ ArchiveHandle ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 () ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;

void
FUNC_6(ArchiveHandle *VAR_3, PGconn *VAR_4)
{
 PGcancel *VAR_5;







 FUNC_5();
 VAR_5 = VAR_3->connCancel;

 VAR_3->connCancel = ((void*)0);

 if (VAR_5 != ((void*)0))
  FUNC_3(VAR_5);


 if (VAR_4)
  VAR_3->connCancel = FUNC_4(VAR_4);
 VAR_1.myAH = VAR_3;
}
