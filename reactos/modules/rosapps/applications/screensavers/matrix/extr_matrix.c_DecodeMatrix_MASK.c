
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numcols; scalar_t__ message; int * column; } ;
typedef TYPE_1__ MATRIX ;
typedef int HWND ;
typedef int HDC ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(HWND VAR_1, MATRIX *VAR_2)
{
 int VAR_3;
 HDC VAR_4 = FUNC_1(VAR_1);

 for(VAR_3 = 0; VAR_3 < VAR_2->numcols; VAR_3++)
 {
  FUNC_2(&VAR_2->column[VAR_3]);
  FUNC_5(&VAR_2->column[VAR_3]);
  FUNC_3(&VAR_2->column[VAR_3], VAR_2, VAR_4, VAR_3 * VAR_0);
 }

 if(VAR_2->message)
  FUNC_0(VAR_4, VAR_2);

 FUNC_4(VAR_1, VAR_4);
}
