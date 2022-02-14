
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ image_id; } ;
struct va_surface {int is_derived; TYPE_1__ image; int display; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct va_surface *VAR_1)
{
    if (!VAR_1 || VAR_1->image.image_id == VAR_0)
        return;
    FUNC_0(VAR_1->display, VAR_1->image.image_id);
    VAR_1->image.image_id = VAR_0;
    VAR_1->is_derived = 0;
}
