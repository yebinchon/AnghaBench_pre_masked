
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ depth; int bits_per_pixel; int visualid; } ;
typedef TYPE_1__ XVisualInfo ;
typedef TYPE_1__ XPixmapFormatValues ;
typedef int Visual ;
struct TYPE_11__ {scalar_t__ depth; } ;
struct TYPE_12__ {int screen; int shmcode; int useshm; int bitsperpixel; TYPE_3__ visual; int * display; scalar_t__ colormap; } ;
typedef int Display ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int ,TYPE_1__*,int*) ;
 TYPE_1__* FUNC_2 (int *,int*) ;
 scalar_t__ FUNC_3 (int *,char*,int*,int*,int*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*) ;
 TYPE_5__ VAR_1 ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_3__*,TYPE_1__*,int) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 () ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_13(Display *VAR_4, int VAR_5, Visual *VAR_6)
{
 XVisualInfo VAR_7;
 XVisualInfo *VAR_8;
 int VAR_9;
 XPixmapFormatValues *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_1.display = VAR_4;
 VAR_1.screen = VAR_5;
 VAR_1.colormap = 0;


 VAR_7.visualid = FUNC_6(VAR_6);
 VAR_8 = FUNC_1(VAR_4, VAR_0, &VAR_7, &VAR_9);
 if (VAR_9 != 1) {
  FUNC_8(VAR_2, "Visual not found!\n");
  FUNC_0(VAR_8);
  return 0;
 }
 FUNC_10(&VAR_1.visual, VAR_8, sizeof (XVisualInfo));
 FUNC_0(VAR_8);


 VAR_10 = FUNC_2(VAR_1.display, &VAR_11);
 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  if (VAR_10[VAR_13].depth == VAR_1.visual.depth) {
   VAR_1.bitsperpixel = VAR_10[VAR_13].bits_per_pixel;
   break;
  }
 }
 FUNC_0(VAR_10);
 if (VAR_13 == VAR_11) {
  FUNC_8(VAR_2, "PixmapFormat not found!\n");
  return 0;
 }


 FUNC_12();


 FUNC_9();


 if (FUNC_3(VAR_4, "MIT-SHM", &VAR_14, &VAR_15, &VAR_16) &&
  FUNC_5(VAR_4))
  VAR_1.shmcode = VAR_14;


 FUNC_4(VAR_3);


 VAR_1.useshm = 1;
 VAR_12 = FUNC_7();
 if (!VAR_12)
  return 0;





 return 1;
}
