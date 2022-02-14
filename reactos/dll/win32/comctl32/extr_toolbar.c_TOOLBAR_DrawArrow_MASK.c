
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ INT ;
typedef int HPEN ;
typedef int HDC ;
typedef int COLORREF ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int *) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5 (HDC VAR_1, INT VAR_2, INT VAR_3, COLORREF VAR_4)
{
    INT VAR_5, VAR_6;
    HPEN VAR_7, VAR_8;

    if (!(VAR_7 = FUNC_0( VAR_0, 1, VAR_4))) return;
    VAR_8 = FUNC_4 ( VAR_1, VAR_7 );
    VAR_5 = VAR_2 + 2;
    VAR_6 = VAR_3;
    FUNC_3 (VAR_1, VAR_5, VAR_6, ((void*)0));
    FUNC_2 (VAR_1, VAR_5+5, VAR_6++); VAR_5++;
    FUNC_3 (VAR_1, VAR_5, VAR_6, ((void*)0));
    FUNC_2 (VAR_1, VAR_5+3, VAR_6++); VAR_5++;
    FUNC_3 (VAR_1, VAR_5, VAR_6, ((void*)0));
    FUNC_2 (VAR_1, VAR_5+1, VAR_6);
    FUNC_4( VAR_1, VAR_8 );
    FUNC_1( VAR_7 );
}
