
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cSignerHandle; int * signerHandles; TYPE_1__* info; } ;
struct TYPE_4__ {int cSignerInfo; } ;
typedef int CSignerHandles ;
typedef TYPE_2__ CSignedMsgData ;
typedef int BOOL ;


 int * FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static BOOL FUNC_2(CSignedMsgData *VAR_2)
{
    BOOL VAR_3 = VAR_1;

    if (VAR_2->info->cSignerInfo)
    {
        VAR_2->signerHandles =
         FUNC_0(VAR_2->info->cSignerInfo * sizeof(CSignerHandles));
        if (VAR_2->signerHandles)
        {
            VAR_2->cSignerHandle = VAR_2->info->cSignerInfo;
            FUNC_1(VAR_2->signerHandles, 0,
             VAR_2->info->cSignerInfo * sizeof(CSignerHandles));
        }
        else
        {
            VAR_2->cSignerHandle = 0;
            VAR_3 = VAR_0;
        }
    }
    else
    {
        VAR_2->cSignerHandle = 0;
        VAR_2->signerHandles = ((void*)0);
    }
    return VAR_3;
}
