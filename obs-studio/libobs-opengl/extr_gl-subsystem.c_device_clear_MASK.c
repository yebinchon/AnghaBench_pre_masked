
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct vec4 {int w; int z; int y; int x; } ;
typedef int gs_device_t ;
typedef int GLbitfield ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (float) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

void FUNC_7(gs_device_t *VAR_7, uint32_t VAR_8,
    const struct vec4 *VAR_9, float VAR_10, uint8_t VAR_11)
{
 GLbitfield VAR_12 = 0;

 if (VAR_8 & VAR_3) {
  FUNC_3(VAR_9->x, VAR_9->y, VAR_9->z, VAR_9->w);
  VAR_12 |= VAR_0;
 }

 if (VAR_8 & VAR_4) {
  FUNC_4(VAR_10);
  VAR_12 |= VAR_1;
 }

 if (VAR_8 & VAR_5) {
  FUNC_5(VAR_11);
  VAR_12 |= VAR_2;
 }

 FUNC_2(VAR_12);
 if (!FUNC_6("glClear"))
  FUNC_1(VAR_6, "device_clear (GL) failed");

 FUNC_0(VAR_7);
}
