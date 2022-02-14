
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biSizeImage; int biCompression; } ;
struct TYPE_9__ {TYPE_1__ bmiHeader; } ;
struct TYPE_8__ {int bmWidth; int bmHeight; } ;
typedef int HDC ;
typedef scalar_t__ HBITMAP ;
typedef int COLORREF ;
typedef int BOOL ;
typedef int BITMAPINFO ;
typedef TYPE_2__ BITMAP ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,int,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,TYPE_3__*,int ,int**,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_5 (int ,int,int) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (int) ;
 int VAR_7 ;
 int FUNC_9 (int ,scalar_t__) ;
 int VAR_8 ;
 int FUNC_10 (TYPE_3__*,int) ;
 TYPE_3__ VAR_9 ;
 int* VAR_10 ;

BOOL FUNC_11(HDC VAR_11, BITMAP *VAR_12)
{
  FUNC_10(&VAR_9, sizeof(BITMAPINFO));
  VAR_9.bmiHeader.biSize = sizeof(BITMAPINFO);
  VAR_9.bmiHeader.biWidth = VAR_12->bmWidth;
  VAR_9.bmiHeader.biHeight = VAR_12->bmHeight;
  VAR_9.bmiHeader.biPlanes = 1;
  VAR_9.bmiHeader.biBitCount = 32;
  VAR_9.bmiHeader.biCompression = VAR_0;
  VAR_9.bmiHeader.biSizeImage = 4 * VAR_9.bmiHeader.biWidth * VAR_9.bmiHeader.biHeight;
  VAR_3 = FUNC_2(VAR_11, &VAR_9, VAR_1, &VAR_10, 0, 0);
  if(VAR_3)
  {
    HBITMAP VAR_13;
    FUNC_9(VAR_11, VAR_3);
    FUNC_0(VAR_11, 0, 0, VAR_12->bmWidth, VAR_12->bmHeight, VAR_5, 0, 0, VAR_7);


    VAR_13 = FUNC_7(VAR_4, FUNC_8(2000), VAR_6,
                            0, 0, 0);
    if(VAR_13)
    {
      COLORREF *VAR_14 = VAR_10;
      int VAR_15, VAR_16;
      HDC VAR_17 = FUNC_1(((void*)0));
      if(!VAR_17)
      {
        FUNC_4(VAR_13);
        return VAR_2;
      }
      FUNC_9(VAR_17, VAR_13);

      for(VAR_16 = 0; VAR_16 < VAR_12->bmHeight; VAR_16++)
      {
        for(VAR_15 = 0; VAR_15 < VAR_12->bmWidth; VAR_15++)
        {
          COLORREF VAR_18 = (COLORREF)FUNC_6(FUNC_5(VAR_17, VAR_15, VAR_16)) << 24;
          *VAR_14++ |= VAR_18;
        }
      }

      FUNC_4(VAR_13);
      FUNC_3(VAR_17);
      return VAR_8;
    }
    return VAR_2;
  }
  return VAR_2;
}
