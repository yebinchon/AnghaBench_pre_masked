
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_9__ {scalar_t__ x; } ;
struct TYPE_10__ {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_11__ {TYPE_1__ origin; TYPE_2__ size; } ;
typedef TYPE_3__ MMRect ;
typedef int MMRGBHex ;
typedef TYPE_4__ MMPoint ;
typedef int MMBitmapRef ;


 int FUNC_0 (int ,TYPE_3__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,float) ;

__attribute__((used)) static int FUNC_3(MMBitmapRef VAR_0, MMRGBHex VAR_1, MMPoint *VAR_2,
                             MMRect VAR_3, float VAR_4, MMPoint VAR_5)
{
 MMPoint VAR_6 = VAR_5;
 if (!FUNC_0(VAR_0, VAR_3)) return -1;

 for (; VAR_6.y < VAR_3.size.height; ++VAR_6.y) {
  for (; VAR_6.x < VAR_3.size.width; ++VAR_6.x) {
   MMRGBHex VAR_7 = FUNC_1(VAR_0, VAR_6.x, VAR_6.y);
   if (FUNC_2(VAR_1, VAR_7, VAR_4)) {
    if (VAR_2 != ((void*)0)) *VAR_2 = VAR_6;
    return 0;
   }
  }
  VAR_6.x = VAR_3.origin.x;
 }

 return -1;
}
