
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;

 int VAR_1 ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*) ;
 int VAR_2 ;


 scalar_t__* VAR_3 ;
 int FUNC_3 (char*,char*) ;
 int VAR_4 ;


 char* VAR_5 ;

__attribute__((used)) static void
FUNC_4(int VAR_6)
{
    FILE *VAR_7, *VAR_8;
    char *VAR_9;



    if (*VAR_3 != VAR_0)
 VAR_9 = VAR_3;
    else
 VAR_9 = VAR_5;

    VAR_7 = FUNC_1(VAR_9, "w");
    if (VAR_7 == ((void*)0))
    {
 FUNC_3("\nERROR: Cannot open \"%s\" for writing.\n", VAR_9);
 return;
    }
    switch (VAR_1)
    {
 case 132:
      FUNC_2(VAR_7, "set compatible\n");
      break;
 case 133:
      FUNC_2(VAR_7, "set nocompatible\n");
      break;
 case 134:
      FUNC_2(VAR_7, "set nocompatible\n");
      FUNC_2(VAR_7, "source $VIMRUNTIME/vimrc_example.vim\n");
      break;
    }
    switch (VAR_4)
    {
 case 129:
      break;
 case 128:
      FUNC_2(VAR_7, "source $VIMRUNTIME/mswin.vim\n");
      break;
    }
    switch (VAR_2)
    {
 case 130:
      FUNC_2(VAR_7, "behave xterm\n");
      break;
 case 131:
      FUNC_2(VAR_7, "behave mswin\n");
      break;
    }
    if ((VAR_8 = FUNC_1("diff.exe", "r")) != ((void*)0))
    {

 FUNC_0(VAR_8);
 FUNC_2(VAR_7, "\n");
 FUNC_2(VAR_7, "set diffexpr=MyDiff()\n");
 FUNC_2(VAR_7, "function MyDiff()\n");
 FUNC_2(VAR_7, "  let opt = '-a --binary '\n");
 FUNC_2(VAR_7, "  if &diffopt =~ 'icase' | let opt = opt . '-i ' | endif\n");
 FUNC_2(VAR_7, "  if &diffopt =~ 'iwhite' | let opt = opt . '-b ' | endif\n");

 FUNC_2(VAR_7, "  let arg1 = v:fname_in\n");
 FUNC_2(VAR_7, "  if arg1 =~ ' ' | let arg1 = '\"' . arg1 . '\"' | endif\n");
 FUNC_2(VAR_7, "  let arg2 = v:fname_new\n");
 FUNC_2(VAR_7, "  if arg2 =~ ' ' | let arg2 = '\"' . arg2 . '\"' | endif\n");
 FUNC_2(VAR_7, "  let arg3 = v:fname_out\n");
 FUNC_2(VAR_7, "  if arg3 =~ ' ' | let arg3 = '\"' . arg3 . '\"' | endif\n");
 FUNC_2(VAR_7, "  if $VIMRUNTIME =~ ' '\n");
 FUNC_2(VAR_7, "    if &sh =~ '\\<cmd'\n");
 FUNC_2(VAR_7, "      if empty(&shellxquote)\n");
 FUNC_2(VAR_7, "        let l:shxq_sav = ''\n");
 FUNC_2(VAR_7, "        set shellxquote&\n");
 FUNC_2(VAR_7, "      endif\n");
 FUNC_2(VAR_7, "      let cmd = '\"' . $VIMRUNTIME . '\\diff\"'\n");
 FUNC_2(VAR_7, "    else\n");
 FUNC_2(VAR_7, "      let cmd = substitute($VIMRUNTIME, ' ', '\" ', '') . '\\diff\"'\n");
 FUNC_2(VAR_7, "    endif\n");
 FUNC_2(VAR_7, "  else\n");
 FUNC_2(VAR_7, "    let cmd = $VIMRUNTIME . '\\diff'\n");
 FUNC_2(VAR_7, "  endif\n");
 FUNC_2(VAR_7, "  silent execute '!' . cmd . ' ' . opt . arg1 . ' ' . arg2 . ' > ' . arg3\n");
 FUNC_2(VAR_7, "  if exists('l:shxq_sav')\n");
 FUNC_2(VAR_7, "    let &shellxquote=l:shxq_sav\n");
 FUNC_2(VAR_7, "  endif\n");
 FUNC_2(VAR_7, "endfunction\n");
 FUNC_2(VAR_7, "\n");
    }
    FUNC_0(VAR_7);
    FUNC_3("%s has been written\n", VAR_9);
}
