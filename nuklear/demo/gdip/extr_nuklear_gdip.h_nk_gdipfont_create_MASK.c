
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef scalar_t__ WCHAR ;
struct TYPE_3__ {int handle; } ;
typedef int REAL ;
typedef int GpFontFamily ;
typedef TYPE_1__ GdipFont ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int *) ;
 int FUNC_1 (scalar_t__*,int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,char const*,int,scalar_t__*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,int) ;

GdipFont*
FUNC_6(const char *VAR_3, int VAR_4)
{
    GdipFont *VAR_5 = (GdipFont*)FUNC_5(1, sizeof(GdipFont));
    GpFontFamily *VAR_6;

    int VAR_7 = FUNC_3(VAR_0, 0, VAR_3, -1, ((void*)0), 0);
    WCHAR* VAR_8 = (WCHAR*)FUNC_4((VAR_7 + 1) * sizeof(wchar_t));
    FUNC_3(VAR_0, 0, VAR_3, -1, VAR_8, VAR_7);
    VAR_8[VAR_7] = 0;

    FUNC_1(VAR_8, ((void*)0), &VAR_6);
    FUNC_0(VAR_6, (REAL)VAR_4, VAR_1, VAR_2, &VAR_5->handle);
    FUNC_2(VAR_6);

    return VAR_5;
}
