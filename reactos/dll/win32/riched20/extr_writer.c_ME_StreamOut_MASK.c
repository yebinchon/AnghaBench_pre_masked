
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * pCursors; } ;
typedef TYPE_1__ ME_TextEditor ;
typedef int ME_Cursor ;
typedef int LRESULT ;
typedef int EDITSTREAM ;
typedef int DWORD ;


 size_t FUNC_0 (TYPE_1__*,int*,int*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int,int *,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;

LRESULT
FUNC_4(ME_TextEditor *VAR_2, DWORD VAR_3, EDITSTREAM *VAR_4)
{
  ME_Cursor VAR_5;
  int VAR_6;

  if (VAR_3 & VAR_0) {
    int VAR_7, VAR_8;
    VAR_5 = VAR_2->pCursors[FUNC_0(VAR_2, &VAR_7, &VAR_8)];
    VAR_6 = VAR_8 - VAR_7;
  } else {
    FUNC_2(VAR_2, &VAR_5);
    VAR_6 = FUNC_1(VAR_2);

    if (VAR_3 & VAR_1)
      VAR_6++;
  }
  return FUNC_3(VAR_2, VAR_3, &VAR_5, VAR_6, VAR_4);
}
