
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int pixel; int red; int green; int blue; int flags; } ;
struct TYPE_4__ {scalar_t__ class; int depth; int visual; } ;
struct TYPE_5__ {TYPE_1__ visual; scalar_t__ colormap; TYPE_3__* rgbcube; int display; int screen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,TYPE_3__*,int) ;
 int FUNC_3 (int ,char*,scalar_t__,int) ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_4(void)
{
 if (VAR_6.visual.class == VAR_4 && VAR_6.visual.depth == 8)
 {
  int VAR_8, VAR_9, VAR_10, VAR_11;
  VAR_8 = 0;
  for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
   for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
    for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
     VAR_6.rgbcube[VAR_8].pixel = VAR_8;
     VAR_6.rgbcube[VAR_8].red = (VAR_9 * 36) << 8;
     VAR_6.rgbcube[VAR_8].green = (VAR_10 * 36) << 8;
     VAR_6.rgbcube[VAR_8].blue = (VAR_11 * 85) << 8;
     VAR_6.rgbcube[VAR_8].flags =
     VAR_3 | VAR_2 | VAR_1;
     VAR_8++;
    }
   }
  }
  VAR_6.colormap = FUNC_1(VAR_6.display,
   FUNC_0(VAR_6.display, VAR_6.screen),
   VAR_6.visual.visual,
   VAR_0);
  FUNC_2(VAR_6.display, VAR_6.colormap, VAR_6.rgbcube, 256);
  return;
 }
 else if (VAR_6.visual.class == VAR_5)
 {
  VAR_6.colormap = 0;
  return;
 }
 FUNC_3(VAR_7, "Cannot handle visual class %ld with depth: %d\n",
  VAR_6.visual.class, VAR_6.visual.depth);
 return;
}
