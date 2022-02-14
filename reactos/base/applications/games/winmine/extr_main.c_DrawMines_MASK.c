
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int rows; unsigned int cols; int hMinesBMP; } ;
typedef int HGDIOBJ ;
typedef int HDC ;
typedef TYPE_1__ BOARD ;


 int FUNC_0 (int ,int ,TYPE_1__*,unsigned int,unsigned int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2 ( HDC VAR_1, HDC VAR_2, BOARD *VAR_3 )
{
    HGDIOBJ VAR_4;
    unsigned VAR_5, VAR_6;
    VAR_4 = FUNC_1 (VAR_2, VAR_3->hMinesBMP);

    for( VAR_6 = 1; VAR_6 <= VAR_3->rows; VAR_6++ ) {
      for( VAR_5 = 1; VAR_5 <= VAR_3->cols; VAR_5++ ) {
        FUNC_0( VAR_1, VAR_2, VAR_3, VAR_5, VAR_6, VAR_0 );
      }
    }
    FUNC_1( VAR_2, VAR_4 );
}
