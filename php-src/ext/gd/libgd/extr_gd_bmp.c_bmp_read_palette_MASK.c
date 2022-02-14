
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
typedef int gdIOCtxPtr ;
struct TYPE_3__ {int* red; int* green; int* blue; int* open; } ;


 int FUNC_0 (int*,int ) ;

__attribute__((used)) static int FUNC_1(gdImagePtr VAR_0, gdIOCtxPtr VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (
      !FUNC_0(&VAR_7, VAR_1) ||
      !FUNC_0(&VAR_6, VAR_1) ||
      !FUNC_0(&VAR_5, VAR_1) ||
      (VAR_3 && !FUNC_0(&VAR_8, VAR_1))
  ) {
   return 1;
  }
  VAR_0->red[VAR_4] = VAR_5;
  VAR_0->green[VAR_4] = VAR_6;
  VAR_0->blue[VAR_4] = VAR_7;
  VAR_0->open[VAR_4] = 1;
 }
 return 0;
}
