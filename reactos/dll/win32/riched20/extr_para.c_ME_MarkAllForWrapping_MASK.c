
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* pBuffer; } ;
struct TYPE_11__ {int pLast; TYPE_3__* pFirst; } ;
struct TYPE_8__ {int next_para; } ;
struct TYPE_9__ {TYPE_1__ para; } ;
struct TYPE_10__ {TYPE_2__ member; } ;
typedef TYPE_5__ ME_TextEditor ;


 int FUNC_0 (TYPE_5__*,int ,int ) ;

void FUNC_1(ME_TextEditor *VAR_0)
{
  FUNC_0(VAR_0, VAR_0->pBuffer->pFirst->member.para.next_para, VAR_0->pBuffer->pLast);
}
