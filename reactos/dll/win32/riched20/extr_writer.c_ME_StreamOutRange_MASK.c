
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* stream; } ;
struct TYPE_8__ {int dwError; } ;
typedef int ME_TextEditor ;
typedef TYPE_2__ ME_OutStream ;
typedef int ME_Cursor ;
typedef int LRESULT ;
typedef int EDITSTREAM ;
typedef int DWORD ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,TYPE_2__*,int const*,int,int) ;
 int FUNC_4 (int *,TYPE_2__*,int const*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

LRESULT FUNC_5(ME_TextEditor *VAR_3, DWORD VAR_4,
                          const ME_Cursor *VAR_5,
                          int VAR_6, EDITSTREAM *VAR_7)
{
  ME_OutStream *VAR_8 = FUNC_2(VAR_3, VAR_7);

  if (VAR_4 & VAR_0)
    FUNC_3(VAR_3, VAR_8, VAR_5, VAR_6, VAR_4);
  else if (VAR_4 & VAR_1 || VAR_4 & VAR_2)
    FUNC_4(VAR_3, VAR_8, VAR_5, VAR_6, VAR_4);
  if (!VAR_8->stream->dwError)
    FUNC_0(VAR_8);
  return FUNC_1(VAR_8);
}
