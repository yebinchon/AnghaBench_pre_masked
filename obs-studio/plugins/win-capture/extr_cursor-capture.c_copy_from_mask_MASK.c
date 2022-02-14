
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int bmHeight; long bmWidth; long bmWidthBytes; } ;
struct TYPE_5__ {int hbmMask; } ;
typedef TYPE_1__ ICONINFO ;
typedef TYPE_2__ BITMAP ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*,long,int) ;
 scalar_t__* FUNC_2 (long) ;
 scalar_t__* FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static inline uint8_t *FUNC_4(ICONINFO *VAR_0, uint32_t *VAR_1,
          uint32_t *VAR_2)
{
 uint8_t *VAR_3;
 uint8_t *VAR_4;
 long VAR_5;
 long VAR_6;
 BITMAP VAR_7;

 VAR_4 = FUNC_3(VAR_0->hbmMask, &VAR_7);
 if (!VAR_4) {
  return ((void*)0);
 }

 VAR_7.bmHeight /= 2;

 VAR_5 = VAR_7.bmHeight * VAR_7.bmWidth;
 VAR_3 = FUNC_2(VAR_5 * 4);

 VAR_6 = VAR_7.bmWidthBytes * VAR_7.bmHeight;

 for (long VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  uint8_t VAR_9 = FUNC_1(VAR_4, VAR_8, 0);
  uint8_t VAR_10 = FUNC_1(VAR_4 + VAR_6, VAR_8, 1);

  if (!VAR_9) {
   VAR_3[VAR_8 * 4 + 3] = VAR_10;
  } else {
   *(uint32_t *)&VAR_3[VAR_8 * 4] = !!VAR_10 ? 0xFFFFFFFF
             : 0xFF000000;
  }
 }

 FUNC_0(VAR_4);

 *VAR_1 = VAR_7.bmWidth;
 *VAR_2 = VAR_7.bmHeight;
 return VAR_3;
}
