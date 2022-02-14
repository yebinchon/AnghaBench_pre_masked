
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* rtfTextBuf; size_t rtfTextLen; int prevChar; int rtfLinePos; int rtfLineNum; void* bumpLine; } ;
typedef TYPE_1__ RTF_Info ;
typedef void* BOOL ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(RTF_Info *VAR_3)
{
 int VAR_4;
        BOOL VAR_5;

 if ((VAR_4 = FUNC_0(VAR_3)) != VAR_0)
 {
  VAR_3->rtfTextBuf[VAR_3->rtfTextLen++] = VAR_4;
  VAR_3->rtfTextBuf[VAR_3->rtfTextLen] = '\0';
 }
 if (VAR_3->prevChar == VAR_0)
                VAR_3->bumpLine = VAR_2;
        VAR_5 = VAR_3->bumpLine;
        VAR_3->bumpLine = VAR_1;
 if (VAR_4 == '\r')
                VAR_3->bumpLine = VAR_2;
 else if (VAR_4 == '\n')
 {
                VAR_3->bumpLine = VAR_2;
  if (VAR_3->prevChar == '\r')
                        VAR_5 = VAR_1;
 }
 ++VAR_3->rtfLinePos;
 if (VAR_5)
 {
  ++VAR_3->rtfLineNum;
  VAR_3->rtfLinePos = 1;
 }
 VAR_3->prevChar = VAR_4;
 return (VAR_4);
}
