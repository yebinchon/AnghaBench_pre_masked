
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int grayPattern ;
typedef int argbq ;
struct TYPE_9__ {size_t x; size_t y; int dir; } ;
struct TYPE_7__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biCompression; } ;
struct TYPE_8__ {scalar_t__ bmiColors; TYPE_1__ bmiHeader; } ;
typedef long RGBQUAD ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_2__ BITMAPINFO ;


 int VAR_0 ;
 void* FUNC_0 (TYPE_2__*,int ) ;
 void* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_4 (TYPE_2__*) ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* FUNC_5 (int) ;
 int** VAR_10 ;
 int FUNC_6 (scalar_t__,long*,int) ;
 TYPE_3__* VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;

__attribute__((used)) static void
FUNC_7()
{
  static long VAR_16[] = {
 0x55555555,
 0xaaaaaaaa,
 0x55555555,
 0xaaaaaaaa,
 0x55555555,
 0xaaaaaaaa,
 0x55555555,
 0xaaaaaaaa
  };
  static RGBQUAD VAR_17[] = {
   { 0, 0, 255, 0 },
 { 255, 255, 255, 0 }
  };
  BITMAPINFO *VAR_18;

  VAR_8 = FUNC_2(VAR_9);
  VAR_18 = FUNC_5(sizeof(BITMAPINFOHEADER) + sizeof(VAR_17) + sizeof(VAR_16));
  VAR_18->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
  VAR_18->bmiHeader.biWidth = 8;
  VAR_18->bmiHeader.biHeight = 8;
  VAR_18->bmiHeader.biPlanes = 1;
  VAR_18->bmiHeader.biBitCount = 1;
  VAR_18->bmiHeader.biCompression = VAR_0;
  (void) FUNC_6(VAR_18->bmiColors, VAR_17, sizeof(VAR_17));
  (void) FUNC_6(VAR_18->bmiColors + 2, VAR_16, sizeof(VAR_16));




  VAR_6 = FUNC_1(FUNC_3(255, 0, 0));


  FUNC_4(VAR_18);
  VAR_7 = FUNC_1(FUNC_3(0, 255, 0));


  VAR_10[VAR_14][VAR_15] |= (VAR_2 >> VAR_13);
  VAR_10[VAR_4][VAR_5] |= (VAR_2 >> VAR_3);


  VAR_12 = 0;
  VAR_11[VAR_12].x = VAR_4;
  VAR_11[VAR_12].y = VAR_5;
  VAR_11[VAR_12].dir = -1;
}
