
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int rtfParam; char* rtfTextBuf; size_t rtfTextLen; int pushedChar; int rtfMajor; void* rtfClass; TYPE_2__* stream; int rtfMinor; } ;
struct TYPE_8__ {TYPE_1__* editstream; } ;
struct TYPE_7__ {int dwError; } ;
typedef TYPE_3__ RTF_Info ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;

__attribute__((used)) static void FUNC_6(RTF_Info *VAR_11)
{
 int VAR_12;
 int VAR_13;



 VAR_11->rtfClass = VAR_10;
 VAR_11->rtfParam = VAR_6;
 VAR_11->rtfTextBuf[VAR_11->rtfTextLen = 0] = '\0';



 if (VAR_11->pushedChar != VAR_0)
 {
  VAR_13 = VAR_11->pushedChar;
  VAR_11->rtfTextBuf[VAR_11->rtfTextLen++] = VAR_13;
  VAR_11->rtfTextBuf[VAR_11->rtfTextLen] = '\0';
  VAR_11->pushedChar = VAR_0;
 }
 else if ((VAR_13 = FUNC_0 (VAR_11)) == VAR_0)
 {
  VAR_11->rtfClass = VAR_3;
  return;
 }

 if (VAR_13 == '{')
 {
  VAR_11->rtfClass = VAR_5;
  VAR_11->rtfMajor = VAR_1;
  return;
 }
 if (VAR_13 == '}')
 {
  VAR_11->rtfClass = VAR_5;
  VAR_11->rtfMajor = VAR_4;
  return;
 }
 if (VAR_13 != '\\')
 {





  if (VAR_13 == '\t')
  {
   VAR_11->rtfClass = VAR_2;
   VAR_11->rtfMajor = VAR_7;
   VAR_11->rtfMinor = VAR_8;
  }
  else
  {
   VAR_11->rtfClass = VAR_9;
   VAR_11->rtfMajor = VAR_13;
  }
  return;
 }
 if ((VAR_13 = FUNC_0 (VAR_11)) == VAR_0)
 {

  return;
 }
 if (!FUNC_3 (VAR_13))
 {






  if (VAR_13 == '\'')
  {
  int VAR_14;

   if ((VAR_13 = FUNC_0 (VAR_11)) != VAR_0 && (VAR_14 = FUNC_0 (VAR_11)) != VAR_0
    && FUNC_5(VAR_13) && FUNC_5(VAR_14))
   {
    VAR_11->rtfClass = VAR_9;
    VAR_11->rtfMajor = FUNC_2 (VAR_13) * 16 + FUNC_2 (VAR_14);
    return;
   }

   VAR_11->rtfClass = VAR_3;
   VAR_11->stream->editstream->dwError = -14;
   return;
  }



  if (VAR_13 == ':' || VAR_13 == '{' || VAR_13 == '}' || VAR_13 == '\\')
  {
   VAR_11->rtfClass = VAR_9;
   VAR_11->rtfMajor = VAR_13;
   return;
  }


  FUNC_1 (VAR_11, VAR_11->rtfTextBuf);
  return;
 }

 while (FUNC_3 (VAR_13))
 {
  if ((VAR_13 = FUNC_0 (VAR_11)) == VAR_0)
   break;
 }
 if (VAR_13 != VAR_0)
  VAR_11->rtfTextBuf[VAR_11->rtfTextLen-1] = '\0';
 FUNC_1 (VAR_11, VAR_11->rtfTextBuf);
 if (VAR_13 != VAR_0)
  VAR_11->rtfTextBuf[VAR_11->rtfTextLen-1] = VAR_13;







 VAR_12 = 1;
 if (VAR_13 == '-')
 {
  VAR_12 = -1;
  VAR_13 = FUNC_0 (VAR_11);
 }
 if (VAR_13 != VAR_0 && FUNC_4 (VAR_13))
 {
  VAR_11->rtfParam = 0;
  while (FUNC_4 (VAR_13))
  {
   VAR_11->rtfParam = VAR_11->rtfParam * 10 + VAR_13 - '0';
   if ((VAR_13 = FUNC_0 (VAR_11)) == VAR_0)
    break;
  }
  VAR_11->rtfParam *= VAR_12;
 }






 if (VAR_13 != VAR_0)
 {
  if (VAR_13 != ' ')
   VAR_11->pushedChar = VAR_13;
  VAR_11->rtfTextBuf[--VAR_11->rtfTextLen] = '\0';
 }
}
