
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ rtfFormat; scalar_t__ rtfMajor; char* rtfTextBuf; size_t rtfTextLen; int rtfClass; int pushedClass; scalar_t__ pushedMajor; int pushedTextBuf; int pushedParam; int rtfParam; scalar_t__ pushedMinor; scalar_t__ rtfMinor; } ;
typedef TYPE_1__ RTF_Info ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int ) ;
 size_t FUNC_3 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(RTF_Info *VAR_5)
{
 if (VAR_5->rtfFormat == VAR_1)
 {
  VAR_5->rtfMajor = FUNC_0 (VAR_5);
  VAR_5->rtfMinor = 0;
  VAR_5->rtfParam = VAR_3;
  VAR_5->rtfTextBuf[VAR_5->rtfTextLen = 0] = '\0';
  if (VAR_5->rtfMajor == VAR_0)
   VAR_5->rtfClass = VAR_2;
  else
   VAR_5->rtfClass = VAR_4;
  return;
 }



 if (VAR_5->pushedClass >= 0)
 {
  VAR_5->rtfClass = VAR_5->pushedClass;
  VAR_5->rtfMajor = VAR_5->pushedMajor;
  VAR_5->rtfMinor = VAR_5->pushedMinor;
  VAR_5->rtfParam = VAR_5->pushedParam;
  FUNC_2 (VAR_5->rtfTextBuf, VAR_5->pushedTextBuf);
  VAR_5->rtfTextLen = FUNC_3(VAR_5->rtfTextBuf);
  VAR_5->pushedClass = -1;
  return;
 }






 FUNC_1 (VAR_5);
}
