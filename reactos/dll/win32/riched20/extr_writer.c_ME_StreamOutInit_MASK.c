
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ dwError; } ;
struct TYPE_7__ {int dwEffects; int bUnderlineType; } ;
struct TYPE_8__ {int nColorTblLen; TYPE_1__ cur_fmt; TYPE_3__* stream; } ;
typedef int ME_TextEditor ;
typedef TYPE_2__ ME_OutStream ;
typedef TYPE_3__ EDITSTREAM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static ME_OutStream*
FUNC_1(ME_TextEditor *VAR_3, EDITSTREAM *VAR_4)
{
  ME_OutStream *VAR_5 = FUNC_0(sizeof(*VAR_5));

  VAR_5->stream = VAR_4;
  VAR_5->stream->dwError = 0;
  VAR_5->nColorTblLen = 1;
  VAR_5->cur_fmt.dwEffects = VAR_1 | VAR_0;
  VAR_5->cur_fmt.bUnderlineType = VAR_2;
  return VAR_5;
}
