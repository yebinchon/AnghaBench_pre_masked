
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ iDesktop; int iMalloc; } ;
struct TYPE_5__ {scalar_t__ hicon; scalar_t__ folder; scalar_t__ pidl; } ;
typedef scalar_t__ HICON ;
typedef TYPE_1__ Entry ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 TYPE_4__ VAR_0 ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(Entry* VAR_1)
{
 if (VAR_1->hicon && VAR_1->hicon!=(HICON)-1)
  FUNC_0(VAR_1->hicon);

 if (VAR_1->folder && VAR_1->folder!=VAR_0.iDesktop)
  FUNC_4(VAR_1->folder);

 if (VAR_1->pidl)
  FUNC_3(VAR_0.iMalloc, VAR_1->pidl);

 FUNC_2(FUNC_1(), 0, VAR_1);
}
