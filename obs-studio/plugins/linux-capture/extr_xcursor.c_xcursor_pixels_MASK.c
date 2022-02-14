
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_fast32_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int width; int height; int * pixels; } ;
typedef TYPE_1__ XFixesCursorImage ;


 scalar_t__* FUNC_0 (int) ;

__attribute__((used)) static uint32_t *FUNC_1(XFixesCursorImage *VAR_0)
{
 uint_fast32_t VAR_1 = VAR_0->width * VAR_0->height;
 uint32_t *VAR_2 = FUNC_0(VAR_1 * sizeof(uint32_t));

 for (uint_fast32_t VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
  VAR_2[VAR_3] = (uint32_t)VAR_0->pixels[VAR_3];

 return VAR_2;
}
