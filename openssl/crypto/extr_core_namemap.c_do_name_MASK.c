
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ number; int data; int (* fn ) (int ,int ) ;} ;
struct TYPE_5__ {scalar_t__ number; int name; } ;
typedef TYPE_1__ NAMENUM_ENTRY ;
typedef TYPE_2__ DOALL_NAMES_DATA ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(const NAMENUM_ENTRY *VAR_0, DOALL_NAMES_DATA *VAR_1)
{
    if (VAR_0->number == VAR_1->number)
        VAR_1->fn(VAR_0->name, VAR_1->data);
}
