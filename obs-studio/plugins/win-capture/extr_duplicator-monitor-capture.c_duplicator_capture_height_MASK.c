
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct duplicator_capture {int rot; int width; int height; } ;



__attribute__((used)) static uint32_t FUNC_0(void *VAR_0)
{
 struct duplicator_capture *VAR_1 = VAR_0;
 return VAR_1->rot % 180 == 0 ? VAR_1->height : VAR_1->width;
}
