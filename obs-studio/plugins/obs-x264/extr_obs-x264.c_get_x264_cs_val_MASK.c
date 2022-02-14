
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum video_colorspace { ____Placeholder_video_colorspace } video_colorspace ;


 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const* const,char const*) ;

__attribute__((used)) static inline int FUNC_2(enum video_colorspace VAR_0,
      const char *const VAR_1[])
{
 const char *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = 0;
 do {
  if (FUNC_1(VAR_1[VAR_3], VAR_2) == 0)
   return VAR_3;
 } while (!!VAR_1[++VAR_3]);

 return 0;
}
