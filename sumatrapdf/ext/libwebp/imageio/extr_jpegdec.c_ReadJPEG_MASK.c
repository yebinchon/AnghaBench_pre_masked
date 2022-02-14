
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct WebPPicture {int dummy; } ;
struct Metadata {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

int FUNC_1(const uint8_t* const VAR_1, size_t VAR_2,
             struct WebPPicture* const VAR_3, int VAR_4,
             struct Metadata* const VAR_5) {
  (void)VAR_1;
  (void)VAR_2;
  (void)VAR_3;
  (void)VAR_4;
  (void)VAR_5;
  FUNC_0(VAR_0, "JPEG support not compiled. Please install the libjpeg "
          "development package before building.\n");
  return 0;
}
