
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef long uint32_t ;
struct TYPE_6__ {int bmBitsPixel; long bmHeight; long bmWidth; } ;
struct TYPE_5__ {int hbmMask; int hbmColor; } ;
typedef TYPE_1__ ICONINFO ;
typedef TYPE_2__ BITMAP ;


 int FUNC_0 (int *,int *,long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,long) ;
 int * FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static inline uint8_t *FUNC_4(ICONINFO *VAR_0, uint32_t *VAR_1,
           uint32_t *VAR_2)
{
 BITMAP VAR_3;
 BITMAP VAR_4;
 uint8_t *VAR_5;
 uint8_t *VAR_6;

 VAR_5 = FUNC_3(VAR_0->hbmColor, &VAR_3);
 if (!VAR_5) {
  return ((void*)0);
 }

 if (VAR_3.bmBitsPixel < 32) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }

 VAR_6 = FUNC_3(VAR_0->hbmMask, &VAR_4);
 if (VAR_6) {
  long VAR_7 = VAR_3.bmHeight * VAR_3.bmWidth;

  if (!FUNC_2(VAR_5, VAR_7))
   FUNC_0(VAR_5, VAR_6, VAR_7);

  FUNC_1(VAR_6);
 }

 *VAR_1 = VAR_3.bmWidth;
 *VAR_2 = VAR_3.bmHeight;
 return VAR_5;
}
