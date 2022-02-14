
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gdIOCtxPtr ;
struct TYPE_3__ {scalar_t__ width; scalar_t__ height; short numplanes; short depth; int numcolors; int type; scalar_t__ topdown; } ;
typedef TYPE_1__ bmp_info_t ;


 int VAR_0 ;
 int FUNC_0 (short*,int ) ;

__attribute__((used)) static int FUNC_1(gdIOCtxPtr VAR_1, bmp_info_t *VAR_2)
{
 if (
     !FUNC_0((signed short int *)&VAR_2->width, VAR_1) ||
     !FUNC_0((signed short int *)&VAR_2->height, VAR_1) ||
     !FUNC_0(&VAR_2->numplanes, VAR_1) ||
     !FUNC_0(&VAR_2->depth, VAR_1)
 ) {
  return 1;
 }


 VAR_2->topdown = 0;

 VAR_2->numcolors = 1 << VAR_2->depth;
 VAR_2->type = VAR_0;

 if (VAR_2->width <= 0 || VAR_2->height <= 0 || VAR_2->numplanes <= 0 ||
         VAR_2->depth <= 0 || VAR_2->numcolors < 0) {
  return 1;
 }

 return 0;
}
