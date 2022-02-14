
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* parent; } ;
struct TYPE_6__ {TYPE_2__* tableDef; TYPE_2__* cpOutputBuffer; TYPE_2__* pushedTextBuf; TYPE_2__* rtfTextBuf; } ;
typedef TYPE_1__ RTF_Info ;
typedef TYPE_2__ RTFTable ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(RTF_Info *VAR_0)
{
 if (VAR_0->rtfTextBuf)
 {
  FUNC_1(VAR_0->rtfTextBuf);
  FUNC_1(VAR_0->pushedTextBuf);
 }
 FUNC_0(VAR_0);
 FUNC_1(VAR_0->cpOutputBuffer);
        while (VAR_0->tableDef)
        {
                RTFTable *VAR_1 = VAR_0->tableDef;
                VAR_0->tableDef = VAR_1->parent;
                FUNC_1(VAR_1);
        }
}
