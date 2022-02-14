
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct shiftNode {int dummy; } ;
typedef int UTHashTable ;
struct TYPE_8__ {int width; size_t height; } ;
struct TYPE_7__ {size_t y; int x; } ;
typedef int MMRGBHex ;
typedef TYPE_1__ MMPoint ;
typedef TYPE_2__* MMBitmapRef ;


 TYPE_1__ FUNC_0 (int,size_t) ;
 int FUNC_1 (TYPE_2__*,int,size_t) ;
 int FUNC_2 (int *,int ,TYPE_1__) ;
 int FUNC_3 (int *,size_t const,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(UTHashTable *VAR_0, MMBitmapRef VAR_1)
{
 const MMPoint VAR_2 = FUNC_0(VAR_1->width - 1, VAR_1->height - 1);
 const size_t VAR_3 = VAR_1->width * VAR_1->height;
 MMPoint VAR_4;


 FUNC_3(VAR_0, VAR_3, sizeof(struct shiftNode));


 for (VAR_4.y = VAR_2.y; ; --VAR_4.y) {
  for (VAR_4.x = VAR_2.x; ; --VAR_4.x) {
   MMRGBHex VAR_5 = FUNC_1(VAR_1, VAR_4.x, VAR_4.y);
   if (!FUNC_4(VAR_0, VAR_5)) {
    FUNC_2(VAR_0, VAR_5,
                   FUNC_0(VAR_1->width - VAR_4.x,
                               VAR_1->height - VAR_4.y));
   }

   if (VAR_4.x == 0) break;
  }
  if (VAR_4.y == 0) break;
 }
}
