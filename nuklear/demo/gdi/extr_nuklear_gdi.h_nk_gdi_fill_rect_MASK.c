
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nk_color {int dummy; } ;
struct TYPE_3__ {short member_0; short member_1; short member_2; short member_3; } ;
typedef TYPE_1__ RECT ;
typedef int HDC ;
typedef int COLORREF ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,TYPE_1__*,int *,int ,int *) ;
 int FUNC_1 (int ,short,short,short,short,unsigned short,unsigned short) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct nk_color) ;

__attribute__((used)) static void
FUNC_6(HDC VAR_1, short VAR_2, short VAR_3, unsigned short VAR_4,
    unsigned short VAR_5, unsigned short VAR_6, struct nk_color VAR_7)
{
    COLORREF VAR_8 = FUNC_5(VAR_7);

    if (VAR_6 == 0) {
        RECT VAR_9 = { VAR_2, VAR_3, VAR_2 + VAR_4, VAR_3 + VAR_5 };
        FUNC_2(VAR_1, VAR_8);
        FUNC_0(VAR_1, 0, 0, VAR_0, &VAR_9, ((void*)0), 0, ((void*)0));
    } else {
        FUNC_4(VAR_1, VAR_8);
        FUNC_3(VAR_1, VAR_8);
        FUNC_1(VAR_1, VAR_2, VAR_3, VAR_2 + VAR_4, VAR_3 + VAR_5, VAR_6, VAR_6);
    }
}
