
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
struct dc_capture {int x; int y; int capture_cursor; int compatibility; int bmp; int hdc; int old_bmp; int bits; int valid; void* height; void* width; } ;
struct TYPE_4__ {int biSize; int biBitCount; int biPlanes; void* biHeight; void* biWidth; } ;
struct TYPE_5__ {TYPE_1__ bmiHeader; int member_0; } ;
typedef TYPE_1__ BITMAPINFOHEADER ;
typedef TYPE_2__ BITMAPINFO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_2__*,int ,void**,int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct dc_capture*) ;
 int FUNC_5 (struct dc_capture*,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8(struct dc_capture *VAR_1, int VAR_2, int VAR_3, uint32_t VAR_4,
       uint32_t VAR_5, bool VAR_6, bool VAR_7)
{
 FUNC_5(VAR_1, 0, sizeof(struct dc_capture));

 VAR_1->x = VAR_2;
 VAR_1->y = VAR_3;
 VAR_1->width = VAR_4;
 VAR_1->height = VAR_5;
 VAR_1->capture_cursor = VAR_6;

 FUNC_6();

 if (!FUNC_3())
  VAR_7 = 1;

 VAR_1->compatibility = VAR_7;

 FUNC_4(VAR_1);

 FUNC_7();

 if (!VAR_1->valid)
  return;

 if (VAR_7) {
  BITMAPINFO VAR_8 = {0};
  BITMAPINFOHEADER *VAR_9 = &VAR_8.bmiHeader;
  VAR_9->biSize = sizeof(BITMAPINFOHEADER);
  VAR_9->biBitCount = 32;
  VAR_9->biWidth = VAR_4;
  VAR_9->biHeight = VAR_5;
  VAR_9->biPlanes = 1;

  VAR_1->hdc = FUNC_0(((void*)0));
  VAR_1->bmp =
   FUNC_1(VAR_1->hdc, &VAR_8, VAR_0,
      (void **)&VAR_1->bits, ((void*)0), 0);
  VAR_1->old_bmp = FUNC_2(VAR_1->hdc, VAR_1->bmp);
 }
}
