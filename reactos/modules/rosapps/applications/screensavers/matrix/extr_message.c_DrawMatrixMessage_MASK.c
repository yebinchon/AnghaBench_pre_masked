
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int** message; } ;
typedef TYPE_1__ MATRIX_MESSAGE ;
typedef int MATRIX ;
typedef int HDC ;


 int FUNC_0 (int *,int ,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

void FUNC_2(MATRIX *VAR_3, MATRIX_MESSAGE *VAR_4, HDC VAR_5)
{
 int VAR_6, VAR_7;

 for(VAR_6 = 0; VAR_6 < VAR_4->width; VAR_6++)
  for(VAR_7 = 0; VAR_7 < VAR_4->height; VAR_7++)
   if((VAR_4->message[VAR_6][VAR_7] & 0x8000) &&
      (VAR_4->message[VAR_6][VAR_7] & 0x00FF))
   {
    FUNC_0(VAR_3, VAR_5, VAR_6 * VAR_1, VAR_7 * VAR_0, FUNC_1(VAR_2));
   }
}
