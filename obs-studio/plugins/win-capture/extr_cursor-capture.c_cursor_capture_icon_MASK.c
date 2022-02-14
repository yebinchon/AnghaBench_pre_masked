
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct cursor_data {scalar_t__ last_cx; scalar_t__ last_cy; int texture; int y_hotspot; int x_hotspot; } ;
struct TYPE_4__ {int hbmMask; int hbmColor; int yHotspot; int xHotspot; } ;
typedef TYPE_1__ ICONINFO ;
typedef int HICON ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_1__*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (struct cursor_data*,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,int *,scalar_t__,int) ;

__attribute__((used)) static inline bool FUNC_6(struct cursor_data *VAR_0, HICON VAR_1)
{
 uint8_t *VAR_2;
 uint32_t VAR_3;
 uint32_t VAR_4;
 ICONINFO VAR_5;

 if (!VAR_1) {
  return 0;
 }
 if (!FUNC_1(VAR_1, &VAR_5)) {
  return 0;
 }

 VAR_2 = FUNC_3(&VAR_5, &VAR_4, &VAR_3);
 if (VAR_2) {
  if (VAR_0->last_cx != VAR_4 || VAR_0->last_cy != VAR_3) {
   VAR_0->texture = FUNC_4(VAR_0, VAR_4, VAR_3);
   VAR_0->last_cx = VAR_4;
   VAR_0->last_cy = VAR_3;
  }
  FUNC_5(VAR_0->texture, VAR_2, VAR_4 * 4, 0);
  FUNC_2(VAR_2);

  VAR_0->x_hotspot = VAR_5.xHotspot;
  VAR_0->y_hotspot = VAR_5.yHotspot;
 }

 FUNC_0(VAR_5.hbmColor);
 FUNC_0(VAR_5.hbmMask);
 return !!VAR_0->texture;
}
