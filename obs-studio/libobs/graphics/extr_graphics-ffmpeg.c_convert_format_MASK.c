
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum gs_color_format { ____Placeholder_gs_color_format } gs_color_format ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline enum gs_color_format FUNC_0(enum AVPixelFormat VAR_3)
{
 switch ((int)VAR_3) {
 case 128:
  return VAR_2;
 case 129:
  return VAR_0;
 case 130:
  return VAR_1;
 }

 return VAR_1;
}
