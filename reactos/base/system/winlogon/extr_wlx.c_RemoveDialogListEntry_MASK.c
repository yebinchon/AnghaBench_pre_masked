
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {int Entry; } ;
typedef TYPE_1__* PDIALOG_LIST_ENTRY ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,TYPE_1__*) ;

__attribute__((used)) static
VOID
FUNC_4(PDIALOG_LIST_ENTRY VAR_0)
{
    FUNC_3("Remove entry %p\n", VAR_0);

    FUNC_0(&VAR_0->Entry);
    FUNC_1(FUNC_2(), 0, VAR_0);
}
