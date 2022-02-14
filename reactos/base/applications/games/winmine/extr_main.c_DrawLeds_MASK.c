
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hLedsBMP; } ;
typedef int HGDIOBJ ;
typedef int HDC ;
typedef TYPE_1__ BOARD ;


 int FUNC_0 (int ,unsigned int,int,unsigned int,unsigned int,int ,int ,unsigned int,int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2( HDC VAR_3, HDC VAR_4, BOARD *VAR_5, int VAR_6, int VAR_7, int VAR_8 )
{
    HGDIOBJ VAR_9;
    unsigned VAR_10[3], VAR_11;
    int VAR_12;

    VAR_12 = VAR_6;
    if( VAR_12 < 1000 ) {
        if( VAR_12 >= 0 ) {
            VAR_10[0] = VAR_12 / 100 ;
            VAR_12 -= VAR_10[0] * 100;
        }
        else {
            VAR_10[0] = 10;
            VAR_12 = -VAR_12;
        }
        VAR_10[1] = VAR_12 / 10;
        VAR_12 -= VAR_10[1] * 10;
        VAR_10[2] = VAR_12;
    }
    else {
        for( VAR_11 = 0; VAR_11 < 3; VAR_11++ )
            VAR_10[VAR_11] = 10;
    }

    VAR_9 = FUNC_1 (VAR_4, VAR_5->hLedsBMP);

    for( VAR_11 = 0; VAR_11 < 3; VAR_11++ ) {
        FUNC_0( VAR_3,
            VAR_11 * VAR_1 + VAR_7,
            VAR_8,
            VAR_1,
            VAR_0,
            VAR_4,
            0,
            VAR_10[VAR_11] * VAR_0,
            VAR_2);
    }

    FUNC_1( VAR_4, VAR_9 );
}
