
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rtfClass; size_t stackTop; TYPE_1__* stack; int unicodeLength; int codePage; int style; int styleChanged; int rtfMajor; } ;
struct TYPE_5__ {int unicodeLength; int codePage; int style; } ;
typedef TYPE_2__ RTF_Info ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 size_t VAR_1 ;

 int VAR_2 ;



__attribute__((used)) static void FUNC_3(RTF_Info *VAR_3)
{
  switch(VAR_3->rtfClass)
  {
    case 128:
      switch(VAR_3->rtfMajor)
      {
        case 130:
          if (VAR_3->stackTop < VAR_1) {
            VAR_3->stack[VAR_3->stackTop].style = VAR_3->style;
            FUNC_0(VAR_3->style);
            VAR_3->stack[VAR_3->stackTop].codePage = VAR_3->codePage;
            VAR_3->stack[VAR_3->stackTop].unicodeLength = VAR_3->unicodeLength;
          }
          VAR_3->stackTop++;
          VAR_3->styleChanged = VAR_0;
          break;
        case 129:
        {
          FUNC_2(VAR_3);
          VAR_3->stackTop--;
          if (VAR_3->stackTop <= 0)
            VAR_3->rtfClass = VAR_2;
          if (VAR_3->stackTop < 0)
            return;

          FUNC_1(VAR_3->style);
          VAR_3->style = VAR_3->stack[VAR_3->stackTop].style;
          VAR_3->codePage = VAR_3->stack[VAR_3->stackTop].codePage;
          VAR_3->unicodeLength = VAR_3->stack[VAR_3->stackTop].unicodeLength;
          break;
        }
      }
      break;
  }
}
