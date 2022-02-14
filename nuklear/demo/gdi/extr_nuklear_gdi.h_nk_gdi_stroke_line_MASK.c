
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nk_color {int dummy; } ;
typedef int * HPEN ;
typedef int HDC ;
typedef int COLORREF ;


 int * FUNC_0 (int ,unsigned int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,short,short) ;
 int FUNC_4 (int ,short,short,int *) ;
 int VAR_1 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct nk_color) ;

__attribute__((used)) static void
FUNC_8(HDC VAR_2, short VAR_3, short VAR_4, short VAR_5,
    short VAR_6, unsigned int VAR_7, struct nk_color VAR_8)
{
    COLORREF VAR_9 = FUNC_7(VAR_8);

    HPEN VAR_10 = ((void*)0);
    if (VAR_7 == 1) {
        FUNC_6(VAR_2, VAR_9);
    } else {
        VAR_10 = FUNC_0(VAR_1, VAR_7, VAR_9);
        FUNC_5(VAR_2, VAR_10);
    }

    FUNC_4(VAR_2, VAR_3, VAR_4, ((void*)0));
    FUNC_3(VAR_2, VAR_5, VAR_6);

    if (VAR_10) {
        FUNC_5(VAR_2, FUNC_2(VAR_0));
        FUNC_1(VAR_10);
    }
}
