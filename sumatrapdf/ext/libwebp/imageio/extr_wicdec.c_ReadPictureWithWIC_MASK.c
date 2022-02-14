
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct WebPPicture {int dummy; } ;
struct Metadata {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

int FUNC_1(const char* const VAR_1,
                       struct WebPPicture* const VAR_2, int VAR_3,
                       struct Metadata* const VAR_4) {
  (void)VAR_1;
  (void)VAR_2;
  (void)VAR_3;
  (void)VAR_4;
  FUNC_0(VAR_0, "Windows Imaging Component (WIC) support not compiled. "
                  "Visual Studio and mingw-w64 builds support WIC. Make sure "
                  "wincodec.h detection is working correctly if using autoconf "
                  "and HAVE_WINCODEC_H is defined before building.\n");
  return 0;
}
