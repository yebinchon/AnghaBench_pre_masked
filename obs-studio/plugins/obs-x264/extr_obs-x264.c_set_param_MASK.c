
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_x264 {int params; } ;


 char* VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char**,char const**) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (int *,char*,char const*) ;

__attribute__((used)) static inline void FUNC_6(struct obs_x264 *VAR_1, const char *VAR_2)
{
 char *VAR_3;
 const char *VAR_4;

 if (FUNC_1(VAR_2, &VAR_3, &VAR_4)) {
  if (FUNC_2(VAR_3, "preset") != 0 &&
      FUNC_2(VAR_3, "profile") != 0 && FUNC_2(VAR_3, "tune") != 0 &&
      FUNC_2(VAR_3, "fps") != 0 &&
      FUNC_2(VAR_3, "force-cfr") != 0 &&
      FUNC_2(VAR_3, "width") != 0 && FUNC_2(VAR_3, "height") != 0 &&
      FUNC_2(VAR_3, "opencl") != 0) {
   if (FUNC_2(VAR_3, VAR_0) == 0)
    FUNC_3(VAR_3, "opencl");
   if (FUNC_5(&VAR_1->params, VAR_3, VAR_4) != 0)
    FUNC_4("x264 param: %s failed", VAR_2);
  }

  FUNC_0(VAR_3);
 }
}
