
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
struct nk_color {int dummy; } ;
typedef int WCHAR ;
struct TYPE_8__ {int brush; int format; int memory; } ;
struct TYPE_7__ {int handle; } ;
struct TYPE_6__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ RectF ;
typedef TYPE_2__ GdipFont ;
typedef int FLOAT ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,int ,TYPE_1__*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,char const*,int,int *,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct nk_color) ;
 TYPE_4__ VAR_1 ;

__attribute__((used)) static void
FUNC_5(short VAR_2, short VAR_3, unsigned short VAR_4, unsigned short VAR_5,
    const char *VAR_6, int VAR_7, GdipFont *VAR_8, struct nk_color VAR_9, struct nk_color VAR_10)
{
    int VAR_11;
    WCHAR* VAR_12;
    RectF VAR_13 = { (FLOAT)VAR_2, (FLOAT)VAR_3, (FLOAT)VAR_4, (FLOAT)VAR_5 };

    if(!VAR_6 || !VAR_8 || !VAR_7) return;

    VAR_11 = FUNC_2(VAR_0, 0, VAR_6, VAR_7, ((void*)0), 0);
    VAR_12 = (WCHAR*)FUNC_3(VAR_11 * sizeof(wchar_t));
    FUNC_2(VAR_0, 0, VAR_6, VAR_7, VAR_12, VAR_11);

    FUNC_1(VAR_1.brush, FUNC_4(VAR_10));
    FUNC_0(VAR_1.memory, VAR_12, VAR_11, VAR_8->handle, &VAR_13, VAR_1.format, VAR_1.brush);
}
