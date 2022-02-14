
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_6__ {scalar_t__ ptr; } ;
typedef TYPE_1__ nk_handle ;
typedef int WCHAR ;
struct TYPE_8__ {int dc; } ;
struct TYPE_7__ {scalar_t__ cx; } ;
typedef TYPE_2__ SIZE ;
typedef TYPE_3__ GdiFont ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int,TYPE_2__*) ;
 int FUNC_1 (int ,int ,char const*,int,int *,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static float
FUNC_3(nk_handle VAR_1, float VAR_2, const char *VAR_3, int VAR_4)
{
    GdiFont *VAR_5 = (GdiFont*)VAR_1.ptr;
    SIZE VAR_6;
    int VAR_7;
    WCHAR* VAR_8;
    if (!VAR_5 || !VAR_3)
        return 0;

    VAR_7 = FUNC_1(VAR_0, 0, VAR_3, VAR_4, ((void*)0), 0);
    VAR_8 = (WCHAR*)FUNC_2(VAR_7 * sizeof(wchar_t));
    FUNC_1(VAR_0, 0, VAR_3, VAR_4, VAR_8, VAR_7);
    if (FUNC_0(VAR_5->dc, VAR_8, VAR_7, &VAR_6))
        return (float)VAR_6.cx;
    return -1.0f;
}
