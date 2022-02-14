
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int_u ;
typedef int char_u ;
typedef int GuiFont ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *,int,int,int) ;
 scalar_t__ FUNC_2 (int *,int **,int*,int*) ;
 int FUNC_3 (int *) ;

GuiFont
FUNC_4(char_u *VAR_3, int VAR_4)
{
    char_u *VAR_5;
    char_u *VAR_6;
    int_u VAR_7 = 12;
    int_u VAR_8 = 0;

    if (FUNC_2(VAR_3, &VAR_5, &VAR_8,
  &VAR_7) != VAR_1)
    {
 VAR_6 = FUNC_1(VAR_5, VAR_8, VAR_7, -1);
 FUNC_3(VAR_5);

 if (VAR_6 != ((void*)0))
     return (GuiFont)VAR_6;
    }

    if (VAR_4)
 FUNC_0(VAR_2, VAR_3);

    return VAR_0;
}
