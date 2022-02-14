
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AnimatedImage ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const char VAR_1[], AnimatedImage* const VAR_2,
                           int VAR_3, const char VAR_4[]) {
  (void)VAR_1;
  (void)VAR_2;
  (void)VAR_3;
  (void)VAR_4;
  FUNC_0(VAR_0, "GIF support not compiled. Please install the libgif-dev "
          "package before building.\n");
  return 0;
}
