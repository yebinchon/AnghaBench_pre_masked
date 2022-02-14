
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pushedClass; scalar_t__ rtfClass; size_t stackTop; int style; TYPE_1__* stack; int rtfTextBuf; int pushedTextBuf; int rtfParam; int pushedParam; int rtfMinor; int pushedMinor; int rtfMajor; int pushedMajor; } ;
struct TYPE_5__ {int style; } ;
typedef TYPE_2__ RTF_Info ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(RTF_Info *VAR_2)
{
 if (VAR_2->pushedClass >= 0)
  FUNC_0 ("cannot unget two tokens\n");
 if (VAR_2->rtfClass < 0)
  FUNC_0 ("no token to unget\n");
 VAR_2->pushedClass = VAR_2->rtfClass;
 VAR_2->pushedMajor = VAR_2->rtfMajor;
 VAR_2->pushedMinor = VAR_2->rtfMinor;
 VAR_2->pushedParam = VAR_2->rtfParam;
 FUNC_3 (VAR_2->pushedTextBuf, VAR_2->rtfTextBuf);



 if(FUNC_2 (VAR_2, VAR_1, VAR_0))
 {
  VAR_2->stack[VAR_2->stackTop].style = VAR_2->style;
  FUNC_1(VAR_2->style);
  VAR_2->stackTop++;
 }
}
