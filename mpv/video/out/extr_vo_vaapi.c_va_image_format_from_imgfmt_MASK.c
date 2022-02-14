
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct va_image_formats {int num; TYPE_1__* entries; } ;
struct priv {struct va_image_formats* image_formats; } ;
struct TYPE_3__ {int const fourcc; } ;
typedef TYPE_1__ VAImageFormat ;


 int FUNC_0 (int) ;

__attribute__((used)) static VAImageFormat *FUNC_1(struct priv *VAR_0,
                                                  int VAR_1)
{
    struct va_image_formats *VAR_2 = VAR_0->image_formats;
    const int VAR_3 = FUNC_0(VAR_1);
    if (!VAR_2 || !VAR_2->num || !VAR_3)
        return ((void*)0);
    for (int VAR_4 = 0; VAR_4 < VAR_2->num; VAR_4++) {
        if (VAR_2->entries[VAR_4].fourcc == VAR_3)
            return &VAR_2->entries[VAR_4];
    }
    return ((void*)0);
}
