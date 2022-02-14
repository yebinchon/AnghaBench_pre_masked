
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WebPDecBuffer ;
typedef int FILE ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

int FUNC_1(FILE* VAR_1, const WebPDecBuffer* const VAR_2) {
  if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0)) return 0;

  FUNC_0(VAR_0, "PNG support not compiled. Please install the libpng "
          "development package before building.\n");
  FUNC_0(VAR_0, "You can run with -ppm flag to decode in PPM format.\n");
  return 0;
}
