
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
struct vt_h264_encoder {int dummy; } ;
struct darray {int dummy; } ;
typedef int CMBlockBufferRef ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (int ,int ,int *,size_t*,char**) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct darray*,size_t*,size_t) ;
 int FUNC_5 (struct darray*,int) ;

__attribute__((used)) static void FUNC_6(struct vt_h264_encoder *VAR_1,
      struct darray *VAR_2,
      CMBlockBufferRef VAR_3,
      int VAR_4)
{
 size_t VAR_5;
 uint8_t *VAR_6;

 FUNC_2(VAR_3, 0, ((void*)0), &VAR_5,
        (char **)&VAR_6);

 size_t VAR_7 = VAR_5;

 while (VAR_7 > 0) {
  uint32_t VAR_8;
  if (VAR_4 == 1)
   VAR_8 = VAR_6[0];
  else if (VAR_4 == 2)
   VAR_8 = FUNC_0(
    ((uint16_t *)VAR_6)[0]);
  else if (VAR_4 == 4)
   VAR_8 = FUNC_1(
    ((uint32_t *)VAR_6)[0]);
  else
   return;

  VAR_7 -= VAR_4;
  VAR_6 += VAR_4;

  if (VAR_7 < VAR_8) {
   FUNC_3(VAR_0, "invalid nal block");
   return;
  }

  FUNC_5(VAR_2, 3);
  FUNC_4(VAR_2, VAR_6, VAR_8);

  VAR_7 -= VAR_8;
  VAR_6 += VAR_8;
 }
}
