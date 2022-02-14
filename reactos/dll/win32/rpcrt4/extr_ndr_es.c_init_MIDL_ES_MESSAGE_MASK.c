
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int IsClient; } ;
struct TYPE_6__ {int MesVersion; TYPE_1__ StubMsg; } ;
typedef TYPE_2__ MIDL_ES_MESSAGE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(MIDL_ES_MESSAGE *VAR_1)
{
    FUNC_0(VAR_1, 0, sizeof(*VAR_1));


    VAR_1->StubMsg.IsClient = VAR_0;
    VAR_1->MesVersion = 1;
}
