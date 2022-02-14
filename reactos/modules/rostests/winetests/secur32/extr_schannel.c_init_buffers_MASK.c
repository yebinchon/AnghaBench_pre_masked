
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int cBuffers; TYPE_1__* pBuffers; int ulVersion; } ;
struct TYPE_4__ {unsigned int cbBuffer; void* pvBuffer; } ;
typedef TYPE_2__ SecBufferDesc ;
typedef int SecBuffer ;


 int FUNC_0 () ;
 int VAR_0 ;
 void* FUNC_1 (int ,int ,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(SecBufferDesc *VAR_2, unsigned VAR_3, unsigned VAR_4)
{
    VAR_2->ulVersion = VAR_1;
    VAR_2->cBuffers = VAR_3;
    VAR_2->pBuffers = FUNC_1(FUNC_0(), VAR_0, VAR_3*sizeof(SecBuffer));

    VAR_2->pBuffers[0].cbBuffer = VAR_4;
    VAR_2->pBuffers[0].pvBuffer = FUNC_1(FUNC_0(), 0, VAR_4);
}
