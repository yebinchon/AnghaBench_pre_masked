
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ak4613_formats {unsigned int fmt; unsigned int width; } ;
struct ak4613_interface {struct ak4613_formats capture; struct ak4613_formats playback; } ;



__attribute__((used)) static bool FUNC_0(const struct ak4613_interface *VAR_0,
        int VAR_1,
        unsigned int VAR_2, unsigned int VAR_3)
{
 const struct ak4613_formats *VAR_4;

 VAR_4 = (VAR_1) ? &VAR_0->playback : &VAR_0->capture;

 if (VAR_4->fmt != VAR_2)
  return 0;

 if (VAR_4->width != VAR_3)
  return 0;

 return 1;
}
