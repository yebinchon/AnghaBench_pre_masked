
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sa ;
struct TYPE_7__ {int is_set; int is_shared; scalar_t__ owner_pid; int * event; } ;
struct TYPE_6__ {int nLength; int bInheritHandle; } ;
typedef TYPE_1__ SECURITY_ATTRIBUTES ;
typedef TYPE_2__ Latch ;


 int * FUNC_0 (TYPE_1__*,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,char*,int ) ;

void
FUNC_4(Latch *VAR_3)
{
 VAR_3->is_set = 0;
 VAR_3->owner_pid = 0;
 VAR_3->is_shared = 1;
}
