
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {int redo; } ;
struct TYPE_5__ {int info_lck; TYPE_1__ lastCheckPoint; int lastCheckPointEndPtr; int lastCheckPointRecPtr; } ;
typedef TYPE_1__ CheckPoint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(const CheckPoint *VAR_4)
{







 if (FUNC_2())
 {
  FUNC_3(FUNC_4(VAR_0),
    "could not record restart point at %X/%X because there "
    "are unresolved references to invalid pages",
    (uint32) (VAR_4->redo >> 32),
    (uint32) VAR_4->redo);
  return;
 }





 FUNC_0(&VAR_3->info_lck);
 VAR_3->lastCheckPointRecPtr = VAR_2;
 VAR_3->lastCheckPointEndPtr = VAR_1;
 VAR_3->lastCheckPoint = *VAR_4;
 FUNC_1(&VAR_3->info_lck);
}
