
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ image_id; } ;
struct va_surface {scalar_t__ id; int display; TYPE_1__ image; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct va_surface*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
    struct va_surface *VAR_2 = VAR_1;

    if (VAR_2->id != VAR_0) {
        if (VAR_2->image.image_id != VAR_0)
            FUNC_1(VAR_2->display, VAR_2->image.image_id);
        FUNC_2(VAR_2->display, &VAR_2->id, 1);
    }

    FUNC_0(VAR_2);
}
