
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nk_color {int dummy; } ;
typedef int HDC ;
typedef int COLORREF ;


 int FUNC_0 (int ,short,short,short,short) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct nk_color) ;

__attribute__((used)) static void
FUNC_4(HDC VAR_0, short VAR_1, short VAR_2, unsigned short VAR_3,
    unsigned short VAR_4, struct nk_color VAR_5)
{
    COLORREF VAR_6 = FUNC_3(VAR_5);
    FUNC_1(VAR_0, VAR_6);
    FUNC_2(VAR_0, VAR_6);
    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_1 + VAR_3, VAR_2 + VAR_4);
}
