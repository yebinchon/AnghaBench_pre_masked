
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vaddr_t ;
struct TYPE_4__ {int proc; } ;
typedef TYPE_1__ ppc_map_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ,int ) ;

void FUNC_2(vaddr_t VAR_1, ppc_map_t *VAR_2)
{
    FUNC_1("%x: proc %x addr %x\n",
           FUNC_0(VAR_2 - VAR_0),
           VAR_2->proc, VAR_1);
}
