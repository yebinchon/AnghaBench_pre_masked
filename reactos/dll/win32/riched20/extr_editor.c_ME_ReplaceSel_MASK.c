
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_12__ {int * pCursors; } ;
typedef TYPE_1__ ME_TextEditor ;
typedef int ME_Style ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int*,int*) ;
 int FUNC_5 (TYPE_1__*,int ,char const*,int,int *) ;
 int FUNC_6 (TYPE_1__*,int *,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*) ;

void FUNC_10(ME_TextEditor *VAR_1, BOOL VAR_2, const WCHAR *VAR_3, int VAR_4)
{
  int VAR_5, VAR_6, VAR_7;
  ME_Style *VAR_8;

  VAR_7 = FUNC_4(VAR_1, &VAR_5, &VAR_6);
  VAR_8 = FUNC_3(VAR_1);
  FUNC_6(VAR_1, &VAR_1->pCursors[VAR_7], VAR_6-VAR_5, VAR_0);
  FUNC_5(VAR_1, 0, VAR_3, VAR_4, VAR_8);
  FUNC_7(VAR_8);





  if (VAR_4>0 && VAR_3[VAR_4-1] == '\n')
    FUNC_0(VAR_1);
  FUNC_1(VAR_1);
  FUNC_9(VAR_1);
  if (!VAR_2)
    FUNC_2(VAR_1);
  FUNC_8(VAR_1, VAR_0);
}
