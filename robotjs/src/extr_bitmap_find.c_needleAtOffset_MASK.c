
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_8__ {scalar_t__ y; scalar_t__ x; } ;
typedef int MMRGBHex ;
typedef TYPE_1__ MMPoint ;
typedef TYPE_2__* MMBitmapRef ;


 TYPE_1__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ,float) ;

__attribute__((used)) static int FUNC_3(MMBitmapRef VAR_0, MMBitmapRef VAR_1,
                          MMPoint VAR_2, float VAR_3)
{
 const MMPoint VAR_4 = FUNC_0(VAR_0->width - 1, VAR_0->height - 1);
 MMPoint VAR_5;



 for (VAR_5.y = VAR_4.y; ; --VAR_5.y) {
  for (VAR_5.x = VAR_4.x; ; --VAR_5.x) {
   MMRGBHex VAR_6 = FUNC_1(VAR_0, VAR_5.x, VAR_5.y);
   MMRGBHex VAR_7 = FUNC_1(VAR_1, VAR_2.x + VAR_5.x,
                                               VAR_2.y + VAR_5.y);
   if (!FUNC_2(VAR_6, VAR_7, VAR_3)) return 0;
   if (VAR_5.x == 0) break;
  }
  if (VAR_5.y == 0) break;
 }

 return 1;
}
