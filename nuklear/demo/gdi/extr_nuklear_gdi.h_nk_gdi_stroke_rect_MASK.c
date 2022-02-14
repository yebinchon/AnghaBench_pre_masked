
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nk_color {int dummy; } ;
typedef int * HPEN ;
typedef int * HGDIOBJ ;
typedef int HDC ;
typedef int COLORREF ;


 int * FUNC_0 (int ,unsigned short,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,short,short,short,short) ;
 int FUNC_4 (int ,short,short,short,short,unsigned short,unsigned short) ;
 int * FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct nk_color) ;

__attribute__((used)) static void
FUNC_8(HDC VAR_3, short VAR_4, short VAR_5, unsigned short VAR_6,
    unsigned short VAR_7, unsigned short VAR_8, unsigned short VAR_9, struct nk_color VAR_10)
{
    COLORREF VAR_11 = FUNC_7(VAR_10);

    HPEN VAR_12 = ((void*)0);
    if (VAR_9 == 1) {
        FUNC_6(VAR_3, VAR_11);
    } else {
        VAR_12 = FUNC_0(VAR_2, VAR_9, VAR_11);
        FUNC_5(VAR_3, VAR_12);
    }

    HGDIOBJ VAR_13 = FUNC_5(VAR_3, FUNC_2(VAR_1));
    if (VAR_8 == 0) {
        FUNC_3(VAR_3, VAR_4, VAR_5, VAR_4 + VAR_6, VAR_5 + VAR_7);
    } else {
        FUNC_4(VAR_3, VAR_4, VAR_5, VAR_4 + VAR_6, VAR_5 + VAR_7, VAR_8, VAR_8);
    }
    FUNC_5(VAR_3, VAR_13);

    if (VAR_12) {
        FUNC_5(VAR_3, FUNC_2(VAR_0));
        FUNC_1(VAR_12);
    }
}
