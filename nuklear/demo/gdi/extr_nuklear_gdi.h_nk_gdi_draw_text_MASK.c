
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct nk_color {int dummy; } ;
typedef int WCHAR ;
struct TYPE_3__ {int handle; } ;
typedef int HDC ;
typedef TYPE_1__ GdiFont ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,short,short,int ,int *,int *,int,int *) ;
 int FUNC_1 (int ,int ,char const*,int,int *,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct nk_color) ;

__attribute__((used)) static void
FUNC_7(HDC VAR_2, short VAR_3, short VAR_4, unsigned short VAR_5, unsigned short VAR_6,
    const char *VAR_7, int VAR_8, GdiFont *VAR_9, struct nk_color VAR_10, struct nk_color VAR_11)
{
    int VAR_12;
    WCHAR* VAR_13;

    if(!VAR_7 || !VAR_9 || !VAR_8) return;

    VAR_12 = FUNC_1(VAR_0, 0, VAR_7, VAR_8, ((void*)0), 0);
    VAR_13 = (WCHAR*)FUNC_5(VAR_12 * sizeof(wchar_t));
    FUNC_1(VAR_0, 0, VAR_7, VAR_8, VAR_13, VAR_12);

    FUNC_3(VAR_2, FUNC_6(VAR_10));
    FUNC_4(VAR_2, FUNC_6(VAR_11));

    FUNC_2(VAR_2, VAR_9->handle);
    FUNC_0(VAR_2, VAR_3, VAR_4, VAR_1, ((void*)0), VAR_13, VAR_12, ((void*)0));
}
