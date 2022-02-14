
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gdIOCtxPtr ;
struct TYPE_3__ {scalar_t__ width; scalar_t__ height; scalar_t__ numplanes; scalar_t__ depth; scalar_t__ enctype; scalar_t__ size; scalar_t__ hres; scalar_t__ vres; scalar_t__ numcolors; scalar_t__ mincolors; int topdown; int type; } ;
typedef TYPE_1__ bmp_info_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 (scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_3(gdIOCtxPtr VAR_1, bmp_info_t *VAR_2)
{
 char VAR_3[24];
 if (
     !FUNC_1(&VAR_2->width, VAR_1) ||
     !FUNC_1(&VAR_2->height, VAR_1) ||
     !FUNC_2(&VAR_2->numplanes, VAR_1) ||
     !FUNC_2(&VAR_2->depth, VAR_1) ||
     !FUNC_1(&VAR_2->enctype, VAR_1) ||
     !FUNC_1(&VAR_2->size, VAR_1) ||
     !FUNC_1(&VAR_2->hres, VAR_1) ||
     !FUNC_1(&VAR_2->vres, VAR_1) ||
     !FUNC_1(&VAR_2->numcolors, VAR_1) ||
     !FUNC_1(&VAR_2->mincolors, VAR_1)
 ) {
  return 1;
 }


 if (!FUNC_0(VAR_3, 24, VAR_1)) {
  return 1;
 }

 if (VAR_2->height < 0) {
  VAR_2->topdown = 1;
  VAR_2->height = -VAR_2->height;
 } else {
  VAR_2->topdown = 0;
 }

 VAR_2->type = VAR_0;

 if (VAR_2->width <= 0 || VAR_2->height <= 0 || VAR_2->numplanes <= 0 ||
         VAR_2->depth <= 0 || VAR_2->numcolors < 0 || VAR_2->mincolors < 0) {
  return 1;
 }


 return 0;
}
