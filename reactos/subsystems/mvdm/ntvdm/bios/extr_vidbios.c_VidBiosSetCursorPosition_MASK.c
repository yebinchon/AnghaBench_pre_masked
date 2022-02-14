
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t WORD ;
typedef int VOID ;
struct TYPE_2__ {size_t VideoPage; size_t ScreenColumns; int * CursorPosition; } ;
typedef size_t BYTE ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static VOID FUNC_4(BYTE VAR_5, BYTE VAR_6, BYTE VAR_7)
{

    VAR_0->CursorPosition[VAR_7] = FUNC_3(VAR_6, VAR_5);


    if (VAR_7 == VAR_0->VideoPage)
    {
        WORD VAR_8 = VAR_5 * VAR_0->ScreenColumns + VAR_6;


        FUNC_1(VAR_4, VAR_2);
        FUNC_1(VAR_3 , FUNC_2(VAR_8));
        FUNC_1(VAR_4, VAR_1);
        FUNC_1(VAR_3 , FUNC_0(VAR_8));
    }
}
