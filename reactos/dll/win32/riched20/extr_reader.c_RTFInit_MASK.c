
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int cbSize; } ;
struct TYPE_8__ {char* rtfTextBuf; char* pushedTextBuf; int ansiCodePage; int unicodeLength; int codePage; int rtfClass; int pushedClass; int dwMaxCPOutputCount; TYPE_2__ fmt; scalar_t__ borderType; void* canInheritInTbl; scalar_t__ nestingLevel; int * tableDef; void* cpOutputBuffer; scalar_t__ dwCPOutputCount; void* bumpLine; void* prevChar; scalar_t__ rtfLinePos; scalar_t__ rtfLineNum; void* pushedChar; scalar_t__ defFont; } ;
typedef TYPE_1__ RTF_Info ;


 void* VAR_0 ;
 int FUNC_0 (char*) ;
 void* VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int *) ;
 int FUNC_3 (TYPE_1__*,int,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 void* FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

void FUNC_7(RTF_Info *VAR_17)
{
 int VAR_18;

 if (VAR_17->rtfTextBuf == ((void*)0))
 {
  VAR_17->rtfTextBuf = FUNC_5 (VAR_8);
  VAR_17->pushedTextBuf = FUNC_5 (VAR_8);
  if (VAR_17->rtfTextBuf == ((void*)0) || VAR_17->pushedTextBuf == ((void*)0)) {
   FUNC_0 ("Cannot allocate text buffers.\n");
   return;
  }
  VAR_17->rtfTextBuf[0] = VAR_17->pushedTextBuf[0] = '\0';
 }

 for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++)
  FUNC_2 (VAR_17, VAR_18, ((void*)0));
 for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++)
  FUNC_3 (VAR_17, VAR_18, ((void*)0));


 FUNC_3 (VAR_17, VAR_10, VAR_3);
 FUNC_3 (VAR_17, VAR_9, VAR_2);
 FUNC_3 (VAR_17, VAR_16, VAR_7);
 FUNC_3 (VAR_17, VAR_11, VAR_4);
 FUNC_3 (VAR_17, VAR_15, VAR_6);
 FUNC_3 (VAR_17, VAR_14, VAR_5);


 FUNC_4 (VAR_17, ((void*)0));



 FUNC_1(VAR_17);

        VAR_17->ansiCodePage = 1252;
 VAR_17->unicodeLength = 1;
 VAR_17->codePage = VAR_17->ansiCodePage;
        VAR_17->defFont = 0;

 VAR_17->rtfClass = -1;
 VAR_17->pushedClass = -1;
 VAR_17->pushedChar = VAR_0;

 VAR_17->rtfLineNum = 0;
 VAR_17->rtfLinePos = 0;
 VAR_17->prevChar = VAR_0;
        VAR_17->bumpLine = VAR_1;

 VAR_17->dwCPOutputCount = 0;
        if (!VAR_17->cpOutputBuffer)
 {
  VAR_17->dwMaxCPOutputCount = 0x1000;
  VAR_17->cpOutputBuffer = FUNC_5(VAR_17->dwMaxCPOutputCount);
 }

        VAR_17->tableDef = ((void*)0);
        VAR_17->nestingLevel = 0;
        VAR_17->canInheritInTbl = VAR_1;
        VAR_17->borderType = 0;

        FUNC_6(&VAR_17->fmt, 0, sizeof(VAR_17->fmt));
        VAR_17->fmt.cbSize = sizeof(VAR_17->fmt);
}
