
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_21__ {TYPE_8__* pBuffer; } ;
struct TYPE_20__ {TYPE_6__* pLast; TYPE_7__* pFirst; } ;
struct TYPE_19__ {TYPE_2__* next; } ;
struct TYPE_12__ {TYPE_5__* next_para; int nWidth; } ;
struct TYPE_15__ {TYPE_10__ para; } ;
struct TYPE_18__ {TYPE_3__ member; } ;
struct TYPE_16__ {TYPE_10__ para; } ;
struct TYPE_17__ {TYPE_4__ member; } ;
struct TYPE_13__ {TYPE_10__ para; } ;
struct TYPE_14__ {TYPE_1__ member; } ;
typedef TYPE_9__ ME_TextEditor ;
typedef TYPE_10__ ME_Paragraph ;


 int FUNC_0 (int,int ) ;

int FUNC_1(ME_TextEditor *VAR_0)
{
    ME_Paragraph *VAR_1;
    int VAR_2 = 0;

    if (VAR_0->pBuffer->pFirst && VAR_0->pBuffer->pLast)
    {
        VAR_1 = &VAR_0->pBuffer->pFirst->next->member.para;
        while (VAR_1 != &VAR_0->pBuffer->pLast->member.para && VAR_1->next_para)
        {
            VAR_2 = FUNC_0(VAR_2, VAR_1->nWidth);
            VAR_1 = &VAR_1->next_para->member.para;
        }
    }

    return VAR_2;
}
