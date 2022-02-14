
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_8__ {scalar_t__ ptr; } ;
typedef TYPE_1__ nk_handle ;
typedef int WCHAR ;
struct TYPE_11__ {int format; int memory; } ;
struct TYPE_10__ {int handle; } ;
struct TYPE_9__ {float member_0; float member_1; float member_2; float member_3; float Width; } ;
typedef TYPE_2__ RectF ;
typedef TYPE_3__ GdipFont ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,int ,TYPE_2__*,int ,TYPE_2__*,int *,int *) ;
 int FUNC_1 (int ,int ,char const*,int,int *,int) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_5__ VAR_1 ;

__attribute__((used)) static float
FUNC_3(nk_handle VAR_2, float VAR_3, const char *VAR_4, int VAR_5)
{
    GdipFont *VAR_6 = (GdipFont *)VAR_2.ptr;
    RectF VAR_7 = { 0.0f, 0.0f, 65536.0f, 65536.0f };
    RectF VAR_8;
    int VAR_9;
    WCHAR* VAR_10;
    if (!VAR_6 || !VAR_4)
        return 0;

    (void)VAR_3;
    VAR_9 = FUNC_1(VAR_0, 0, VAR_4, VAR_5, ((void*)0), 0);
    VAR_10 = (WCHAR*)FUNC_2(VAR_9 * sizeof(wchar_t));
    FUNC_1(VAR_0, 0, VAR_4, VAR_5, VAR_10, VAR_9);

    FUNC_0(VAR_1.memory, VAR_10, VAR_9, VAR_6->handle, &VAR_7, VAR_1.format, &VAR_8, ((void*)0), ((void*)0));
    return VAR_8.Width;
}
