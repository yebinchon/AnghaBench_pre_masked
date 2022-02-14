
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nk_color {int dummy; } ;
struct TYPE_5__ {int height; int width; } ;
struct TYPE_4__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ RECT ;
typedef int HDC ;
typedef int COLORREF ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,TYPE_1__*,int *,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nk_color) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_3(HDC VAR_2, struct nk_color VAR_3)
{
    COLORREF VAR_4 = FUNC_2(VAR_3);
    RECT VAR_5 = { 0, 0, VAR_1.width, VAR_1.height };
    FUNC_1(VAR_2, VAR_4);

    FUNC_0(VAR_2, 0, 0, VAR_0, &VAR_5, ((void*)0), 0, ((void*)0));
}
