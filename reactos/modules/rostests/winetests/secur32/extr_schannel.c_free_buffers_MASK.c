
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* pvBuffer; } ;
struct TYPE_4__ {TYPE_3__* pBuffers; } ;
typedef TYPE_1__ SecBufferDesc ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(SecBufferDesc *VAR_0)
{
    FUNC_1(FUNC_0(), 0, VAR_0->pBuffers[0].pvBuffer);
    FUNC_1(FUNC_0(), 0, VAR_0->pBuffers);
}
